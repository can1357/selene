#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_INFORMATION.hProcess", h_process, 0x0, 0x40, true, 0x2fb69c8b4367a0c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_INFORMATION.hThread", h_thread, 0x40, 0x40, true, 0x2e62685d99699c7e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_INFORMATION.dwProcessId", dw_process_id, 0x80, 0x20, true, 0xa07c24999acc81f1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_INFORMATION.dwThreadId", dw_thread_id, 0xa0, 0x20, true, 0x1c067094dfcf4331)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif