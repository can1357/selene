#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0xe0ee011243b10112)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_11.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0xf553b9d45bfcaef5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_11.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x506546f7df71a039)
#else
#define _m00
#define _m01
#define _m02
#endif