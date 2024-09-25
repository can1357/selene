#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_random_number_t), "_DXGKMDT_OPM_CONNECTED_HDCP_DEVICE_INFORMATION.rnRandomNumber", rn_random_number, 0x0, 0x80, true, 0xc5c008bd875c8689)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_CONNECTED_HDCP_DEVICE_INFORMATION.ulStatusFlags", ul_status_flags, 0x80, 0x20, true, 0x4edb5ef8ccb6b540)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_CONNECTED_HDCP_DEVICE_INFORMATION.ulHDCPFlags", ul_hdcp_flags, 0xa0, 0x20, true, 0x2b4711fb563f5f33)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_hdcp_key_selection_vector_t), "_DXGKMDT_OPM_CONNECTED_HDCP_DEVICE_INFORMATION.ksvB", ksv_b, 0xc0, 0x28, true, 0x94209fc69364b5ce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif