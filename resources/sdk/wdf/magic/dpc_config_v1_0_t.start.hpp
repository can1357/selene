#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0x3900b2b47649a258)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_0.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0x5929aa5b2923e850)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_0.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x863f8d5c2bac761)
#else
#define _m00
#define _m01
#define _m02
#endif