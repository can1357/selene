#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXIT_THREAD_DEBUG_INFO.dwExitCode", dw_exit_code, 0x0, 0x20, true, 0xd068cb59f20cae8e)
#else
#define _m00
#endif