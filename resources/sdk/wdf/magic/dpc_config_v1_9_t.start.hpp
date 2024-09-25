#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0x27ea3ef580add755)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_9.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0xea0281642e04d8e3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_9.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x78877edf0a6e1dbd)
#else
#define _m00
#define _m01
#define _m02
#endif