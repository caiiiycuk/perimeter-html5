
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
	SQSH_CHATINFO_WND_TYPE
};

enum ShellControlID
{
	SQSH_STATIC_ID = 0,
	SQSH_GAME_SCREEN_ID,
	SQSH_BACKGRND_ID,
	SQSH_MAP_WINDOW_ID,
	SQSH_WORKAREA2_ID, //������ ����
	SQSH_WORKAREA3_ID, //������ ������������
	SQSH_WORKAREA4_ID, //������ ������ �������� � ����
	SQSH_FIELD_ON_ID, //����� ��������� ����
	SQSH_FIELD_OFF_ID, //����� ���������� ����
	SQSH_SOLDIER_ID, //����� �������
	SQSH_OFFICER_ID, //����� ��������
	SQSH_TECHNIC_ID, //����� �������
	SQSH_TOGETHER_ID, //����������� �������
	SQSH_YADRO_ID, //����
	SQSH_YADRO_EX_ID, //���������
	SQSH_SOLDIER_PLANT_ID, //����� ������
	SQSH_OFFICER_PLANT_ID, //����� ��������
	SQSH_TECHNIC_PLANT_ID, //����� ��������
	SQSH_COMMANDER_ID, //��������� �����
	SQSH_RELAY_ID, //����������
	SQSH_STATION1_ID, //�������� �����������
	SQSH_STATION2_ID, //�������� �����������
	SQSH_STATION3_ID, //�������� �����������
	SQSH_STATION4_ID, //��������� �����������
	SQSH_STATION5_ID, //������������������ �����������
	SQSH_STATION_ELECTRO_LAB_ID, //����� ������������� �����������
	SQSH_STATION_EXODUS_LAB_ID, //����������� ����������
	SQSH_STATION_EMPIRE_LAB_ID, //����������� �������
	SQSH_STATION_HARKBACK_LAB_ID, //����������� ������������
	SQSH_CORRIDOR_ALPHA_ID, //����� ������
	SQSH_CORRIDOR_OMEGA_ID, //����� ������ 
	SQSH_STATIC_BOMB_ID, //�����
	SQSH_GUN_LASER_ID, //�������� �����
	SQSH_GUN_ELECTRO_ID, //������������� �����
	SQSH_GUN_ROCKET_ID, //�������� �����
	SQSH_GUN_HOWITZER_ID, //�������
	SQSH_GUN_FILTH_ID, //��������� �������
	SQSH_GUN_GIMLET_ID, //����������������
	SQSH_GUN_SUBCHASER_ID, //�����������
	SQSH_GUN_BALLISTIC_ID, //�������������� ������


	SQSH_FRAME_TERRAIN_BUILD1_ID, //����� � ������ ���� ��������� ��� �������
	SQSH_FRAME_TERRAIN_BUILD2_ID, //����� �� ������ ���� ��������� ��� �������
	SQSH_FRAME_TERRAIN_BUILD3_ID, //����� � ������ ���� ��������� ��� �������
	SQSH_FRAME_TERRAIN_BUILD4_ID, //����� � ��������� ���� ��������� ��� �������
	SQSH_FRAME_TERRAIN_BUILD5_ID, //����� � ����� ���� ��������� ��� �������

	SQSH_SQUAD_DISINTEGRATE_ID, //��������� �� ������� �����
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
	SQSH_SQUAD_UNIT21, //fish
	SQSH_SQUAD_UNIT22, //wasp
	SQSH_SQUAD_UNIT23, //worm
	SQSH_SQUAD_UNIT24, //scum twister
	SQSH_SQUAD_UNIT25, //scum heater

	SQSH_SPEED_PAUSE, //�����
	SQSH_SPEED_50, //50% �������� ����
	SQSH_SPEED_100, //100% �������� ����
	SQSH_SPEED_150, //150% �������� ����

	SQSH_MENU_BUTTON_ID,
	SQSH_TASK_BUTTON_ID,
	SQSH_REPLAY_PLAYER_BUTTON_ID,
    SQSH_EMBLEM_ID,

