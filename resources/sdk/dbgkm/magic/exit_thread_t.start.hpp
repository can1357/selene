#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DBGKM_EXIT_THREAD.ExitStatus", exit_status, 0x0, 0x20, true, 0xf9783bd74ec6b6b0)
#else
#define _m00
#endif