#pragma once

// settings
#define DEF_MAIN_DIR (std::string) "/3ds/NNDViewer/"
#define DEF_SWKBD_MAX_DIC_WORDS 128
#define DEF_CHECK_INTERNET_URL (std::string) "https://connectivitycheck.gstatic.com/generate_204"
#define DEF_CURRENT_APP_VER (std::string) "Beta 33"
#define DEF_CURRENT_APP_VER_INT 0
#define GITHUB_URL std::string("https://github.com/nennneko5787/NNDViewer")

// video player
#define DEF_SAPP0_NAME (std::string) "Video\nplayer"
#define DEF_SAPP0_MAIN_STR (std::string) "Vid/Main"
#define DEF_SAPP0_INIT_STR (std::string) "Vid/Init"
#define DEF_SAPP0_EXIT_STR (std::string) "Vid/Exit"
#define DEF_SAPP0_DECODE_THREAD_STR (std::string) "Vid/Decode thread"
#define DEF_SAPP0_CONVERT_THREAD_STR (std::string) "Vid/Convert thread"

// menu
#define DEF_MENU_MAIN_STR (std::string) "Menu/Main"
#define DEF_MENU_INIT_STR (std::string) "Menu/Init"
#define DEF_MENU_EXIT_STR (std::string) "Menu/Exit"
#define DEF_MENU_WORKER_THREAD_STR (std::string) "Menu/Worker thread"
#define DEF_MENU_UPDATE_THREAD_STR (std::string) "Menu/Update thread"
#define DEF_MENU_SEND_APP_INFO_STR (std::string) "Menu/Send app info thread"
#define DEF_MENU_CHECK_INTERNET_STR (std::string) "Menu/Check internet thread"

// setting menu
#define DEF_SEM_INIT_STR (std::string) "Sem/Init"
#define DEF_SEM_EXIT_STR (std::string) "Sem/Exit"
#define DEF_SEM_WORKER_THREAD_STR (std::string) "Sem/Worker thread"
#define DEF_SEM_UPDATE_THREAD_STR (std::string) "Sem/Update thread"
#define DEF_SEM_ENCODE_THREAD_STR (std::string) "Sem/Encode thread"
#define DEF_SEM_RECORD_THREAD_STR (std::string) "Sem/Record thread"

// explorer
#define DEF_EXPL_INIT_STR (std::string) "Expl/Init"
#define DEF_EXPL_EXIT_STR (std::string) "Expl/Exit"
#define DEF_EXPL_READ_DIR_THREAD_STR (std::string) "Expl/Read dir thread"

// error num
#define DEF_ERR_SUMMARY 0
#define DEF_ERR_DESCRIPTION 1
#define DEF_ERR_PLACE 2
#define DEF_ERR_CODE 3

// error code
#define DEF_ERR_OTHER 0xFFFFFFFF
#define DEF_ERR_OUT_OF_MEMORY 0xFFFFFFFE
#define DEF_ERR_OUT_OF_LINEAR_MEMORY 0xFFFFFFFD
#define DEF_ERR_STB_IMG_RETURNED_NOT_SUCCESS 0xFFFFFFFB
#define DEF_ERR_FFMPEG_RETURNED_NOT_SUCCESS 0xFFFFFFFA
#define DEF_ERR_INVALID_ARG 0xFFFFFFF9
#define DEF_ERR_NEED_MORE_INPUT 0xFFFFFFF8
#define DEF_ERR_NEED_MORE_OUTPUT 0xFFFFFFF7

#define DEF_ERR_OTHER_STR (std::string) "[Error] An unspecified error has occurred. "
#define DEF_ERR_OUT_OF_MEMORY_STR (std::string) "[Error] Out of memory. "
#define DEF_ERR_OUT_OF_LINEAR_MEMORY_STR (std::string) "[Error] Out of linear memory. "
#define DEF_ERR_STB_IMG_RETURNED_NOT_SUCCESS_STR (std::string) "[Error] stb_image didn't return 0 (success). "
#define DEF_ERR_FFMPEG_RETURNED_NOT_SUCCESS_STR (std::string) "[Error] FFmpeg didn't return 0 (success). "
#define DEF_ERR_INVALID_ARG_STR (std::string) "[Error] Invalid argument. "

// thread
#define DEF_STACKSIZE (64 * 1024)
#define DEF_INACTIVE_THREAD_SLEEP_TIME 100000
#define DEF_ACTIVE_THREAD_SLEEP_TIME 50000
// 0x18~0x3F
#define DEF_THREAD_PRIORITY_IDLE 0x36
#define DEF_THREAD_PRIORITY_LOW 0x25
#define DEF_THREAD_PRIORITY_NORMAL 0x24
#define DEF_THREAD_PRIORITY_HIGH 0x23
#define DEF_THREAD_PRIORITY_REALTIME 0x18
