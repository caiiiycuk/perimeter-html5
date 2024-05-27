
enum ShellControlType
{
	SQSH_GENERAL_TYPE = 0,
	SQSH_MAP_WINDOW_TYPE,
	SQSH_PUSH_BUTTON_TYPE,
	SQSH_REPLAY_PLAYER_BUTTON_TYPE,
	SQSH_BUTTON_TYPE,
	SQSH_LEGION_BUTTON_TYPE,
	SQSH_LIST_BOX_TYPE,
	SQSH_CHAT_BOX_TYPE,
	SQSH_STATS_LIST_TYPE,
	SQSH_SLIDER_TYPE,
	SQSH_COMBO_TYPE,
	SQSH_COLOR_COMBO_TYPE,
	SQSH_EDIT_BOX_TYPE,
	SQSH_INGAME_CHAT_EDIT_BOX_TYPE,
	SQSH_TEXT_WINDOW_TYPE,
	SQSH_TEXT_STRING_WINDOW_TYPE,
    SQSH_TEXT_SCROLLABLE_WINDOW_TYPE,
	SQSH_COMPLEX_PUSH_BUTTON_TYPE,
	SQSH_ATOM_BUTTON_TYPE,
	SQSH_MULTITEX_WINDOW,
	SQSH_MOVE_BUTTON_TYPE,
	SQSH_SCALE_BUTTON_TYPE,
	SQSH_SCALE_RESULT_BUTTON_TYPE,
	SQSH_PUSHSCALE_BUTTON_TYPE,
	SQSH_DLG_TYPE,
	SQSH_WORLD_WINDOW_TYPE,
	SQSH_SPLASHSCREEN,
	SQSH_MAPWINDOW,
	SQSH_PORTRAIT_TYPE,
	SQSH_NOMAD_LOGO_TYPE,
	SQSH_CREDITS_TEXT_TYPE,
	SQSH_TERRAINBUILDBUTTON_TYPE,
	SQSH_TABSHEET_TYPE,
	SQSH_PROGRESS_ENERGY_TYPE,
	SQSH_PROGRESS_COLLECTED_TYPE,
	SQSH_PROGRESS_SHIELD_TYPE,
	SQSH_PROGRESS_TERRAIN_TYPE,
	SQSH_PROGRESS_MUTATION_TYPE,
	SQSH_PROGRESS_UNIT_CHARGE_TYPE,
	SQSH_PLAYER_COLOR_WND_TYPE,
	SQSH_INFOWND_TYPE,
	SQSH_HINTWND_TYPE,
	SQSH_BACKGROUND_TYPE,
	SQSH_GENERAL_WND_TYPE,
	SQSH_CHATINFO_WND_TYPE,
    SQSH_NETLATENCYINFOWND_TYPE
};

enum ShellControlID
{
	SQSH_STATIC_ID = 0,
	SQSH_GAME_SCREEN_ID,
	SQSH_BACKGRND_ID,
	SQSH_MAP_WINDOW_ID,
	SQSH_WORKAREA2_ID, //Тулзер рвов
	SQSH_WORKAREA3_ID, //Тулзер выравнивания
	SQSH_WORKAREA4_ID, //Тулзер отмены ровняния и рвов
	SQSH_FIELD_ON_ID, //Общее включения поля
	SQSH_FIELD_OFF_ID, //Общее выключение поля
	SQSH_SOLDIER_ID, //Заказ солдата
	SQSH_OFFICER_ID, //Заказ оффицера
	SQSH_TECHNIC_ID, //Заказ техника
	SQSH_TOGETHER_ID, //Объединение сквадов
	SQSH_YADRO_ID, //Ядро
	SQSH_YADRO_EX_ID, //Усилитель
	SQSH_SOLDIER_PLANT_ID, //Завод солдат
	SQSH_OFFICER_PLANT_ID, //Завод офицеров
	SQSH_TECHNIC_PLANT_ID, //Завод техников
	SQSH_COMMANDER_ID, //Командный центр
	SQSH_RELAY_ID, //Транслятор
	SQSH_STATION1_ID, //Ракетная лаборатория
	SQSH_STATION2_ID, //Лазерная лаборатория
	SQSH_STATION3_ID, //Бомбовая лаборатория
	SQSH_STATION4_ID, //Подземная лаборатория
	SQSH_STATION5_ID, //Антигравитационная лаборатория
	SQSH_STATION_ELECTRO_LAB_ID, //АДДОН Электрическая лаборатория
	SQSH_STATION_EXODUS_LAB_ID, //Лаборатория исходников
	SQSH_STATION_EMPIRE_LAB_ID, //Лаборатория империи
	SQSH_STATION_HARKBACK_LAB_ID, //Лаборатория возвратников
	SQSH_CORRIDOR_ALPHA_ID, //Альфа портал
	SQSH_CORRIDOR_OMEGA_ID, //Омега портал 
	SQSH_STATIC_BOMB_ID, //Бомба
	SQSH_GUN_LASER_ID, //Лазерная пушка
	SQSH_GUN_ELECTRO_ID, //Электрическая пушка
	SQSH_GUN_ROCKET_ID, //Ракетная пушка
	SQSH_GUN_HOWITZER_ID, //Гаубица
	SQSH_GUN_FILTH_ID, //Генератор скверны
	SQSH_GUN_GIMLET_ID, //Скаморазрушитель
	SQSH_GUN_SUBCHASER_ID, //Подземпушка
	SQSH_GUN_BALLISTIC_ID, //Баллистическая ракета


	SQSH_FRAME_TERRAIN_BUILD1_ID, //Заказ в первый слот бригадира или прораба
	SQSH_FRAME_TERRAIN_BUILD2_ID, //Заказ во второй слот бригадира или прораба
	SQSH_FRAME_TERRAIN_BUILD3_ID, //Заказ в третий слот бригадира или прораба
	SQSH_FRAME_TERRAIN_BUILD4_ID, //Заказ в четвертый слот бригадира или прораба
	SQSH_FRAME_TERRAIN_BUILD5_ID, //Заказ в пятый слот бригадира или прораба

    //Keep these as placeholder due to hardcoded id's in InterfaceAttributes
    //Used to be SQSH_SQUAD_*
    SQSH_SQUAD_LEGACY_1,
	SQSH_SQUAD_LEGACY_2,
	SQSH_SQUAD_LEGACY_3,
	SQSH_SQUAD_LEGACY_4,
	SQSH_SQUAD_LEGACY_5,
	SQSH_SQUAD_LEGACY_6,
	SQSH_SQUAD_LEGACY_7,
	SQSH_SQUAD_LEGACY_8,
	SQSH_SQUAD_LEGACY_9,
	SQSH_SQUAD_LEGACY_10,
	SQSH_SQUAD_LEGACY_11,
	SQSH_SQUAD_LEGACY_12,
	SQSH_SQUAD_LEGACY_13,
	SQSH_SQUAD_LEGACY_14,
	SQSH_SQUAD_LEGACY_15,
	SQSH_SQUAD_LEGACY_16,
	SQSH_SQUAD_LEGACY_17,
	SQSH_SQUAD_LEGACY_18,
	SQSH_SQUAD_LEGACY_19,
	SQSH_SQUAD_LEGACY_20,
	SQSH_SQUAD_LEGACY_21,
	SQSH_SQUAD_LEGACY_22,
	SQSH_SQUAD_LEGACY_23,
	SQSH_SQUAD_LEGACY_24,
    SQSH_SQUAD_LEGACY_25,
    SQSH_SQUAD_LEGACY_26,

	SQSH_SPEED_PAUSE, //Пауза
	SQSH_SPEED_50, //50% скорость игры
	SQSH_SPEED_100, //100% скорость игры
	SQSH_SPEED_150, //150% скорость игры

	SQSH_MENU_BUTTON_ID,
	SQSH_TASK_BUTTON_ID,
	SQSH_REPLAY_PLAYER_BUTTON_ID,
    SQSH_EMBLEM_ID,

	SQSH_TAB_BUILD_ID, //Папки зданий
	SQSH_TAB_SQUAD_ID, //Папки сквадов

	SQSH_HINT_ID,

	SQSH_SELPANEL_MOVE_ID, // ТВ двигаться
	SQSH_SELPANEL_STOP_ID, // ТВ стоп
	SQSH_SELPANEL_STOP2_ID, // ТВ стоп спец. пушек
	SQSH_SELPANEL_SQ_ATTACK_ID, //ТВ атаковать
	SQSH_SELPANEL_SQ_BACK_ID, //ТВ вернуться на базу
	SQSH_SELPANEL_SQ_OFDEF_ID, //ТВ оффенс-дефенс
	SQSH_SELPANEL_SQ_PATROL_ID, //ТВ патрулировать
	SQSH_SELPANEL_BRIG_BACK_ID, //ТВ бриг-прораб во фрейм
	SQSH_SELPANEL_BRIG_CHANGE_ID, //ТВ бриг-прораб замена
	SQSH_SELPANEL_BRIG_BUILD_ID, //ТВ чинить
	SQSH_SELPANEL_START_CHARGE_ID, //ТВ зарядка
	SQSH_SELPANEL_STOP_CHARGE_ID,
	SQSH_SELPANEL_UNIT_CHARGE_ID,

	SQSH_SELPANEL_POWERON_ID, //ТВ включить здание
	SQSH_SELPANEL_POWEROFF_ID, //ТВ выключить здание
//	SQSH_SELPANEL_ONOFF_ID,
	SQSH_SELPANEL_SELL_ID, //ТВ продать
	SQSH_SELPANEL_UPGRADE_ID,
	SQSH_SELPANEL_UPGRADE_LASER1_ID,  //апгрейд до лазер. 2 уровня
	SQSH_SELPANEL_UPGRADE_LASER2_ID,  //апгрейд до лазер. 3 уровня
	SQSH_SELPANEL_UPGRADE_ELECTRO1_ID,  //АДДОН апгрейд до электр. 2 уровня
	SQSH_SELPANEL_UPGRADE_ELECTRO2_ID,  //АДДОН апгрейд до электр. 3 уровня
	SQSH_SELPANEL_UPGRADE_BOMB1_ID,   //апгрейд до бомб. 2 уровня
	SQSH_SELPANEL_UPGRADE_BOMB2_ID,   //апгрейд до бомб. 3 уровня
	SQSH_SELPANEL_UPGRADE_ROCKET1_ID, //апгрейд до ракет. 2 уровня
	SQSH_SELPANEL_UPGRADE_ROCKET2_ID, //апгрейд до ракет. 3 уровня

	SQSH_SELPANEL_UPGRADE_EXODUS1_ID, //апгрейд до исход. 2 уровня
	SQSH_SELPANEL_UPGRADE_EXODUS2_ID, //апгрейд до исход. 3 уровня
	SQSH_SELPANEL_UPGRADE_EMPIRE1_ID, //апгрейд до импер. 2 уровня
	SQSH_SELPANEL_UPGRADE_EMPIRE2_ID,  //апгрейд до импер. 3 уровня
	SQSH_SELPANEL_UPGRADE_HARKBACK1_ID,  //апгрейд до возврат. 2 уровня
	SQSH_SELPANEL_UPGRADE_HARKBACK2_ID,  //апгрейд до возврат. 3 уровня

	SQSH_SELPANEL_UPGRADE_FLY_ID,  //апгрейд до летной 2 уровня
	SQSH_SELPANEL_UPGRADE_SUBTERRA_ID,  //апгрейд до подзем. 2 уровня
	SQSH_SELPANEL_UPGRADE_OMEGA_ID,  //апгрейд омеги
	SQSH_SELPANEL_FIELDON_ID, //ТВ поле
	SQSH_SELPANEL_FIELDOFF_ID,
//	SQSH_SELPANEL_FIELD_ID,

	SQSH_SELPANEL_FRAME_INSTALL_ID, //ТВ инсталлировать-деинсталлировать фрейм
	SQSH_SELPANEL_FRAME_ALARM_ID, //ТВ всем во фрейм
	SQSH_SELPANEL_FRAME_TELEPORTATE_ID, //ТВ кнопка телепортатации фрейма

	SQSH_PROGRESS_ENERGY,
	SQSH_PROGRESS_COLLECTED, //Прогресс энергии
	SQSH_RAMKA_ID,
	SQSH_INFOWND_ID,

	SQSH_BAR_SQUAD1_ID, //Прогресс мутации сквада 1
	SQSH_BAR_SQUAD2_ID, //Прогресс мутации сквада 2
	SQSH_BAR_SQUAD3_ID, //Прогресс мутации сквада 3
	SQSH_BAR_SQUAD4_ID, //Прогресс мутации сквада 4
	SQSH_BAR_SQUAD5_ID, //Прогресс мутации сквада 5

	SQSH_CHAT_INFO_ID,
	SQSH_INGAME_CHAT_EDIT_ID,
    SQSH_NET_LATENCY_INFO_ID,

	SQSH_GAME_MAX,

//главное меню
	SQSH_MM_START_SCR,
	SQSH_MM_SINGLE_SCR,
	SQSH_MM_PROFILE_SCR,
	SQSH_MM_SCENARIO_SCR,
	SQSH_MM_BRIEFING_SCR,
	SQSH_MM_LOADING_MISSION_SCR,
	SQSH_MM_ENDMISSION_SCR,
	SQSH_MM_STATS_SCR,
	SQSH_MM_INMISSION_SCR,
	SQSH_MM_BATTLE_SCR,
	SQSH_MM_MISSION_TASK_SCR,
	SQSH_MM_MULTIPLAYER_LIST_SCR,
    SQSH_MM_MULTIPLAYER_JOIN_SCR,
    SQSH_MM_MULTIPLAYER_PASSWORD_SCR,
    SQSH_MM_MULTIPLAYER_LOBBY_SCR,
	SQSH_MM_OPTIONS_SCR,
	SQSH_MM_GRAPHICS_SCR,
	SQSH_MM_CUSTOM_SCR,
	SQSH_MM_INGAME_CUSTOM_SCR,
	SQSH_MM_GAME_SCR,
	SQSH_MM_SOUND_SCR,
    SQSH_MM_MULTIPLAYER_HOST_SCR,
    SQSH_MM_CONTENT_CHOOSER_SCR,
    SQSH_MM_ADDONS_SCR,
    SQSH_MM_COMMUNITY_SCR,
	SQSH_MM_LOAD_SCR,
	SQSH_MM_LOAD_IN_GAME_SCR,
	SQSH_MM_SAVE_GAME_SCR,
	SQSH_MM_SAVE_REPLAY_SCR,
	SQSH_MM_SUBMIT_DIALOG_SCR,
	SQSH_MM_LOAD_REPLAY_SCR,
	SQSH_MM_CREDITS_SCR,

	SQSH_MM_SCREEN_OPTIONS,
	SQSH_MM_SCREEN_GAME,
	SQSH_MM_SCREEN_GRAPHICS,
	SQSH_MM_SCREEN_SOUND,
    
    SQSH_MM_SCREENS_MAX,

	//start menu
	SQSH_MM_SINGLE_BTN,
	SQSH_MM_OPTIONS_BTN,
	SQSH_MM_CREDITS_BTN,
	SQSH_MM_QUIT_BTN,
    SQSH_MM_LANG_BTN,
	SQSH_MM_VERSION_TXT,
	
	//single player menu
	SQSH_MM_PROFILE_BTN,
	SQSH_MM_SCENARIO_BTN,
	SQSH_MM_LOAD_BTN,
	SQSH_MM_BATTLE_BTN,
	SQSH_MM_REPLAY_LINE,
	SQSH_MM_REPLAY_BORDER,
	SQSH_MM_REPLAY_BTN,
	SQSH_MM_BACK_FROM_SINGLE_BTN,

	//profile editor
	SQSH_MM_PROFILE_LIST,
	SQSH_MM_PROFILE_NAME_INPUT,
	SQSH_MM_NEW_PROFILE_BTN,
	SQSH_MM_DEL_PROFILE_BTN,
	SQSH_MM_SELECT_PROFILE_BTN,
	SQSH_MM_BACK_FROM_PROFILE_BTN,

	//scenario
	SQSH_MM_MISSION_LIST,
	SQSH_MM_DIFFICULTY_COMBO,
	SQSH_MM_DIFFICULTY_BTN,
	SQSH_MM_GO_BTN,
	SQSH_MM_BACK_FROM_SCENARIO_BTN,

