#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetProtectionLevelCmdData.ProtType", prot_type, 0x0, 0x20, true, 0x7a2621953ec3b0df)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetProtectionLevelCmdData.ProtLevel", prot_level, 0x20, 0x20, true, 0xe0b0cdc8bb5964bc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetProtectionLevelCmdData.ExtendedInfoChangeMask", extended_info_change_mask, 0x40, 0x20, true, 0xccf2ba0972cfaa84)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetProtectionLevelCmdData.ExtendedInfoData", extended_info_data, 0x60, 0x20, true, 0x58a92e6a42053957)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif