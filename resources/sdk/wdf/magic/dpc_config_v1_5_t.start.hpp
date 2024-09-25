#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0x1201bb7130d2aef7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_5.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0x98d22b8168e2c912)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_5.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xb4501c72747e584b)
#else
#define _m00
#define _m01
#define _m02
#endif