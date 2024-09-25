#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DP_INTERFACE.Size", size, 0x0, 0x10, true, 0x1fdbb62b377f32be)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DP_INTERFACE.Version", version, 0x10, 0x10, true, 0xf778da9668d9286)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_DP_INTERFACE.Context", context, 0x40, 0x40, true, 0x4c5e11a7a8de28b2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_DP_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xe9f4c0d77c3c4623)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_DP_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xcaba60add6a117f0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_querydpcaps_t ), "_DXGK_DP_INTERFACE.DxgkDdiQueryDPCaps", dxgk_ddi_query_dp_caps, 0x100, 0x40, true, 0x6fa94d53b33cb53)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getdpaddress_t ), "_DXGK_DP_INTERFACE.DxgkDdiGetDPAddress", dxgk_ddi_get_dp_address, 0x140, 0x40, true, 0x3e5fab61a652d205)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_dpauxiotransmission_t ), "_DXGK_DP_INTERFACE.DxgkDdiDPAuxIoTransmission", dxgk_ddi_dp_aux_io_transmission, 0x180, 0x40, true, 0xeaf500cabd8d0fe6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_dpi2ciotransmission_t ), "_DXGK_DP_INTERFACE.DxgkDdiDPI2CIoTransmission", dxgk_ddi_dpi2c_io_transmission, 0x1c0, 0x40, true, 0x977bc93b82f7b02b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_dpsbmtransmission_t ), "_DXGK_DP_INTERFACE.DxgkDdiDPSBMTransmission", dxgk_ddi_dpsbm_transmission, 0x200, 0x40, true, 0xb22d2b9849407606)
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
#define _m09
#endif