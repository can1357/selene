#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_MMVAD_FLAGS2.FileOffset", file_offset, 0x0, 0x18, true, 0x7973d968a93494b6, 24, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS2.Large", large, 0x18, 0x1, true, 0x9f1042787ede52c2, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS2.TrimBehind", trim_behind, 0x19, 0x1, true, 0xd621d9ed755d3176, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS2.Inherit", inherit, 0x1a, 0x1, true, 0xbd5cd75f748aa7a7, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS2.NoValidationNeeded", no_validation_needed, 0x1b, 0x1, true, 0xbb37aac4be356c5b, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMVAD_FLAGS2.PrivateDemandZero", private_demand_zero, 0x1c, 0x1, true, 0x78971bbfedca538b, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif