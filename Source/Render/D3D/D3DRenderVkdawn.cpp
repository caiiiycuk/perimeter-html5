//Glue between the game and the vkdawn package (dxvk-st on the vkdawn layer).
//The layer has no window of its own: dxvk-st uses a headless WSI whose only
//knowledge of the window is the size registered here, and the layer either
//presents into a canvas (browser) or hands finished frames to a callback
//(native), which we blit into the SDL window.
#if defined(PERIMETER_VKDAWN)

#include <cstdio>
#include <cstdlib>
#include <SDL.h>
#include <vkdawn/vkdawn.h>

namespace {
    SDL_Window* g_window = nullptr;
    uint32_t g_frames = 0;
    uint32_t g_last_errors = 0;

#if !defined(__EMSCRIPTEN__)
    void blit_frame(uint32_t, uint32_t w, uint32_t h, const uint8_t* rgb, void*) {
        SDL_Surface* dst = SDL_GetWindowSurface(g_window);
        SDL_Surface* src = SDL_CreateRGBSurfaceFrom(const_cast<uint8_t*>(rgb), w, h, 24, w * 3,
                                                    0x0000FF, 0x00FF00, 0xFF0000, 0);
        if (dst && src) {
            if (dst->w == (int)w && dst->h == (int)h)
                SDL_BlitSurface(src, nullptr, dst, nullptr);
            else
                SDL_BlitScaled(src, nullptr, dst, nullptr);
            SDL_UpdateWindowSurface(g_window);
        }
        SDL_FreeSurface(src);
    }
#endif
}

void vkdawn_window_resized(SDL_Window* window, int w, int h) {
    vkdawn_wsi_register_window(window, w, h);
    fprintf(stdout, "vkdawn: window %dx%d\n", w, h);
}

void vkdawn_hand_over_window(SDL_Window* window) {
    g_window = window;
    //The game sets SDL2 (replace=0) right after this call; headless is the
    //only WSI in the package.
    setenv("DXVK_WSI_DRIVER", "Headless", 1);

    int w = 0, h = 0;
    SDL_GetWindowSize(window, &w, &h);
    vkdawn_window_resized(window, w, h);

    vkdawn_config cfg = {};
#if defined(__EMSCRIPTEN__)
    cfg.canvas_selector = "#canvas";
#else
    //SDL2 otherwise backs the window surface with a GL texture, which on a
    //headless X server means llvmpipe on the main thread; XShm is enough.
    SDL_SetHint(SDL_HINT_FRAMEBUFFER_ACCELERATION, "0");
    cfg.frame_fn = blit_frame;
#endif
    vkdawn_set_config(&cfg);
}

void vkdawn_report() {
    const char** names = nullptr;
    const uint32_t* counts = nullptr;
    uint32_t n = vkdawn_unsupported(&names, &counts);
    fprintf(stdout, "vkdawn: frames %u errors %u unsupported %u\n", g_frames, vkdawn_error_count(), n);
    for (uint32_t i = 0; i < n; i++)
        fprintf(stdout, "vkdawn:   %s x%u\n", names[i], counts[i]);
    fflush(stdout);
}

//Called after every Present: logs the first frame and every change of the
//layer's error count, so the log shows when a defect first appears.
void vkdawn_presented() {
    g_frames++;
    uint32_t errors = vkdawn_error_count();
    if (g_frames == 1 || errors != g_last_errors) {
        g_last_errors = errors;
        vkdawn_report();
    }
}

#endif
