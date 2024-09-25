#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_INFORMATION.HandleCount", handle_count, 0x0, 0x20, true, 0xf477a13a50ddf074)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_INFORMATION.HandleCountHighWatermark", handle_count_high_watermark, 0x20, 0x20, true, 0x38ba40d8e75034d1)
#else
#define _m00
#define _m01
#endif