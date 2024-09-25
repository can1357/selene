#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x8992e62dfe00cb9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG_V1_13.EvtWorkItemFunc", evt_work_item_func, 0x0, 0x0, false, 0xa4600fd0fe8105e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG_V1_13.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x2c083114789fef0c)
#else
#define _m00
#define _m01
#define _m02
#endif