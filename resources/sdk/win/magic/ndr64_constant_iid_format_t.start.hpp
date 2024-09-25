#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONSTANT_IID_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x317fa7fb4422da1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONSTANT_IID_FORMAT.Flags", flags, 0x8, 0x8, true, 0xa3196ed0ee4413ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDR64_CONSTANT_IID_FORMAT.Guid", guid, 0x20, 0x80, true, 0x9508abd81d80f6ad)
#else
#define _m00
#define _m01
#define _m02
#endif