	SQSH_TAB_BUILD_ID, //����� ������
	SQSH_TAB_SQUAD_ID, //����� �������

	SQSH_HINT_ID,

	SQSH_SELPANEL_MOVE_ID, // �� ���������
	SQSH_SELPANEL_STOP_ID, // �� ����
	SQSH_SELPANEL_STOP2_ID, // �� ���� ����. �����
	SQSH_SELPANEL_SQ_ATTACK_ID, //�� ���������
	SQSH_SELPANEL_SQ_BACK_ID, //�� ��������� �� ����
	SQSH_SELPANEL_SQ_OFDEF_ID, //�� ������-������
	SQSH_SELPANEL_SQ_PATROL_ID, //�� �������������
	SQSH_SELPANEL_BRIG_BACK_ID, //�� ����-������ �� �����
	SQSH_SELPANEL_BRIG_CHANGE_ID, //�� ����-������ ������
	SQSH_SELPANEL_BRIG_BUILD_ID, //�� ������
	SQSH_SELPANEL_START_CHARGE_ID, //�� �������
	SQSH_SELPANEL_STOP_CHARGE_ID,
	SQSH_SELPANEL_UNIT_CHARGE_ID,

	SQSH_SELPANEL_POWERON_ID, //�� �������� ������
	SQSH_SELPANEL_POWEROFF_ID, //�� ��������� ������
//	SQSH_SELPANEL_ONOFF_ID,
	SQSH_SELPANEL_SELL_ID, //�� �������
	SQSH_SELPANEL_UPGRADE_ID,
	SQSH_SELPANEL_UPGRADE_LASER1_ID,  //������� �� �����. 2 ������
	SQSH_SELPANEL_UPGRADE_LASER2_ID,  //������� �� �����. 3 ������
	SQSH_SELPANEL_UPGRADE_ELECTRO1_ID,  //����� ������� �� ������. 2 ������
	SQSH_SELPANEL_UPGRADE_ELECTRO2_ID,  //����� ������� �� ������. 3 ������
	SQSH_SELPANEL_UPGRADE_BOMB1_ID,   //������� �� ����. 2 ������
	SQSH_SELPANEL_UPGRADE_BOMB2_ID,   //������� �� ����. 3 ������
	SQSH_SELPANEL_UPGRADE_ROCKET1_ID, //������� �� �����. 2 ������
	SQSH_SELPANEL_UPGRADE_ROCKET2_ID, //������� �� �����. 3 ������

	SQSH_SELPANEL_UPGRADE_EXODUS1_ID, //������� �� �����. 2 ������
	SQSH_SELPANEL_UPGRADE_EXODUS2_ID, //������� �� �����. 3 ������
	SQSH_SELPANEL_UPGRADE_EMPIRE1_ID, //������� �� �����. 2 ������
	SQSH_SELPANEL_UPGRADE_EMPIRE2_ID,  //������� �� �����. 3 ������
	SQSH_SELPANEL_UPGRADE_HARKBACK1_ID,  //������� �� �������. 2 ������
	SQSH_SELPANEL_UPGRADE_HARKBACK2_ID,  //������� �� �������. 3 ������

	SQSH_SELPANEL_UPGRADE_FLY_ID,  //������� �� ������ 2 ������
	SQSH_SELPANEL_UPGRADE_SUBTERRA_ID,  //������� �� ������. 2 ������
	SQSH_SELPANEL_UPGRADE_OMEGA_ID,  //������� �����
	SQSH_SELPANEL_FIELDON_ID, //�� ����
	SQSH_SELPANEL_FIELDOFF_ID,
//	SQSH_SELPANEL_FIELD_ID,

	SQSH_SELPANEL_FRAME_INSTALL_ID, //�� ��������������-���������������� �����
	SQSH_SELPANEL_FRAME_ALARM_ID, //�� ���� �� �����
	SQSH_SELPANEL_FRAME_TELEPORTATE_ID, //�� ������ �������������� ������

	SQSH_PROGRESS_ENERGY,
	SQSH_PROGRESS_COLLECTED, //�������� �������
	SQSH_RAMKA_ID,
	SQSH_INFOWND_ID,

	SQSH_BAR_SQUAD1_ID, //�������� ������� ������ 1
	SQSH_BAR_SQUAD2_ID, //�������� ������� ������ 2
	SQSH_BAR_SQUAD3_ID, //�������� ������� ������ 3
	SQSH_BAR_SQUAD4_ID, //�������� ������� ������ 4
	SQSH_BAR_SQUAD5_ID, //�������� ������� ������ 5

	SQSH_CHAT_INFO_ID,
	SQSH_INGAME_CHAT_EDIT_ID,

	SQSH_GAME_MAX,

//������� ����
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
	SQSH_MM_LAN_SCR,
	SQSH_MM_CREATE_GAME_SCR,
	SQSH_MM_LOBBY_SCR,
	SQSH_MM_OPTIONS_SCR,
	SQSH_MM_GRAPHICS_SCR,
	SQSH_MM_CUSTOM_SCR,
	SQSH_MM_INGAME_CUSTOM_SCR,
	SQSH_MM_GAME_SCR,
	SQSH_MM_SOUND_SCR,
	SQSH_MM_ONLINE_SCR,
	SQSH_MM_CREATE_ONLINE_GAME_SCR,
	SQSH_MM_ONLINE_LOBBY_SCR,
	SQSH_MM_LOAD_SCR,
	SQSH_MM_LOAD_IN_GAME_SCR,
	SQSH_MM_SAVE_GAME_SCR,
	SQSH_MM_SAVE_REPLAY_SCR,
	SQSH_MM_SUBMIT_DIALOG_SCR,
	SQSH_MM_LOAD_REPLAY_SCR,
	SQSH_MM_CREDITS_SCR,
	SQSH_MM_NAME_INPUT_SCR,

	SQSH_MM_SCREEN_OPTIONS,
	SQSH_MM_SCREEN_GAME,
	SQSH_MM_SCREEN_GRAPHICS,
	SQSH_MM_SCREEN_SOUND,

	//start menu
	SQSH_MM_SINGLE_BTN,
	SQSH_MM_LAN_BTN,
	SQSH_MM_ONLINE_BTN,
	SQSH_MM_OPTIONS_BTN,
	SQSH_MM_CREDITS_BTN,
	SQSH_MM_QUIT_BTN,
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
	SQSH_MM_BATTLE_GO_BTN,
	SQSH_MM_BACK_FROM_BATTLE_BTN,
	SQSH_MM_BATTLE_MAP,
	SQSH_MM_BATTLE_MAP_DESCR_TXT,
	SQSH_MM_BATTLE_SURVIVAL_TXT,

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

	//name input
	SQSH_MM_PLAYER_NAME_INPUT,
	SQSH_MM_APPLY_NAME_BTN,
	SQSH_MM_BACK_FROM_NAME_INPUT_BTN,
	SQSH_MM_CONNECTION_TYPE_COMBO,
	SQSH_MM_IP_INPUT,
	SQSH_MM_IP_BTN,

	//lan
	SQSH_MM_GAME_LIST,
	SQSH_MM_LAN_GAME_MAP,
	SQSH_MM_LAN_GAME_MAP_DESCR_TXT,
	SQSH_MM_LAN_CREATE_GAME_BTN,
	SQSH_MM_JOIN_BTN,
	SQSH_MM_BACK_FROM_LAN_BTN,
	SQSH_MM_LAN_PLAYER_NAME_INPUT,
	SQSH_MM_LAN_GAMESPY_LOGO,

	//create game
	SQSH_MM_LAN_MAP_LIST,
	SQSH_MM_CREATE_GAME_MAP,
	SQSH_MM_CREATE_GAME_MAP_DESCR_TXT,
	SQSH_MM_LAN_GAME_SPEED_BTN,
	SQSH_MM_LAN_GAME_SPEED_SLIDER,
	SQSH_MM_CREATE_BTN,
	SQSH_MM_BACK_FROM_CREATE_GAME_BTN,
	SQSH_MM_LAN_CREATE_GAMESPY_LOGO,

	//lobby
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
	SQSH_MM_LOBBY_GAME_MAP,
	SQSH_MM_LOBBY_GAME_MAP_DESCR_TXT,
	SQSH_MM_LOBBY_START_BORDER,
	SQSH_MM_LOBBY_START_BTN,
	SQSH_MM_BACK_FROM_LOBBY_BTN,
	SQSH_MM_LAN_LOBBY_GAMESPY_LOGO,

	SQSH_MM_LOBBY_CHAT_TEXT,
	SQSH_MM_LOBBY_CHAT_INPUT,

	SQSH_MM_LOBBY_MAP_LIST,
	SQSH_MM_LOBBY_HOST_GAME_MAP,
	SQSH_MM_LOBBY_MAP_LIST_RAMKA1,
	SQSH_MM_LOBBY_MAP_LIST_RAMKA2,
	SQSH_MM_LOBBY_MAP_LIST_RAMKA3,
	SQSH_MM_LOBBY_MAP_LIST_RAMKA4,

	//online
	SQSH_MM_ONLINE_GAME_LIST,
	SQSH_MM_ONLINE_GAME_MAP,
	SQSH_MM_ONLINE_GAME_MAP_DESCR_TXT,
	SQSH_MM_ONLINE_CREATE_GAME_BTN,
	SQSH_MM_ONLINE_JOIN_BTN,
	SQSH_MM_BACK_FROM_ONLINE_BTN,
	SQSH_MM_ONLINE_PLAYER_NAME_INPUT,

	//create online game
	SQSH_MM_ONLINE_MAP_LIST,
	SQSH_MM_CREATE_ONLINE_GAME_MAP,
	SQSH_MM_CREATE_ONLINE_GAME_MAP_DESCR_TXT,
	SQSH_MM_ONLINE_GAME_SPEED_BTN,
	SQSH_MM_ONLINE_GAME_SPEED_SLIDER,
	SQSH_MM_ONLINE_CREATE_BTN,
	SQSH_MM_BACK_FROM_CREATE_ONLINE_GAME_BTN,

	//online lobby
	SQSH_MM_ONLINE_LOBBY_GAME_NAME_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER1_NAME_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER2_NAME_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER3_NAME_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER4_NAME_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER1_FRM_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER2_FRM_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER3_FRM_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER4_FRM_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER1_SLOT_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER2_SLOT_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER3_SLOT_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER4_SLOT_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER1_CLR_BG,
	SQSH_MM_ONLINE_LOBBY_PLAYER2_CLR_BG,
	SQSH_MM_ONLINE_LOBBY_PLAYER3_CLR_BG,
	SQSH_MM_ONLINE_LOBBY_PLAYER4_CLR_BG,
	SQSH_MM_ONLINE_LOBBY_PLAYER1_CLR_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER2_CLR_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER3_CLR_BTN,
	SQSH_MM_ONLINE_LOBBY_PLAYER4_CLR_BTN,
	SQSH_MM_ONLINE_LOBBY_GAME_MAP,
	SQSH_MM_ONLINE_LOBBY_GAME_MAP_DESCR_TXT,
	SQSH_MM_ONLINE_LOBBY_START_BTN,
	SQSH_MM_BACK_FROM_ONLINE_LOBBY_BTN,

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
	SQSH_MM_GRAPHICS_COMPRESS,
	SQSH_MM_GRAPHICS_COMPRESS_COMBO,
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
	READY
};
enum Difficulty {
	DIFFICULTY_EASY, // ������
	DIFFICULTY_NORMAL, // ����������
	DIFFICULTY_HARD, // ������� 
	DIFFICULTY_MAX
};

enum ControlHitTestMode
{
	HITTEST_DEFAULT,
	HITTEST_NONE
};

/// �������������� ������������ �������
enum iEventID
{
	iEVENT_ID_DEFAULT	= -1,
	iEVENT_ID_EFFECT			// ��������� ������ (���������/��������� ������ � �.�.)
};