	//briefing
	SQSH_MM_BRIEFING_YEAR_TXT,
	SQSH_MM_NOMAD_TXT,
	SQSH_MM_NOMAD_ICON,
    SQSH_MM_BRIEFING_TXT,
    SQSH_MM_BRIEFING_SCROLLBG,
	SQSH_MM_BRIEFING_ICON,
	SQSH_MM_QUIT_FROM_BRIEFING_BTN,
	SQSH_MM_CONTINUE_BRIEFING_BORDER,
	SQSH_MM_CONTINUE_BRIEFING_BTN,
	SQSH_MM_START_BRIEFING_BORDER,
	SQSH_MM_START_MISSION_BTN,
	SQSH_MM_SKIP_BRIEFING_BORDER,
	SQSH_MM_SKIP_BRIEFING_BTN,
	SQSH_MM_SKIP_MISSION_BORDER,
	SQSH_MM_SKIP_MISSION_BTN,

	//loading mission
	SQSH_MM_LOADING_NOMAD_TXT,
	SQSH_MM_LOADING_NOMAD_ICON,
	SQSH_MM_MAPWINDOW,
	SQSH_MM_MISSION_DESCR_TXT,

	//end mission
	SQSH_MM_RESULT_TXT,
	SQSH_MM_RESUME_BORDER,
	SQSH_MM_RESUME_BTN,
	SQSH_MM_CONTINUE_BTN,
	SQSH_RESULT_WND,

	//stats
	SQSH_MM_STATS_TOTAL_HEAD_LIST,
	SQSH_MM_STATS_TOTAL_LIST,
	SQSH_MM_STATS_GENERAL_HEAD_LIST,
	SQSH_MM_STATS_GENERAL_LIST,
	SQSH_MM_STATS_UNITS_HEAD_LIST,
	SQSH_MM_STATS_UNITS_LIST,
	SQSH_MM_STATS_BUILDINGS_HEAD_LIST,
	SQSH_MM_STATS_BUILDINGS_LIST,
	SQSH_MM_RESTART_BTN,
	SQSH_MM_SAVE_REPLAY_BORDER,
	SQSH_MM_SAVE_REPLAY_BTN,
	SQSH_MM_QUIT_FROM_STATS_BTN,
	SQSH_MM_CONTINUE_FROM_STATS_BTN,
	SQSH_MM_CONTINUE_FROM_STATS_BORDER,

	SQSH_MM_STATS_TOTAL_BTN,
	SQSH_MM_STATS_GENERAL_BTN,
	SQSH_MM_STATS_UNITS_BTN,
	SQSH_MM_STATS_BUILDINGS_BTN,
	SQSH_MM_STATS_TOTAL_RAMKA,
	SQSH_MM_STATS_GENERAL_RAMKA,
	SQSH_MM_STATS_UNITS_RAMKA,
	SQSH_MM_STATS_BUILDINGS_RAMKA,


	//inmission
	SQSH_MM_INMISSION_SAVE_BTN,
	SQSH_MM_INMISSION_LOAD_BTN,
	SQSH_MM_INMISSION_OPTIONS_BTN,
	SQSH_MM_INMISSION_RESTART_BTN,
	SQSH_MM_INMISSION_RESUME_BTN,
	SQSH_MM_INMISSION_QUIT_BTN,

	//battle
	SQSH_MM_MAP_LIST,
	SQSH_MM_BATTLE_PLAYER1_FRM_BTN,
	SQSH_MM_BATTLE_PLAYER2_FRM_BTN,
	SQSH_MM_BATTLE_PLAYER3_FRM_BTN,
	SQSH_MM_BATTLE_PLAYER4_FRM_BTN,
	SQSH_MM_BATTLE_PLAYER1_SLOT_BTN,
	SQSH_MM_BATTLE_PLAYER2_SLOT_BTN,
	SQSH_MM_BATTLE_PLAYER3_SLOT_BTN,
	SQSH_MM_BATTLE_PLAYER4_SLOT_BTN,
	SQSH_MM_BATTLE_PLAYER1_CLR_BG,
	SQSH_MM_BATTLE_PLAYER2_CLR_BG,
	SQSH_MM_BATTLE_PLAYER3_CLR_BG,
	SQSH_MM_BATTLE_PLAYER4_CLR_BG,
	SQSH_MM_BATTLE_PLAYER1_CLR_BTN,
	SQSH_MM_BATTLE_PLAYER2_CLR_BTN,
	SQSH_MM_BATTLE_PLAYER3_CLR_BTN,
	SQSH_MM_BATTLE_PLAYER4_CLR_BTN,
	SQSH_MM_BATTLE_PLAYER1_CLAN_BTN,
	SQSH_MM_BATTLE_PLAYER2_CLAN_BTN,
	SQSH_MM_BATTLE_PLAYER3_CLAN_BTN,
	SQSH_MM_BATTLE_PLAYER4_CLAN_BTN,
	SQSH_MM_BATTLE_PLAYER1_HC_BTN,
	SQSH_MM_BATTLE_PLAYER2_HC_BTN,
	SQSH_MM_BATTLE_PLAYER3_HC_BTN,
	SQSH_MM_BATTLE_PLAYER4_HC_BTN,
    SQSH_MM_BATTLE_PLAYER_PAGE_TXT,
    SQSH_MM_BATTLE_PLAYER_PAGE_NEXT_BTN,
    SQSH_MM_BATTLE_PLAYER_PAGE_PREV_BTN,
	SQSH_MM_BATTLE_GO_BTN,
	SQSH_MM_BACK_FROM_BATTLE_BTN,
	SQSH_MM_BATTLE_MAP,
	SQSH_MM_BATTLE_MAP_DESCR_TXT,

	//load game
	SQSH_MM_LOAD_MAP_LIST,
	SQSH_MM_LOAD_GO_BTN,
	SQSH_MM_BACK_FROM_LOAD_BTN,
	SQSH_MM_LOAD_MAP,
	SQSH_MM_LOAD_MAP_DESCR_TXT,
	SQSH_MM_DEL_SAVE_BTN,

	//load replay
	SQSH_MM_LOAD_REPLAY_LIST,
	SQSH_MM_LOAD_REPLAY_GO_BTN,
	SQSH_MM_BACK_FROM_LOAD_REPLAY_BTN,
	SQSH_MM_LOAD_REPLAY_MAP,
	SQSH_MM_LOAD_REPLAY_DESCR_TXT,
	SQSH_MM_DEL_REPLAY_BTN,

	//load in game
	SQSH_MM_LOAD_IN_GAME_MAP_LIST,
	SQSH_MM_LOAD_IN_GAME_GO_BTN,
	SQSH_MM_BACK_FROM_LOAD_IN_GAME_BTN,
	SQSH_MM_LOAD_IN_GAME_MAP,
	SQSH_MM_LOAD_IN_GAME_MAP_DESCR_TXT,
	SQSH_MM_LOAD_IN_GAME_DEL_BTN,

	//save game
	SQSH_MM_SAVE_GAME_MAP_LIST,
	SQSH_MM_SAVE_GAME_GO_BTN,
	SQSH_MM_BACK_FROM_SAVE_GAME_BTN,
	SQSH_MM_SAVE_GAME_MAP,
	SQSH_MM_SAVE_GAME_MAP_DESCR_TXT,
	SQSH_MM_SAVE_NAME_INPUT,
	SQSH_MM_SAVE_GAME_DEL_BTN,

	//save replay
	SQSH_MM_SAVE_REPLAY_LIST,
	SQSH_MM_SAVE_REPLAY_GO_BTN,
	SQSH_MM_BACK_FROM_SAVE_REPLAY_BTN,
	SQSH_MM_SAVE_REPLAY_MAP,
	SQSH_MM_SAVE_REPLAY_DESCR_TXT,
	SQSH_MM_REPLAY_NAME_INPUT,
	SQSH_MM_SAVE_REPLAY_DEL_BTN,

	//task
	SQSH_MM_MISSION_TASK_TXT,
	SQSH_MM_BACK_FROM_TASK_BTN,

	//multiplayer join (prev name input/online)
	SQSH_MM_MULTIPLAYER_JOIN_NEXT_BTN,
	SQSH_MM_BACK_FROM_MULTIPLAYER_JOIN_BTN,
    SQSH_MM_MULTIPLAYER_JOIN_IP_INPUT,
    SQSH_MM_MULTIPLAYER_JOIN_IP_BTN,
    SQSH_MM_MULTIPLAYER_JOIN_PASSWORD_INPUT,
    SQSH_MM_MULTIPLAYER_JOIN_PASSWORD_BTN,
    
    //multiplayer password
    SQSH_MM_MULTIPLAYER_PASSWORD_NEXT_BTN,
    SQSH_MM_BACK_FROM_MULTIPLAYER_PASSWORD_BTN,
    SQSH_MM_MULTIPLAYER_PASSWORD_PASSWORD_INPUT,
    SQSH_MM_MULTIPLAYER_PASSWORD_PASSWORD_BTN,
    SQSH_MM_MULTIPLAYER_PASSWORD_NAME_TXT,

	//multiplayer list (prev lan)
    SQSH_MM_MULTIPLAYER_BTN,
    SQSH_MM_MULTIPLAYER_NAME_INPUT,
	SQSH_MM_MULTIPLAYER_LIST_GAME_LIST,
	SQSH_MM_MULTIPLAYER_LIST_MAP,
	SQSH_MM_MULTIPLAYER_LIST_MAP_DESCR_TXT,
	SQSH_MM_MULTIPLAYER_LIST_CREATE_BTN,
	SQSH_MM_MULTIPLAYER_LIST_JOIN_BTN,
    SQSH_MM_MULTIPLAYER_LIST_DIRECT_BTN,
	SQSH_MM_BACK_FROM_MULTIPLAYER_LIST_BTN,

	//multiplayer host (prev unused create game)
	SQSH_MM_MULTIPLAYER_HOST_LIST,
    SQSH_MM_MULTIPLAYER_HOST_DEL_BTN,
	SQSH_MM_MULTIPLAYER_HOST_MAP,
	SQSH_MM_MULTIPLAYER_HOST_MAP_DESCR_TXT,
    SQSH_MM_MULTIPLAYER_HOST_TYPE,
    SQSH_MM_MULTIPLAYER_HOST_TYPE_COMBO,
    SQSH_MM_MULTIPLAYER_HOST_NAME_INPUT,
    SQSH_MM_MULTIPLAYER_HOST_PORT_INPUT,
    SQSH_MM_MULTIPLAYER_HOST_PASSWORD_INPUT,
    SQSH_MM_MULTIPLAYER_HOST_NEXT_BTN,
	SQSH_MM_BACK_FROM_MULTIPLAYER_HOST_BTN,

	//lobby
    SQSH_MM_MULTIPLAYER_GAME_SPEED_BTN,
    SQSH_MM_MULTIPLAYER_GAME_SPEED_SLIDER,
    SQSH_MM_LOBBY_SERVER_TYPE_COMBO,
	SQSH_MM_LOBBY_GAME_NAME_BTN,
	SQSH_MM_LOBBY_PLAYER1_NAME_BTN,
	SQSH_MM_LOBBY_PLAYER2_NAME_BTN,
	SQSH_MM_LOBBY_PLAYER3_NAME_BTN,
	SQSH_MM_LOBBY_PLAYER4_NAME_BTN,
	SQSH_MM_LOBBY_PLAYER1_FRM_BTN,
	SQSH_MM_LOBBY_PLAYER2_FRM_BTN,
	SQSH_MM_LOBBY_PLAYER3_FRM_BTN,
	SQSH_MM_LOBBY_PLAYER4_FRM_BTN,
	SQSH_MM_LOBBY_PLAYER1_SLOT_BTN,
	SQSH_MM_LOBBY_PLAYER2_SLOT_BTN,
	SQSH_MM_LOBBY_PLAYER3_SLOT_BTN,
	SQSH_MM_LOBBY_PLAYER4_SLOT_BTN,
	SQSH_MM_LOBBY_PLAYER1_CLR_BG,
	SQSH_MM_LOBBY_PLAYER2_CLR_BG,
	SQSH_MM_LOBBY_PLAYER3_CLR_BG,
	SQSH_MM_LOBBY_PLAYER4_CLR_BG,
	SQSH_MM_LOBBY_PLAYER1_CLR_BTN,
	SQSH_MM_LOBBY_PLAYER2_CLR_BTN,
	SQSH_MM_LOBBY_PLAYER3_CLR_BTN,
	SQSH_MM_LOBBY_PLAYER4_CLR_BTN,
	SQSH_MM_LOBBY_PLAYER1_CLAN_BTN,
	SQSH_MM_LOBBY_PLAYER2_CLAN_BTN,
	SQSH_MM_LOBBY_PLAYER3_CLAN_BTN,
	SQSH_MM_LOBBY_PLAYER4_CLAN_BTN,
	SQSH_MM_LOBBY_PLAYER1_HC_BTN,
	SQSH_MM_LOBBY_PLAYER2_HC_BTN,
	SQSH_MM_LOBBY_PLAYER3_HC_BTN,
	SQSH_MM_LOBBY_PLAYER4_HC_BTN,
	SQSH_MM_LOBBY_PLAYER1_READY_BTN,
	SQSH_MM_LOBBY_PLAYER2_READY_BTN,
	SQSH_MM_LOBBY_PLAYER3_READY_BTN,
	SQSH_MM_LOBBY_PLAYER4_READY_BTN,
    SQSH_MM_LOBBY_PLAYER_PAGE_TXT,
    SQSH_MM_LOBBY_PLAYER_PAGE_NEXT_BTN,
    SQSH_MM_LOBBY_PLAYER_PAGE_PREV_BTN,
	SQSH_MM_LOBBY_GAME_MAP,
	SQSH_MM_LOBBY_GAME_MAP_DESCR_TXT,
	SQSH_MM_LOBBY_START_BORDER,
	SQSH_MM_LOBBY_START_BTN,
	SQSH_MM_BACK_FROM_LOBBY_BTN,

	SQSH_MM_LOBBY_CHAT_TEXT,
	SQSH_MM_LOBBY_CHAT_INPUT,

	SQSH_MM_LOBBY_MAP_LIST,
	SQSH_MM_LOBBY_HOST_GAME_MAP,
	SQSH_MM_LOBBY_MAP_LIST_RAMKA1,
	SQSH_MM_LOBBY_MAP_LIST_RAMKA2,
	SQSH_MM_LOBBY_MAP_LIST_RAMKA3,
	SQSH_MM_LOBBY_MAP_LIST_RAMKA4,

	//options
	SQSH_MM_OPTIONS_GAME_BTN,
	SQSH_MM_OPTIONS_GRAPHICS_BTN,
	SQSH_MM_OPTIONS_SOUND_BTN,
	SQSH_MM_BACK_FROM_OPTIONS_BTN,

	//custom
	SQSH_MM_GRAPHICS_LOD,
	SQSH_MM_GRAPHICS_LOD_COMBO,
	SQSH_MM_PARTICLE_RATE,
	SQSH_MM_PARTICLE_RATE_SLIDER,
	SQSH_MM_GRAPHICS_OCCLUSION,
	SQSH_MM_GRAPHICS_OCCLUSION_COMBO,
	SQSH_MM_GRAPHICS_POINT_LIGHT,
	SQSH_MM_GRAPHICS_POINT_LIGHT_COMBO,
	SQSH_MM_GRAPHICS_SHADOWS_SAMPLES,
	SQSH_MM_GRAPHICS_SHADOWS_SAMPLES_COMBO,
	SQSH_MM_GRAPHICS_BUMP,
	SQSH_MM_GRAPHICS_BUMP_COMBO,
	SQSH_MM_GRAPHICS_BUMP_CHAOS,
	SQSH_MM_GRAPHICS_BUMP_CHAOS_COMBO,
	SQSH_MM_GRAPHICS_COMPRESS, // Unused
	SQSH_MM_GRAPHICS_COMPRESS_COMBO, // Unused
	SQSH_MM_BACK_FROM_CUSTOM_BTN,

	//game
	SQSH_MM_BACK_FROM_GAME_BTN,

	//graphics
	SQSH_MM_SETTINGS,
	SQSH_MM_SETTINGS_COMBO,
	SQSH_MM_CUSTOM_GRAPHICS_BTN,
	SQSH_MM_APPLY_BTN,
	SQSH_MM_BACK_FROM_GRAPHICS_BTN,

	//sound
	SQSH_MM_BACK_FROM_SOUND_BTN,
	
	//submit dialog
    SQSH_MM_SUBMIT_BACKGROUND,
	SQSH_MM_SUBMIT_TXT,
	SQSH_MM_SUBMIT_YES_BTN,
	SQSH_MM_SUBMIT_YES_BORDER,
	SQSH_MM_SUBMIT_NO_BTN,
	SQSH_MM_SUBMIT_NO_BORDER,
	SQSH_MM_SUBMIT_OK_BTN,
	SQSH_MM_SUBMIT_OK_BORDER,

	//ingame graphics
	SQSH_MM_CUSTOM_INGAME_GRAPHICS_BTN,
	SQSH_MM_INGAME_APPLY_BTN,
	SQSH_MM_BACK_FROM_INGAME_GRAPHICS_BTN,

	//credits
	SQSH_MM_CREDITS_TXT,
    SQSH_MM_CREDITS_COMMUNITY_BTN,
	SQSH_MM_BACK_CREDITS_BTN,

	SQSH_MM_BACK,
	SQSH_MM_OPTIONS,
	SQSH_MM_OPTIONS_GAME,
	SQSH_MM_OPTIONS_GRAPHICS,
	SQSH_MM_OPTIONS_SOUND,
	SQSH_MM_RAMKA,

	SQSH_MM_BACK_FROM_INGAME_OPTIONS,
	SQSH_MM_BACK_FROM_INGAME_GAME_OPTIONS,
	SQSH_MM_BACK_FROM_INGAME_CUSTOM,
	SQSH_MM_BACK_FROM_INGAME_SOUND,

	SQSH_MM_GAME_ANGLESENS,
	SQSH_MM_GAME_ANGLESENS_SLIDER,
	SQSH_MM_GAME_SCROLLRATE,
	SQSH_MM_GAME_SCROLLRATE_SLIDER,
	SQSH_MM_GAME_MOUSESPEED,
	SQSH_MM_GAME_MOUSE_SLIDER,
	SQSH_MM_GAME_TOOLTIPS,
	SQSH_MM_GAME_TOOLTIPS_COMBO,
	SQSH_MM_GAME_RUN_BACKGROUND,
	SQSH_MM_GAME_RUN_BACKGROUND_COMBO,
    SQSH_MM_GAME_START_SPLASH,
    SQSH_MM_GAME_START_SPLASH_COMBO,
    SQSH_MM_GAME_CAMERA_MODE,
    SQSH_MM_GAME_CAMERA_MODE_COMBO,

    SQSH_MM_GRAPHICS_UI_ANCHOR,
    SQSH_MM_GRAPHICS_UI_ANCHOR_COMBO,
    SQSH_MM_GRAPHICS_GRAB_INPUT,
    SQSH_MM_GRAPHICS_GRAB_INPUT_COMBO,
    SQSH_MM_GRAPHICS_VSYNC,
    SQSH_MM_GRAPHICS_VSYNC_COMBO,
    SQSH_MM_GRAPHICS_FOG,
    SQSH_MM_GRAPHICS_FOG_COMBO,
	SQSH_MM_GRAPHICS_RESOLUTION,
	SQSH_MM_GRAPHICS_RESOLUTION_COMBO,
	SQSH_MM_GRAPHICS_COLORDEPTH,
	SQSH_MM_GRAPHICS_COLORDEPTH_COMBO,
	SQSH_MM_GRAPHICS_MODE,
	SQSH_MM_GRAPHICS_MODE_COMBO,
	SQSH_MM_GRAPHICS_GAMMA,
	SQSH_MM_GRAPHICS_GAMMA_SLIDER,
//	SQSH_MM_GRAPHICS_LOD,
	SQSH_MM_GRAPHICS_LOD_SLIDER,
	SQSH_MM_GRAPHICS_SHADOWS,
	SQSH_MM_GRAPHICS_SHADOWS_COMBO,
	SQSH_MM_GRAPHICS_FURROWS,
	SQSH_MM_GRAPHICS_FURROWS_COMBO,
	SQSH_MM_GRAPHICS_REFLECTION,
	SQSH_MM_GRAPHICS_REFLECTION_COMBO,

	SQSH_MM_SOUND_SOUNDEFFECTS,
	SQSH_MM_SOUND_SOUNDEFFECTS_COMBO,
	SQSH_MM_SOUND_SOUNDVOLUME,
	SQSH_MM_SOUND_SOUNDVOLUME_SLIDER,
	SQSH_MM_SOUND_MUSIC,
	SQSH_MM_SOUND_MUSIC_COMBO,
	SQSH_MM_SOUND_MUSICVOLUME,
	SQSH_MM_SOUND_MUSICVOLUME_SLIDER,

	SQSH_EMPTY_WND,

	SQSH_MM_SPLASH1,
	SQSH_MM_SPLASH2,
	SQSH_MM_SPLASH3,
	SQSH_MM_SPLASH4,
	SQSH_MM_SPLASH_LAST,
    
    //content chooser menu
    SQSH_MM_CONTENT_CHOOSER_BTN,
    SQSH_MM_CONTENT_CHOOSER_LIST,
    SQSH_MM_CONTENT_CHOOSER_SELECT_BTN,
    SQSH_MM_BACK_FROM_CONTENT_CHOOSER_BTN,

    //addons/mods menu
    SQSH_MM_ADDONS_BTN,
    SQSH_MM_ADDONS_LIST,
    SQSH_MM_ADDONS_APPLY_BTN,
    SQSH_MM_ADDONS_ENABLE_COMBO,
    SQSH_MM_ADDONS_DESCR_TXT,
    SQSH_MM_ADDONS_ENABLE_BTN,
    SQSH_MM_ADDONS_GUIDE_BTN,
    SQSH_MM_BACK_FROM_ADDONS_BTN,

    //community menu
    SQSH_MM_COMMUNITY_BTN,
    SQSH_MM_COMMUNITY_1_BTN,
    SQSH_MM_COMMUNITY_2_BTN,
    SQSH_MM_COMMUNITY_3_BTN,
    SQSH_MM_COMMUNITY_4_BTN,
    SQSH_MM_BACK_FROM_COMMUNITY_BTN,
    
    SQSH_MENU_MAX,
    
    //unit buttons
    SQSH_SQUAD_DISINTEGRATE_ID, //Разобрать на базовые юниты
    SQSH_SQUAD_UNIT1, //rocker
    SQSH_SQUAD_UNIT2, //sniper
    SQSH_SQUAD_UNIT3, //mortar
    SQSH_SQUAD_UNIT4, //digger
    SQSH_SQUAD_UNIT5, //leech
    SQSH_SQUAD_UNIT6, //r-proj
    SQSH_SQUAD_UNIT7, //scumer
    SQSH_SQUAD_UNIT8, //minotaur
    SQSH_SQUAD_UNIT9, //scum splitter
    SQSH_SQUAD_UNIT10, //piercer
    SQSH_SQUAD_UNIT11, //ceptor
    SQSH_SQUAD_UNIT12, //gyroid
    SQSH_SQUAD_UNIT13, //bomber
    SQSH_SQUAD_UNIT14, //strafer
    SQSH_SQUAD_UNIT15, //unseen
    SQSH_SQUAD_UNIT16, //extirpator
    SQSH_SQUAD_UNIT17, //wargon
    SQSH_SQUAD_UNIT18, //disintegrator
    SQSH_SQUAD_UNIT19, //scum thrower
    SQSH_SQUAD_UNIT20, //spider
    SQSH_SQUAD_UNIT21, //fish / PET - impaler
    SQSH_SQUAD_UNIT22, //wasp / PET - eflair
    SQSH_SQUAD_UNIT23, //worm / PET - conductor
    SQSH_SQUAD_UNIT24, //scum twister
    SQSH_SQUAD_UNIT25, //scum heater
    SQSH_SQUAD_UNIT26, //PET - impaler
    SQSH_SQUAD_UNIT27, //PET - eflair
    SQSH_SQUAD_UNIT28, //PET - conductor

    SQSH_SQUAD_MAX,

	SQSH_MAX
//	SQSH_MAX = 0xFFFFFFFF
};

enum SHELL_CONTROL_STATE
{
	SQSH_VISIBLE = 1<<0,
	SQSH_ENABLED = 1<<1,
	SQSH_SWITCH  = 1<<2,
	SQSH_NOEFFECT= 1<<3,
	SQSH_MARKED  = 1<<4,
	SQSH_CHECK2  = 1<<5,
	SQSH_TRANSPARENT  = 1<<6
};

enum SHELL_ALIGN
{
	SHELL_ALIGN_LEFT = -1,
	SHELL_ALIGN_CENTER = 0,
	SHELL_ALIGN_RIGHT = 1
};

enum SHELL_LOAD_GROUP
{
	SHELL_LOAD_GROUP_GAME = 1,
	SHELL_LOAD_GROUP_MENU = 2
};

enum PopupFormatGroup
{
	POPUP_FORMAT_NONE,
	POPUP_FORMAT_BUILDING,
	POPUP_FORMAT_CORE,
	POPUP_FORMAT_AMPLIFIER,
	POPUP_FORMAT_FRAME,
	POPUP_FORMAT_GUN,
	POPUP_FORMAT_SQUAD,
	POPUP_FORMAT_MMP
};

enum InterfaceEventCode
{
	EVENT_PRESSED,
	EVENT_UNPRESSED,
	EVENT_RPRESSED,
	EVENT_RUNPRESSED,
	EVENT_HOLD,
	EVENT_SLIDERUPDATE,
	EVENT_CREATEWND,
	EVENT_SHOWWND,
	EVENT_HIDEWND,
	EVENT_DRAWWND,
	EVENT_WHEEL,
	EVENT_DOUBLECLICK,
	EVENT_TAB_CHANGED,
	EVENT_PRESSED_DISABLED,
	EVENT_ON_WINDOW
};
enum MiniMapEventCode {
	EVENT_BUILDING_CREATED = 0,
	EVENT_UNIT_UNDER_ATTACK,
	EVENT_MINI_MAP_MAX
};
enum ParticularWndCmdID {
	SKIP_BRIEFING_AFTER_PAUSE = -120,
	SHOW_START_SKIP_MISSION,
	SHOW_CONTINUE,
	SHOW_SKIP_CONTINUE,
	SHOW_START_MISSION,
	SHOW_START_HIDE_SKIP_MISSION,
	SKIP_BRIEFING,
	SKIP_MISSION,
	CONTINUE_BRIEFING,
	RESUME_GAME,
	SHOW_LAST_SPLASH,
	FAKE,
	LAST_VISIBLE,
	READY,
    RESTART_GAME
};
enum Difficulty {
	DIFFICULTY_EASY, // Легкий
	DIFFICULTY_NORMAL, // Нормальный
	DIFFICULTY_HARD, // Сложный 
	DIFFICULTY_MAX
};

enum ControlHitTestMode
{
	HITTEST_DEFAULT,
	HITTEST_NONE
};

/// идентификаторы интерфейсных событий
enum iEventID
{
	iEVENT_ID_DEFAULT	= -1,
	iEVENT_ID_EFFECT			// запустить эффект (появление/исчезание кнопок и т.п.)
};