#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WORKITEM_CONFIG.Size", size, 0x0, 0x20, true, 0x7ea5be0d4fd1a753)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "_WDF_WORKITEM_CONFIG.EvtWorkItemFunc", evt_work_item_func, 0x40, 0x40, true, 0xea7d80a3c4450046)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WORKITEM_CONFIG.AutomaticSerialization", automatic_serialization, 0x80, 0x8, true, 0x63eb8e208818b69e)
#else
#define _m00
#define _m01
#define _m02
#endif