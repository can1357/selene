#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_SYSTEM_DLL_INIT_BLOCK.Size", size, 0x0, 0x20, true, 0x1a5586410d5c0575)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_PS_SYSTEM_DLL_INIT_BLOCK.SystemDllWowRelocation", system_dll_wow_relocation, 0x40, 0x40, true, 0xff61b2f4e7f287ae, 0, uint64_t,uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_SYSTEM_DLL_INIT_BLOCK.SystemDllNativeRelocation", system_dll_native_relocation, 0x80, 0x40, true, 0x43e448af806f16ec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint64_t, 16>, sdk::array<uint32_t, 16>>), "_PS_SYSTEM_DLL_INIT_BLOCK.Wow64SharedInformation", wow64_shared_information, 0xc0, 0x0, true, 0xed2bd70fbd83f60)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_SYSTEM_DLL_INIT_BLOCK.RngData", rng_data, 0x4c0, 0x20, true, 0xa06538b350f55536)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_SYSTEM_DLL_INIT_BLOCK.Flags", flags, 0x4e0, 0x20, true, 0xc1b4858d5ee7f23c)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_SYSTEM_DLL_INIT_BLOCK.CfgOverride", cfg_override, 0x4e0, 0x1, true, 0x39f816ae9ef29714, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_SYSTEM_DLL_INIT_BLOCK.CfgBitMap", cfg_bit_map, 0x5c0, 0x40, true, 0x29748ca264e5be45)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_SYSTEM_DLL_INIT_BLOCK.CfgBitMapSize", cfg_bit_map_size, 0x600, 0x40, true, 0x75e4916416723b43)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_SYSTEM_DLL_INIT_BLOCK.Wow64CfgBitMap", wow64_cfg_bit_map, 0x640, 0x40, true, 0x4b5b1ca518f1a8b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_SYSTEM_DLL_INIT_BLOCK.Wow64CfgBitMapSize", wow64_cfg_bit_map_size, 0x680, 0x40, true, 0x7c9d6577df4931fa)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::mitigation_options_map_t), "_PS_SYSTEM_DLL_INIT_BLOCK.MitigationOptionsMap", mitigation_options_map, 0x500, 0xc0, true, 0x95f6dbb1025e76aa)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::mitigation_audit_options_map_t), "_PS_SYSTEM_DLL_INIT_BLOCK.MitigationAuditOptionsMap", mitigation_audit_options_map, 0x6c0, 0xc0, true, 0xcc0cfcecf73df3f8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_SYSTEM_DLL_INIT_BLOCK.MitigationOptions", mitigation_options, 0x0, 0x0, false, 0x3118d27f433453a0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif