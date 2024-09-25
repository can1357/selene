#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_VPD_IDENTIFICATION_DESCRIPTOR.CodeSet", code_set, 0x0, 0x4, true, 0x2491f00184e589d4, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_VPD_IDENTIFICATION_DESCRIPTOR.IdentifierType", identifier_type, 0x8, 0x4, true, 0x15755423c80bd4f0, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_VPD_IDENTIFICATION_DESCRIPTOR.Association", association, 0xc, 0x2, true, 0x9296f3d16c5bc331, 2, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_IDENTIFICATION_DESCRIPTOR.IdentifierLength", identifier_length, 0x18, 0x8, true, 0x2e9f2e491c1f51f7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_VPD_IDENTIFICATION_DESCRIPTOR.Identifier", identifier, 0x20, 0x0, true, 0x4c1fd1c830746f9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif