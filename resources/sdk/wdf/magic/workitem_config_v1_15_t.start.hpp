#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0xefaf2cd018fd7918)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_15.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0xd5f23fc2d4a173f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_15.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x4068c6c23a730924)
#else
#define _m00
#define _m01
#define _m02
#endif