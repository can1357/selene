#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_omac_t), "_DXGKMDT_OPM_CONFIGURE_PARAMETERS.omac", omac, 0x0, 0x80, true, 0x7b6a3c7260c01ec6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXGKMDT_OPM_CONFIGURE_PARAMETERS.guidSetting", guid_setting, 0x80, 0x80, true, 0xee24d4994f62d227)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_CONFIGURE_PARAMETERS.ulSequenceNumber", ul_sequence_number, 0x100, 0x20, true, 0xd10b195d4acbdce2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_CONFIGURE_PARAMETERS.cbParametersSize", cb_parameters_size, 0x120, 0x20, true, 0xbad8ec305e1f42bd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4056>), "_DXGKMDT_OPM_CONFIGURE_PARAMETERS.abParameters", ab_parameters, 0x140, 0xc0, true, 0x759e297de2a64371)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif