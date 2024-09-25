#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KDEVICE_QUEUE_ENTRY.DeviceListEntry", device_list_entry, 0x0, 0x80, true, 0xa7934cb4003c994c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDEVICE_QUEUE_ENTRY.SortKey", sort_key, 0x80, 0x20, true, 0x223edfb4a589869)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KDEVICE_QUEUE_ENTRY.Inserted", inserted, 0xa0, 0x8, true, 0xea2976f28b3248be)
#else
#define _m00
#define _m01
#define _m02
#endif