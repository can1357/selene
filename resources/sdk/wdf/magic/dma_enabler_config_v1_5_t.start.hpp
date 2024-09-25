#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0x62e44bfbb8f3a2a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_profile_t), "_WDF_DMA_ENABLER_CONFIG_V1_5.Profile", profile, 0x0, 0x0, false, 0x1d7750964dcf909c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_DMA_ENABLER_CONFIG_V1_5.MaximumLength", maximum_length, 0x0, 0x0, false, 0xd442c3bb0f678218)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_5.EvtDmaEnablerFill", evt_dma_enabler_fill, 0x0, 0x0, false, 0x519cb3d40dc826d4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_5.EvtDmaEnablerFlush", evt_dma_enabler_flush, 0x0, 0x0, false, 0xaf57168b2b86429f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_5.EvtDmaEnablerDisable", evt_dma_enabler_disable, 0x0, 0x0, false, 0x47ae7ef6c7966ee2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_5.EvtDmaEnablerEnable", evt_dma_enabler_enable, 0x0, 0x0, false, 0x81ce614aba45b9a9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_5.EvtDmaEnablerSelfManagedIoStart", evt_dma_enabler_self_managed_io_start, 0x0, 0x0, false, 0x752d34d1ffe374aa)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_5.EvtDmaEnablerSelfManagedIoStop", evt_dma_enabler_self_managed_io_stop, 0x0, 0x0, false, 0xfa1b47c91bde2bfd)
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
#endif