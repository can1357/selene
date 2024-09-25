#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KSEVENT_ENTRY.ListEntry", list_entry, 0x0, 0x0, false, 0x9612b00e646e491e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSEVENT_ENTRY.Object", object, 0x0, 0x0, false, 0x6efd4b6047337f21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksdpc_item_t*), "_KSEVENT_ENTRY.DpcItem", dpc_item, 0x0, 0x0, false, 0x4bf3633e31a72a52)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksbuffer_item_t*), "_KSEVENT_ENTRY.BufferItem", buffer_item, 0x0, 0x0, false, 0x90cadea541674d3a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::kseventdata_t*), "_KSEVENT_ENTRY.EventData", event_data, 0x0, 0x0, false, 0xb6513114871f210f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSEVENT_ENTRY.NotificationType", notification_type, 0x0, 0x0, false, 0x48576b0d6b11abe6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksevent_set_t*), "_KSEVENT_ENTRY.EventSet", event_set, 0x0, 0x0, false, 0x72792d44894c42c4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksevent_item_t*), "_KSEVENT_ENTRY.EventItem", event_item, 0x0, 0x0, false, 0x921c1e66025c88c1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_KSEVENT_ENTRY.FileObject", file_object, 0x0, 0x0, false, 0xcd8f6fe066df1a11)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSEVENT_ENTRY.SemaphoreAdjustment", semaphore_adjustment, 0x0, 0x0, false, 0x39bcfb56a4a207b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSEVENT_ENTRY.Flags", flags, 0x0, 0x0, false, 0x46600c52c21ae22)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif