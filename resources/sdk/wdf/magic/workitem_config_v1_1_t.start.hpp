#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0xc2523156a425c304)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_1.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0x568a5ce9e8e46acf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_1.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x1f00b9dd5f934a7d)
#else
#define _m00
#define _m01
#define _m02
#endif