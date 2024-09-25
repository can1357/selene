#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_SUPPORTED_CONTROL_TYPE_LIST.MaxControlType", max_control_type, 0x0, 0x20, true, 0xd8f6aa310f0d2486)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_SCSI_SUPPORTED_CONTROL_TYPE_LIST.SupportedTypeList", supported_type_list, 0x20, 0x0, true, 0x217eccb7452572e3)
#else
#define _m00
#define _m01
#endif