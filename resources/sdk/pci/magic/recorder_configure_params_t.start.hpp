#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RECORDER_CONFIGURE_PARAMS.Size", size, 0x0, 0x20, true, 0x7bff248fd869f07d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RECORDER_CONFIGURE_PARAMS.CreateDefaultLog", create_default_log, 0x20, 0x8, true, 0xb2fcd1337125a0ae)
#else
#define _m00
#define _m01
#endif