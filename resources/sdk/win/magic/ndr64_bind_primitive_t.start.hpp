#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_PRIMITIVE.HandleType", handle_type, 0x0, 0x8, true, 0x23b9f57270e04d31)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_PRIMITIVE.Flags", flags, 0x8, 0x8, true, 0x7f122ae996752d48)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_BIND_PRIMITIVE.StackOffset", stack_offset, 0x10, 0x10, true, 0x3a275c2e9a58728f)
#else
#define _m00
#define _m01
#define _m02
#endif