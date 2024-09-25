#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x3e061362a02b58db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_15.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0x6d3cb612fa6706b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_15.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xcdf12f7b4ecdc496)
#else
#define _m00
#define _m01
#define _m02
#endif