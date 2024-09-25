#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_TRIGGER.dwTriggerType", dw_trigger_type, 0x0, 0x20, true, 0x6bddeb403a8ce4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_TRIGGER.dwAction", dw_action, 0x20, 0x20, true, 0xcef9eefd2f9da9a9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_SERVICE_TRIGGER.pTriggerSubtype", p_trigger_subtype, 0x40, 0x40, true, 0x2b8f92bd1b9252ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_TRIGGER.cDataItems", c_data_items, 0x80, 0x20, true, 0x7ecb1e3cf4a9d73a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pservice_trigger_specific_data_item_t ), "_SERVICE_TRIGGER.pDataItems", p_data_items, 0xc0, 0x40, true, 0x9305e7c5aaa55848)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif