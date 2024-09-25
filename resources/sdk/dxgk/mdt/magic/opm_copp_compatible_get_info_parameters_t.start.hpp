#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_random_number_t), "_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS.rnRandomNumber", rn_random_number, 0x0, 0x80, true, 0x90340c4dbd256e1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS.guidInformation", guid_information, 0x80, 0x80, true, 0xeb1f59bb22675f8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS.ulSequenceNumber", ul_sequence_number, 0x100, 0x20, true, 0x9c34635bf3d37cf8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS.cbParametersSize", cb_parameters_size, 0x120, 0x20, true, 0x66b37b7c58a2e3ed)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4056>), "_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS.abParameters", ab_parameters, 0x140, 0xc0, true, 0xeb4a763992d1f3be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif