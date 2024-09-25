#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0x4a3d41bffa828ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_11.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0x4f1abf19b0987259)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_11.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x1b4823f40742fe69)
#else
#define _m00
#define _m01
#define _m02
#endif