#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0xca2254e9bba9f6e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_profile_t), "_WDF_DMA_ENABLER_CONFIG_V1_11.Profile", profile, 0x0, 0x0, false, 0xd4a107063b85e940)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_DMA_ENABLER_CONFIG_V1_11.MaximumLength", maximum_length, 0x0, 0x0, false, 0x36db9b086c54f3a6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_11.EvtDmaEnablerFill", evt_dma_enabler_fill, 0x0, 0x0, false, 0x2c6a5258b3dc6527)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_11.EvtDmaEnablerFlush", evt_dma_enabler_flush, 0x0, 0x0, false, 0x253e2cd03ae894ad)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_11.EvtDmaEnablerDisable", evt_dma_enabler_disable, 0x0, 0x0, false, 0xa182c4d5df9234c1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_11.EvtDmaEnablerEnable", evt_dma_enabler_enable, 0x0, 0x0, false, 0x276f30a9268fd64)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_11.EvtDmaEnablerSelfManagedIoStart", evt_dma_enabler_self_managed_io_start, 0x0, 0x0, false, 0x4dcc3d816de3f833)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_11.EvtDmaEnablerSelfManagedIoStop", evt_dma_enabler_self_managed_io_stop, 0x0, 0x0, false, 0x839d37dbda020fcd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_11.AddressWidthOverride", address_width_override, 0x0, 0x0, false, 0x1011f9e774893c5c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_11.WdmDmaVersionOverride", wdm_dma_version_override, 0x0, 0x0, false, 0x16284b692aac5f50)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_11.Flags", flags, 0x0, 0x0, false, 0xf8f9b5c3acaf5092)
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