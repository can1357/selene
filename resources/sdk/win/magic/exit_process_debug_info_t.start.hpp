#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXIT_PROCESS_DEBUG_INFO.dwExitCode", dw_exit_code, 0x0, 0x20, true, 0xa2019afad52a9a7b)
#else
#define _m00
#endif