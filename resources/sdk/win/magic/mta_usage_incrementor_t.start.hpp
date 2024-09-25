#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MTA_USAGE_INCREMENTOR.ulTime", ul_time, 0x0, 0x20, true, 0xe3049a21f581c0f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MTA_USAGE_INCREMENTOR.dwThreadId", dw_thread_id, 0x20, 0x20, true, 0x30753404a7511ad6)
#else
#define _m00
#define _m01
#endif