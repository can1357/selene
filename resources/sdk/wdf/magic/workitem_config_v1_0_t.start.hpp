#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0x66aeac79970d5abb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_0.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0x855400f5f9621a81)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_0.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xc821ed8186bc647a)
#else
#define _m00
#define _m01
#define _m02
#endif