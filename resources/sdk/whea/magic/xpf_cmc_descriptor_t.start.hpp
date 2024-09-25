#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_XPF_CMC_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0x45f6bfafe27a1e11)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_XPF_CMC_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0xbb64e9c45b6c8a1e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_XPF_CMC_DESCRIPTOR.NumberOfBanks", number_of_banks, 0x18, 0x8, true, 0x3230a4fe5cfbc531)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::notification_descriptor_t), "_WHEA_XPF_CMC_DESCRIPTOR.Notify", notify, 0x40, 0xe0, true, 0x1517b8598b246907)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct whea::xpf_mc_bank_descriptor_t, 32>), "_WHEA_XPF_CMC_DESCRIPTOR.Banks", banks, 0x120, 0x0, true, 0x377c7520e5affa28)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif