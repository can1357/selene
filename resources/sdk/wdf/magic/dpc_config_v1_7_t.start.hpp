#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_7.Size", size, 0x0, 0x0, false, 0xbdf9a3ce5583215f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_7.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0xe02169dff9e8b4dd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_7.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x38cca225646f011c)
#else
#define _m00
#define _m01
#define _m02
#endif