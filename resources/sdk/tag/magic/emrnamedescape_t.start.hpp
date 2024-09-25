#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRNAMEDESCAPE.emr", emr, 0x0, 0x40, true, 0x5c0306b7afdf5e8c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRNAMEDESCAPE.iEscape", i_escape, 0x40, 0x20, true, 0xe75836739211e498)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRNAMEDESCAPE.cbDriver", cb_driver, 0x60, 0x20, true, 0x75d38799b36cb617)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRNAMEDESCAPE.cbEscData", cb_esc_data, 0x80, 0x20, true, 0xb2ba5ba8004bf244)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRNAMEDESCAPE.EscData", esc_data, 0xa0, 0x8, true, 0x84d18b92f452abc4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif