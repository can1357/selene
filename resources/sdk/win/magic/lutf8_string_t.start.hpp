#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LUTF8_STRING.Length", length, 0x0, 0x40, true, 0xe389cf2fae476827)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LUTF8_STRING.MaximumLength", maximum_length, 0x40, 0x40, true, 0xdf604f590386f724)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_LUTF8_STRING.Buffer", buffer, 0x80, 0x40, true, 0x93e5f4e9aef5969)
#else
#define _m00
#define _m01
#define _m02
#endif