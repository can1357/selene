#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PNP_DEVICE_EVENT_LIST.Status", status, 0x0, 0x20, true, 0x6464c13595b01d94)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_PNP_DEVICE_EVENT_LIST.EventQueueMutex", event_queue_mutex, 0x40, 0xc0, true, 0xc70669b42d797525)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_PNP_DEVICE_EVENT_LIST.Lock", lock, 0x200, 0xc0, true, 0xe91048f0ab0e0a41)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PNP_DEVICE_EVENT_LIST.List", list, 0x3c0, 0x80, true, 0xbde5c87507fd278d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif