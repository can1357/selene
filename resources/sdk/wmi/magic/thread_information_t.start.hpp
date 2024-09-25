#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_THREAD_INFORMATION.ProcessId", process_id, 0x0, 0x20, true, 0xb8dbd5a44294b28f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_THREAD_INFORMATION.ThreadId", thread_id, 0x20, 0x20, true, 0x2802d9a2f5c5b411)
#else
#define _m00
#define _m01
#endif