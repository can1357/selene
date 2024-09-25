#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "RTL_ACE_DATA.AceType", ace_type, 0x0, 0x8, true, 0xbdd30833283c096e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "RTL_ACE_DATA.InheritFlags", inherit_flags, 0x8, 0x8, true, 0x436384a502f7c240)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "RTL_ACE_DATA.AceFlags", ace_flags, 0x10, 0x8, true, 0xe1dd68b8bafba56f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RTL_ACE_DATA.Mask", mask, 0x20, 0x20, true, 0x5f22cd275d86b41f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "RTL_ACE_DATA.Sid", sid, 0x40, 0x40, true, 0x7793b699916e6558)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif