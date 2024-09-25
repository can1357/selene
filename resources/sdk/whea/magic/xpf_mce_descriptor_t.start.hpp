#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_XPF_MCE_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0xfb411640cd02e958)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_XPF_MCE_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0xfe7efe25dfbadce0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_XPF_MCE_DESCRIPTOR.NumberOfBanks", number_of_banks, 0x18, 0x8, true, 0xb0d3ce67fbdf2dd5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::xpf_mce_flags_t), "_WHEA_XPF_MCE_DESCRIPTOR.Flags", flags, 0x20, 0x20, true, 0xceb40bbeea8100a1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_MCE_DESCRIPTOR.MCG_Capability", mcg_capability, 0x40, 0x40, true, 0x412682d53da8e644)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_MCE_DESCRIPTOR.MCG_GlobalControl", mcg_global_control, 0x80, 0x40, true, 0x35b92a68a5f7039e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct whea::xpf_mc_bank_descriptor_t, 32>), "_WHEA_XPF_MCE_DESCRIPTOR.Banks", banks, 0xc0, 0x0, true, 0x68a69d0d65170fbe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif