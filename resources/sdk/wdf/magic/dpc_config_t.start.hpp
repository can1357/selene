#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG.Size", size, 0x0, 0x20, true, 0x7df91423f6bc1069)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG.EvtDpcFunc", evt_dpc_func, 0x40, 0x40, true, 0x55d0adc1e7c7312e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG.AutomaticSerialization", automatic_serialization, 0x80, 0x8, true, 0x362ef650cf1bf023)
#else
#define _m00
#define _m01
#define _m02
#endif