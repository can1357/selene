#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS.MPIDR", mpidr, 0x0, 0x1, true, 0xe4c29eb2e47ab7c8, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS.AffinityLevel", affinity_level, 0x1, 0x1, true, 0xd5a2626f7a1a67b5, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS.RunningState", running_state, 0x2, 0x1, true, 0xf7cc93187dd457b3, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS.VendorSpecificInfo", vendor_specific_info, 0x3, 0x1, true, 0x1599b30fc504d02e, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS.AsULONG", as_ulong, 0x0, 0x20, true, 0x238984222f6a9525)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif