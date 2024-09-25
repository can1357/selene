#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0xf3b09c71079926a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_17.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0x3a1bdb3c542281fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_17.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xc7810b09de0a5cbd)
#else
#define _m00
#define _m01
#define _m02
#endif