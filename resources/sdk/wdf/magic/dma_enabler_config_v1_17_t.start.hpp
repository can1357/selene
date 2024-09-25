#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x86b63c84297de0da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_profile_t), "_WDF_DMA_ENABLER_CONFIG_V1_17.Profile", profile, 0x0, 0x0, false, 0xe75f3b908560cf8a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_DMA_ENABLER_CONFIG_V1_17.MaximumLength", maximum_length, 0x0, 0x0, false, 0x7c420b70a617e913)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_17.EvtDmaEnablerFill", evt_dma_enabler_fill, 0x0, 0x0, false, 0x11817d29becdd1e3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_17.EvtDmaEnablerFlush", evt_dma_enabler_flush, 0x0, 0x0, false, 0x4ab70190f6ec0aaa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_17.EvtDmaEnablerDisable", evt_dma_enabler_disable, 0x0, 0x0, false, 0x792c5b058a037bd6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_17.EvtDmaEnablerEnable", evt_dma_enabler_enable, 0x0, 0x0, false, 0x6c078e496efde22c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_17.EvtDmaEnablerSelfManagedIoStart", evt_dma_enabler_self_managed_io_start, 0x0, 0x0, false, 0xf1379530ba002550)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "_WDF_DMA_ENABLER_CONFIG_V1_17.EvtDmaEnablerSelfManagedIoStop", evt_dma_enabler_self_managed_io_stop, 0x0, 0x0, false, 0x3c6d802487099795)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_17.AddressWidthOverride", address_width_override, 0x0, 0x0, false, 0xec213a55241e4f76)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_17.WdmDmaVersionOverride", wdm_dma_version_override, 0x0, 0x0, false, 0x908c5e20fd497808)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_ENABLER_CONFIG_V1_17.Flags", flags, 0x0, 0x0, false, 0xe9c34837a95fcd24)
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