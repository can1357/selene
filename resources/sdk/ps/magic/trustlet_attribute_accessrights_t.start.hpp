#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS.Trustlet", trustlet, 0x0, 0x1, true, 0x346a31860e9ab2df, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS.Ntos", ntos, 0x1, 0x1, true, 0x645e904d22f20d1a, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS.WriteHandle", write_handle, 0x2, 0x1, true, 0x3d261ff58ba12eba, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS.ReadHandle", read_handle, 0x3, 0x1, true, 0x30179e4130eb2765, 1, uint8_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS.AccessRights", access_rights, 0x0, 0x8, true, 0x2196690d63fa0542)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif