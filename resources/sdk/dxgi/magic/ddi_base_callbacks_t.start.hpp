#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnddxgiddi_presentcb_t ), "DXGI_DDI_BASE_CALLBACKS.pfnPresentCb", pfn_present_cb, 0x0, 0x40, true, 0x31a9f93ecf249b87)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnddxgiddi_present_multiplane_overlaycb_t ), "DXGI_DDI_BASE_CALLBACKS.pfnPresentMultiplaneOverlayCb", pfn_present_multiplane_overlay_cb, 0x40, 0x40, true, 0xa0366e53972751f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnddxgiddi_present_multiplane_overlay1cb_t ), "DXGI_DDI_BASE_CALLBACKS.pfnPresentMultiplaneOverlay1Cb", pfn_present_multiplane_overlay1_cb, 0x80, 0x40, true, 0x64d5f00c6027b97)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnddxgiddi_submitpresentblttohwqueuecb_t ), "DXGI_DDI_BASE_CALLBACKS.pfnSubmitPresentBltToHwQueueCb", pfn_submit_present_blt_to_hw_queue_cb, 0xc0, 0x40, true, 0x3d18c8feafe7af6c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnddxgiddi_submitpresenttohwqueuecb_t ), "DXGI_DDI_BASE_CALLBACKS.pfnSubmitPresentToHwQueueCb", pfn_submit_present_to_hw_queue_cb, 0x100, 0x40, true, 0x390f54e5b665dcda)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif