#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0xc7c5080edec768a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_9.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0xb82652c9d73fd40c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_9.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x30b80a7ca8e431bc)
#else
#define _m00
#define _m01
#define _m02
#endif