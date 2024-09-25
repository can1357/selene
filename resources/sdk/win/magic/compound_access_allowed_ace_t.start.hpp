#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_COMPOUND_ACCESS_ALLOWED_ACE.Header", header, 0x0, 0x20, true, 0x13122f6d131d410f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMPOUND_ACCESS_ALLOWED_ACE.Mask", mask, 0x20, 0x20, true, 0x2e3207b6edd610dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMPOUND_ACCESS_ALLOWED_ACE.CompoundAceType", compound_ace_type, 0x40, 0x10, true, 0xa71182ed655f54c4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMPOUND_ACCESS_ALLOWED_ACE.SidStart", sid_start, 0x60, 0x20, true, 0xb0f7f7a5c8e6d2d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif