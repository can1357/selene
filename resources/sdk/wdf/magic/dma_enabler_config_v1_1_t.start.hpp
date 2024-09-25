#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0x2114a459923522f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_profile_t), "_WDF_DMA_ENABLER_CONFIG_V1_1.Profile", profile, 0x0, 0x0, false, 0xde9af7980bfa3fb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_DMA_ENABLER_CONFIG_V1_1.MaximumLength", maximum_length, 0x0, 0x0, false, 0x94b5cb609624faf9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_1.EvtDmaEnablerFill", evt_dma_enabler_fill, 0x0, 0x0, false, 0xab4625a12c0a7f6e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_1.EvtDmaEnablerFlush", evt_dma_enabler_flush, 0x0, 0x0, false, 0xf21793c983782628)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_1.EvtDmaEnablerDisable", evt_dma_enabler_disable, 0x0, 0x0, false, 0x57af4213db76977f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_1.EvtDmaEnablerEnable", evt_dma_enabler_enable, 0x0, 0x0, false, 0x8bfe363733662644)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_1.EvtDmaEnablerSelfManagedIoStart", evt_dma_enabler_self_managed_io_start, 0x0, 0x0, false, 0xaea33bb7a018fbda)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_1.EvtDmaEnablerSelfManagedIoStop", evt_dma_enabler_self_managed_io_stop, 0x0, 0x0, false, 0x894a0dec3c32f60)
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