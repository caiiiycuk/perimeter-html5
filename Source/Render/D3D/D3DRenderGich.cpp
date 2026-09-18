//Hand the native window to the shim before the device exists, so it presents
//into it instead of rendering offscreen. The shim knows nothing about SDL;
//what it wants is the pair EGL needs, which SDL exposes through the WM info.
//
//A file of its own because SDL_syswm.h pulls in Xlib, whose typedef
//XErrorHandler collides with XTool's struct of the same name, so this cannot
//sit next to the game's headers in D3DRender.cpp.
//
//On Wayland EGL draws into a wl_egl_window, not a wl_surface, and SDL only
//exposes the surface; that case is left to a later change and reports.
#if defined(PERIMETER_GICH) && !defined(__EMSCRIPTEN__)
#include <cstdio>
#include <SDL.h>
#include <SDL_syswm.h>
#include <shim/gles/shim_gles_native_window.h>

void gich_hand_over_window(SDL_Window* window) {
    SDL_SysWMinfo info;
    SDL_VERSION(&info.version);
    if (!SDL_GetWindowWMInfo(window, &info)) {
        fprintf(stderr, "gich: SDL_GetWindowWMInfo failed: %s\n", SDL_GetError());
        return;
    }
    switch (info.subsystem) {
#if defined(SDL_VIDEO_DRIVER_X11)
        case SDL_SYSWM_X11:
            shim_gles_native_window_set(SHIM_GLES_NATIVE_PLATFORM_X11,
                                        info.info.x11.display,
                                        reinterpret_cast<void*>(info.info.x11.window));
            return;
#endif
        default:
            fprintf(stderr, "gich: SDL video subsystem %d is not handed to the shim; "
                            "the window stays black. Run with SDL_VIDEODRIVER=x11.\n",
                    (int)info.subsystem);
            return;
    }
}
#endif
