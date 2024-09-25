#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_hrdsss_phy_attributes_t), "DOT11_ERP_PHY_ATTRIBUTES.HRDSSSAttributes", hrdsss_attributes, 0x0, 0x40, true, 0xe364428695694a17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_ERP_PHY_ATTRIBUTES.bERPPBCCOptionImplemented", b_erppbcc_option_implemented, 0x40, 0x8, true, 0x378bd7b9ffab9caa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_ERP_PHY_ATTRIBUTES.bDSSSOFDMOptionImplemented", b_dsssofdm_option_implemented, 0x48, 0x8, true, 0xb54ac019061377fd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_ERP_PHY_ATTRIBUTES.bShortSlotTimeOptionImplemented", b_short_slot_time_option_implemented, 0x50, 0x8, true, 0x2882705dda39f4d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif