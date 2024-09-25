#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_ASLR_POLICY.Flags", flags, 0x0, 0x20, true, 0x4f3a6bcfbd65174f)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_ASLR_POLICY.EnableBottomUpRandomization", enable_bottom_up_randomization, 0x0, 0x1, true, 0xa0dd8d5e1c51a085, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_ASLR_POLICY.EnableForceRelocateImages", enable_force_relocate_images, 0x1, 0x1, true, 0xaf308b7dacf8a16f, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_ASLR_POLICY.EnableHighEntropy", enable_high_entropy, 0x2, 0x1, true, 0xb29456161a35e3cd, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_ASLR_POLICY.DisallowStrippedImages", disallow_stripped_images, 0x3, 0x1, true, 0xae8b1183a2fb3808, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif