#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSEVENT_ITEM.EventId", event_id, 0x0, 0x0, false, 0x5a8de1f150984f62)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSEVENT_ITEM.DataInput", data_input, 0x0, 0x0, false, 0xab8cf5c4ad180acc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSEVENT_ITEM.ExtraEntryData", extra_entry_data, 0x0, 0x0, false, 0x853fd3f3538a6fe6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, struct ndis::kseventdata_t*, struct ndis::ksevent_entry_t*)>*), "KSEVENT_ITEM.AddHandler", add_handler, 0x0, 0x0, false, 0x652a92f9a8f30c2c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::file_object_t*, struct ndis::ksevent_entry_t*)>*), "KSEVENT_ITEM.RemoveHandler", remove_handler, 0x0, 0x0, false, 0x48d1c5ed45802413)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*), "KSEVENT_ITEM.SupportHandler", support_handler, 0x0, 0x0, false, 0xb2b82b39b90ea6cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif