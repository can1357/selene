#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum asl::attribute_type_t), "_ASL_ATTRIBUTE.Type", type, 0x0, 0x20, true, 0x11dd89c47f747494)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ASL_ATTRIBUTE.Length", length, 0x40, 0x40, true, 0x1c8e7c050c744f97)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ASL_ATTRIBUTE.Value", value, 0x80, 0x40, true, 0x4330aadf16c789f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASL_ATTRIBUTE.Flags", flags, 0xc0, 0x20, true, 0x36bccd9c5c032d03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif