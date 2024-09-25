#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG.Size", size, 0x0, 0x20, true, 0x3f24f75c7b75f81d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::dma_profile_t), "_WDF_DMA_ENABLER_CONFIG.Profile", profile, 0x20, 0x20, true, 0x4c72fc58058176d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_DMA_ENABLER_CONFIG.MaximumLength", maximum_length, 0x40, 0x40, true, 0xecfe17a637ab0e86)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG.EvtDmaEnablerFill", evt_dma_enabler_fill, 0x80, 0x40, true, 0xe72afaf96b16a195)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG.EvtDmaEnablerFlush", evt_dma_enabler_flush, 0xc0, 0x40, true, 0x44231837883efc1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG.EvtDmaEnablerDisable", evt_dma_enabler_disable, 0x100, 0x40, true, 0xa76b047239c98c1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG.EvtDmaEnablerEnable", evt_dma_enabler_enable, 0x140, 0x40, true, 0x262729fdce61673c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG.EvtDmaEnablerSelfManagedIoStart", evt_dma_enabler_self_managed_io_start, 0x180, 0x40, true, 0x7b664e54f252daa1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG.EvtDmaEnablerSelfManagedIoStop", evt_dma_enabler_self_managed_io_stop, 0x1c0, 0x40, true, 0xd3c83da395b0c4bf)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG.AddressWidthOverride", address_width_override, 0x200, 0x20, true, 0x1ecddab54431ab7e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG.WdmDmaVersionOverride", wdm_dma_version_override, 0x220, 0x20, true, 0x6a6a3e6ef9fe714c)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG.Flags", flags, 0x240, 0x20, true, 0xad6af75668fc7d3c)
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
#define _m10
#define _m11
#endif