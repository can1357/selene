#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0x506ceb5cc54e596c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_1.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0x16d4a6ee1540d87c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_1.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xbe42ce12d962bd71)
#else
#define _m00
#define _m01
#define _m02
#endif