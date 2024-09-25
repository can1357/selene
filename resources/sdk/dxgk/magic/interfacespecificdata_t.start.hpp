#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_INTERFACESPECIFICDATA.hAdapter", h_adapter, 0x0, 0x40, true, 0x938544d9b7d11bcf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_gethandledata_t ), "_DXGK_INTERFACESPECIFICDATA.pfnGetHandleDataCb", pfn_get_handle_data_cb, 0x40, 0x40, true, 0x92c0872b1a589f1e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t)>*), "_DXGK_INTERFACESPECIFICDATA.pfnGetHandleParentCb", pfn_get_handle_parent_cb, 0x80, 0x40, true, 0x3909df87a46331cb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_enumhandlechildren_t ), "_DXGK_INTERFACESPECIFICDATA.pfnEnumHandleChildrenCb", pfn_enum_handle_children_cb, 0xc0, 0x40, true, 0xb1fb30fbadaec946)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_notify_interrupt_t ), "_DXGK_INTERFACESPECIFICDATA.pfnNotifyInterruptCb", pfn_notify_interrupt_cb, 0x100, 0x40, true, 0x11a6eeca52fcc981)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*)>*), "_DXGK_INTERFACESPECIFICDATA.pfnNotifyDpcCb", pfn_notify_dpc_cb, 0x140, 0x40, true, 0xeeafaa45d1c43b98)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_queryvidpninterface_t ), "_DXGK_INTERFACESPECIFICDATA.pfnQueryVidPnInterfaceCb", pfn_query_vid_pn_interface_cb, 0x180, 0x40, true, 0x2e1e93d87fec40d4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_getcaptureaddress_t ), "_DXGK_INTERFACESPECIFICDATA.pfnGetCaptureAddressCb", pfn_get_capture_address_cb, 0x1c0, 0x40, true, 0x7aa32a0b96e5f976)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif