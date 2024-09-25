#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0x607511242f86690f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_5.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0xf4f789c5e8067f5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_5.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x93e193f9367fc65e)
#else
#define _m00
#define _m01
#define _m02
#endif