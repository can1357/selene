#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_omac_t), "_DXGKMDT_OPM_GET_INFO_PARAMETERS.omac", omac, 0x0, 0x80, true, 0x8b89b6ba9fc61b56)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_random_number_t), "_DXGKMDT_OPM_GET_INFO_PARAMETERS.rnRandomNumber", rn_random_number, 0x80, 0x80, true, 0x3bc2f4ee13788ffb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXGKMDT_OPM_GET_INFO_PARAMETERS.guidInformation", guid_information, 0x100, 0x80, true, 0x2427a4661b42f64a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_GET_INFO_PARAMETERS.ulSequenceNumber", ul_sequence_number, 0x180, 0x20, true, 0xda72031be48a24e8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_GET_INFO_PARAMETERS.cbParametersSize", cb_parameters_size, 0x1a0, 0x20, true, 0x1fb62b752750c866)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4056>), "_DXGKMDT_OPM_GET_INFO_PARAMETERS.abParameters", ab_parameters, 0x1c0, 0xc0, true, 0x1ce42825696087fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif