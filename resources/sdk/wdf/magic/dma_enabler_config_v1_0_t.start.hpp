#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0x6095c85764640422)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_profile_t), "_WDF_DMA_ENABLER_CONFIG_V1_0.Profile", profile, 0x0, 0x0, false, 0x9adef5c571d00e1a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_DMA_ENABLER_CONFIG_V1_0.MaximumLength", maximum_length, 0x0, 0x0, false, 0xc3626e773f65beea)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_0.EvtDmaEnablerFill", evt_dma_enabler_fill, 0x0, 0x0, false, 0x5dc83eba13aca913)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_0.EvtDmaEnablerFlush", evt_dma_enabler_flush, 0x0, 0x0, false, 0x404e61beaa851283)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_0.EvtDmaEnablerDisable", evt_dma_enabler_disable, 0x0, 0x0, false, 0xeb602f3bc4a306c7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_0.EvtDmaEnablerEnable", evt_dma_enabler_enable, 0x0, 0x0, false, 0xd661dc2218676e9c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_0.EvtDmaEnablerSelfManagedIoStart", evt_dma_enabler_self_managed_io_start, 0x0, 0x0, false, 0xc09293e8e8d5fb94)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_0.EvtDmaEnablerSelfManagedIoStop", evt_dma_enabler_self_managed_io_stop, 0x0, 0x0, false, 0x6f78629ae20c9c3c)
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