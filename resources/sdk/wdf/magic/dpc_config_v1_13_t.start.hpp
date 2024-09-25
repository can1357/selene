#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x738466831cb22bd6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_13.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0x252c1982107bde5e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_13.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x1f61c9d89c154301)
#else
#define _m00
#define _m01
#define _m02
#endif