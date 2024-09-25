#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_TYPE_SUBTYPE.dwKeySpec", dw_key_spec, 0x0, 0x20, true, 0x93e8583935a46c86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KEY_TYPE_SUBTYPE.Type", type, 0x20, 0x80, true, 0xed1111d0fa7d84fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KEY_TYPE_SUBTYPE.Subtype", subtype, 0xa0, 0x80, true, 0x350558f2a47d4d4d)
#else
#define _m00
#define _m01
#define _m02
#endif