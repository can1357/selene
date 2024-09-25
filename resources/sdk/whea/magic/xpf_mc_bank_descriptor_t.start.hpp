#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.BankNumber", bank_number, 0x0, 0x8, true, 0xb30347eb1d64d406)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.ClearOnInitialization", clear_on_initialization, 0x8, 0x8, true, 0x260b5e2f0060cdd2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.StatusDataFormat", status_data_format, 0x10, 0x8, true, 0xa09ffc34d3c722da)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::xpf_mc_bank_flags_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.Flags", flags, 0x18, 0x8, true, 0x5916a038f434a318)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.ControlMsr", control_msr, 0x20, 0x20, true, 0x4ab85be2026e619a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.StatusMsr", status_msr, 0x40, 0x20, true, 0x2907ebb456459603)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.AddressMsr", address_msr, 0x60, 0x20, true, 0x934f4902586e91ba)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.MiscMsr", misc_msr, 0x80, 0x20, true, 0x65747eadf28e6dc8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_MC_BANK_DESCRIPTOR.ControlData", control_data, 0xa0, 0x40, true, 0xf45d4a6d2eef6ac5)
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
#endif