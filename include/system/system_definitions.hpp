#pragma once

//menu
#define DEF_MENU_NUM_OF_MSG 5
#define DEF_MENU_MAIN_STR (std::string)"Menu/Main"
#define DEF_MENU_INIT_STR (std::string)"Menu/Init"
#define DEF_MENU_EXIT_STR (std::string)"Menu/Exit"
#define DEF_MENU_WORKER_THREAD_STR (std::string)"Menu/Worker thread"
#define DEF_MENU_UPDATE_THREAD_STR (std::string)"Menu/Update thread"
#define DEF_MENU_SEND_APP_INFO_STR (std::string)"Menu/Send app info thread"
#define DEF_MENU_CHECK_INTERNET_STR (std::string)"Menu/Check internet thread"

#define DEF_MENU_EXIST_MSG 0
#define DEF_MENU_CONFIRM_MSG 1
#define DEF_MENU_CANCEL_MSG 2
#define DEF_MENU_NEW_VERSION_MSG 3
#define DEF_MENU_HOW_TO_UPDATE_MSG 4

//setting menu
#define DEF_SEM_NUM_OF_MSG 65
#define DEF_SEM_ENABLE_ICON
//#define DEF_SEM_ENABLE_NAME
#define DEF_SEM_ICON_PATH (std::string)"romfs:/gfx/draw/icon/sem_icon.t3x"
#define DEF_SEM_NAME (std::string)"Settings"
#define DEF_SEM_INIT_STR (std::string)"Sem/Init"
#define DEF_SEM_EXIT_STR (std::string)"Sem/Exit"
#define DEF_SEM_WORKER_THREAD_STR (std::string)"Sem/Worker thread"
#define DEF_SEM_UPDATE_THREAD_STR (std::string)"Sem/Update thread"
#define DEF_SEM_ENCODE_THREAD_STR (std::string)"Sem/Encode thread"
#define DEF_SEM_RECORD_THREAD_STR (std::string)"Sem/Record thread"

#define DEF_SEM_MENU_TOP -1
#define DEF_SEM_MENU_UPDATE 0
#define DEF_SEM_MENU_LANGAGES 1
#define DEF_SEM_MENU_LCD 2
#define DEF_SEM_MENU_CONTROL 3
#define DEF_SEM_MENU_FONT 4
#define DEF_SEM_MENU_WIFI 5
#define DEF_SEM_MENU_ADVANCED 6
#define DEF_SEM_MENU_BATTERY 7
#define DEF_SEM_MENU_RECORDING 8

#define DEF_SEM_RECORD_BOTH 0
#define DEF_SEM_RECORD_TOP 1
#define DEF_SEM_RECORD_BOTTOM 2

#define DEF_SEM_EDTION_NONE -1
#define DEF_SEM_EDTION_3DSX 0
#define DEF_SEM_EDTION_CIA 1

#define DEF_SEM_UPDATE_MSG 0
#define DEF_SEM_LANGAGES_MSG 1
#define DEF_SEM_LCD_MSG 2
#define DEF_SEM_CONTROL_MSG 3
#define DEF_SEM_FONT_MSG 4
#define DEF_SEM_WIFI_MSG 5
#define DEF_SEM_ADVANCED_MSG 6
#define DEF_SEM_BATTERY_MSG 7
#define DEF_SEM_CHECK_UPDATE_MSG 8
#define DEF_SEM_ENGLISH_MSG 9
#define DEF_SEM_JAPANESE_MSG 10
#define DEF_SEM_NIGHT_MODE_MSG 11
#define DEF_SEM_ON_MSG 12
#define DEF_SEM_OFF_MSG 13
#define DEF_SEM_FLASH_MSG 14
#define DEF_SEM_BRIGHTNESS_MSG 15
#define DEF_SEM_LCD_OFF_TIME_0_MSG 16
#define DEF_SEM_LCD_OFF_TIME_1_MSG 17
#define DEF_SEM_SCROLL_SPEED_MSG 18
#define DEF_SEM_JAPANESE_FONT_MSG 19
#define DEF_SEM_CHINESE_FONT_MSG 20
#define DEF_SEM_KOREAN_FONT_MSG 21
#define DEF_SEM_TAIWANESE_FONT_MSG 22
#define DEF_SEM_LOAD_ALL_FONT_MSG 23
#define DEF_SEM_UNLOAD_ALL_FONT_MSG 24
#define DEF_SEM_SEND_INFO_MODE_MSG 25
#define DEF_SEM_ALLOW_MSG 26
#define DEF_SEM_DENY_MSG 27
#define DEF_SEM_DEBUG_MODE_MSG 28
#define DEF_SEM_ECO_MODE_MSG 29
#define DEF_SEM_BACK_MSG 30
#define DEF_SEM_CHECKING_UPDATE_MSG 31
#define DEF_SEM_CHECKING_UPDATE_FAILED_MSG 32
#define DEF_SEM_UP_TO_DATE_MSG 33
#define DEF_SEM_NEW_VERSION_AVAILABLE_MSG 34
#define DEF_SEM_CLOSE_UPDATER_MSG 35
#define DEF_SEM_BACK_TO_PATCH_NOTE_MSG 35
#define DEF_SEM_SELECT_EDITION_MSG 36
#define DEF_SEM_3DSX_MSG 37
#define DEF_SEM_CIA_MSG 38
#define DEF_SEM_FILE_PATH_MSG 39
#define DEF_SEM_DOWNLOADING_MSG 40
#define DEF_SEM_INSTALLING_MSG 41
#define DEF_SEM_SUCCESS_MSG 42
#define DEF_SEM_FAILURE_MSG 43
#define DEF_SEM_RESTART_MSG 44
#define DEF_SEM_DL_INSTALL_MSG 45
#define DEF_SEM_CLOSE_APP_MSG 46
#define DEF_SEM_WIFI_MODE_MSG 47
#define DEF_SEM_CONNECTED_SSID_MSG 48
#define DEF_SEM_RECORDING_MSG 49
#define DEF_SEM_RECORD_BOTH_LCD_MSG 50
#define DEF_SEM_RECORD_TOP_LCD_MSG 51
#define DEF_SEM_RECORD_BOTTOM_LCD_MSG 52
#define DEF_SEM_STOP_RECORDING_MSG 53
#define DEF_SEM_LCD_MODE_MSG 54
#define DEF_SEM_CANNOT_RECORD_MSG 55
#define DEF_SEM_800PX_MSG 56
#define DEF_SEM_3D_MSG 57
#define DEF_SEM_400PX_MSG 58
#define DEF_SEM_HUNGARIAN_MSG 59
#define DEF_SEM_CHINESE_MSG 60
#define DEF_SEM_ITALIAN_MSG 61
#define DEF_SEM_FAKE_MODEL_MSG 62
#define DEF_SEM_SPANISH_MSG 63
#define DEF_SEM_ROMANIAN_MSG 64

//abgr8888 color
#define DEF_DRAW_RED 0xFF0000FF
#define DEF_DRAW_GREEN 0xFF00FF00
#define DEF_DRAW_BLUE 0xFFFF0000
#define DEF_DRAW_BLACK 0xFF000000
#define DEF_DRAW_WHITE 0xFFFFFFFF
#define DEF_DRAW_AQUA 0xFFFFFF00
#define DEF_DRAW_YELLOW 0xFF00C5FF
#define DEF_DRAW_WEAK_RED 0x500000FF
#define DEF_DRAW_WEAK_GREEN 0x5000FF00
#define DEF_DRAW_WEAK_BLUE 0x50FF0000
#define DEF_DRAW_WEAK_BLACK 0x50000000
#define DEF_DRAW_WEAK_WHITE 0x50FFFFFF
#define DEF_DRAW_WEAK_AQUA 0x50FFFF00
#define DEF_DRAW_WEAK_YELLOW 0x5000C5FF
#define DEF_DRAW_NO_COLOR 0x0

//decoder 
#define DEF_DECODER_THREAD_TYPE_NONE 0
#define DEF_DECODER_THREAD_TYPE_FRAME 1
#define DEF_DECODER_THREAD_TYPE_SLICE 2
#define DEF_DECODER_THREAD_TYPE_AUTO 3
#define STB_IMAGE_IMPLEMENTATION

//error num
#define DEF_ERR_SUMMARY 0
#define DEF_ERR_DESCRIPTION 1
#define DEF_ERR_PLACE 2
#define DEF_ERR_CODE 3

//error code
#define DEF_ERR_OTHER 0xFFFFFFFF
#define DEF_ERR_OUT_OF_MEMORY 0xFFFFFFFE
#define DEF_ERR_OUT_OF_LINEAR_MEMORY 0xFFFFFFFD
#define DEF_ERR_GAS_RETURNED_NOT_SUCCESS 0xFFFFFFFC
#define DEF_ERR_STB_IMG_RETURNED_NOT_SUCCESS 0xFFFFFFFB
#define DEF_ERR_FFMPEG_RETURNED_NOT_SUCCESS 0xFFFFFFFA
#define DEF_ERR_INVALID_ARG 0xFFFFFFF9
#define DEF_ERR_JSMN_RETURNED_NOT_SUCCESS 0xFFFFFFF8
#define DEF_ERR_TRY_AGAIN 0xFFFFFFF7

#define DEF_ERR_OTHER_STR (std::string)"[Error] Something went wrong. "
#define DEF_ERR_OUT_OF_MEMORY_STR (std::string)"[Error] Out of memory. "
#define DEF_ERR_OUT_OF_LINEAR_MEMORY_STR (std::string)"[Error] Out of linear memory. "
#define DEF_ERR_GAS_RETURNED_NOT_SUCCESS_STR (std::string)"[Error] Google apps script returned NOT success. "
#define DEF_ERR_STB_IMG_RETURNED_NOT_SUCCESS_STR (std::string)"[Error] stb image returned NOT success. "
#define DEF_ERR_FFMPEG_RETURNED_NOT_SUCCESS_STR (std::string)"[Error] ffmpeg returned NOT success. "
#define DEF_ERR_INVALID_ARG_STR (std::string)"[Error] Invalid arg. "
#define DEF_ERR_JSMN_RETURNED_NOT_SUCCESS_STR (std::string)"[Error] jsmn returned NOT success. "
#define DEF_ERR_TRY_AGAIN_STR (std::string)"[Error] Try again later. "

//error
#define DEF_ERR_INIT_STR (std::string)"Err/Init"
#define DEF_ERR_EXIT_STR (std::string)"Err/Exit"
#define DEF_ERR_SAVE_THREAD_STR (std::string)"Err/Save thread"

//explorer
#define DEF_EXPL_INIT_STR (std::string)"Expl/Init"
#define DEF_EXPL_EXIT_STR (std::string)"Expl/Exit"
#define DEF_EXPL_READ_DIR_THREAD_STR (std::string)"Expl/Read dir thread"

//external font
#define DEF_EXFONT_NUM_OF_FONT_NAME 52
#define DEF_EXFONT_NUM_OF_ONE_BYTE_FONT 1
#define DEF_EXFONT_NUM_OF_TWO_BYTES_FONT 12
#define DEF_EXFONT_NUM_OF_THREE_BYTES_FONT 37
#define DEF_EXFONT_NUM_OF_FOUR_BYTES_FONT 2
#define DEF_EXFONT_INIT_STR (std::string)"Exfont/Init"
#define DEF_EXFONT_EXIT_STR (std::string)"Exfont/Exit"
#define DEF_EXFONT_LOAD_FONT_THREAD_STR (std::string)"Exfont/Load font thread"

//fake pthread
#define _POSIX_THREADS

//hid
#define DEF_HID_INIT_STR (std::string)"Hid/Init"
#define DEF_HID_EXIT_STR (std::string)"Hid/Exit"
#define DEF_HID_SCAN_THREAD_STR (std::string)"Hid/Scan thread"

//log
#define DEF_LOG_DISPLAYED_LINES 23

//thread
#define DEF_STACKSIZE (64 * 1024)
#define DEF_INACTIVE_THREAD_SLEEP_TIME 100000
#define DEF_ACTIVE_THREAD_SLEEP_TIME 50000
#define DEF_THREAD_WAIT_TIME 10000000000//10s
//0x18~0x3F
#define DEF_THREAD_PRIORITY_IDLE 0x36
#define DEF_THREAD_PRIORITY_LOW 0x25
#define DEF_THREAD_PRIORITY_NORMAL 0x24
#define DEF_THREAD_PRIORITY_HIGH 0x23
#define DEF_THREAD_PRIORITY_REALTIME 0x18
