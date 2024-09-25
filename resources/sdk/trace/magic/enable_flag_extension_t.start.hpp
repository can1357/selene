#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRACE_ENABLE_FLAG_EXTENSION.Offset", offset, 0x0, 0x10, true, 0xbbecb213ceec2c10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_ENABLE_FLAG_EXTENSION.Length", length, 0x10, 0x8, true, 0x81f24b3ddf8e3329)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_ENABLE_FLAG_EXTENSION.Flag", flag, 0x18, 0x8, true, 0x64eeee9ffe330a64)
#else
#define _m00
#define _m01
#define _m02
#endif