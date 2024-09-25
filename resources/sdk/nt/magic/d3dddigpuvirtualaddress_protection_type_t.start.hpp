#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE.Write", write, 0x0, 0x1, true, 0x30892d986b4c95af, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE.Execute", execute, 0x1, 0x1, true, 0xc73d277bd139c6c1, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE.Zero", zero, 0x2, 0x1, true, 0xaa5309dee243ce3c, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE.NoAccess", no_access, 0x3, 0x1, true, 0x26e33a926e12801a, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE.SystemUseOnly", system_use_only, 0x4, 0x1, true, 0x14f2c6a8391c07b4, 1, uint64_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE.Value", value, 0x0, 0x40, true, 0x770068df45f94eb8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif