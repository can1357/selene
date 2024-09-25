#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_INSTRUMENTATION_CALLBACK_INFORMATION.Version", version, 0x0, 0x20, true, 0xefc4cc6f0dbd9c02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_INSTRUMENTATION_CALLBACK_INFORMATION.Callback", callback, 0x40, 0x40, true, 0xd8467370edf0cff3)
#else
#define _m00
#define _m01
#endif