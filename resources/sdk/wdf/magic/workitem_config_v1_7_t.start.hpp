#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_7.Size", size, 0x0, 0x0, false, 0x439834063f15ebaf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_7.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0x98604d5b119cda50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_7.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xffc73bc538aca483)
#else
#define _m00
#define _m01
#define _m02
#endif