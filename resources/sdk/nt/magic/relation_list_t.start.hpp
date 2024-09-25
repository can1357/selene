#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_list_t*), "_RELATION_LIST.DeviceObjectList", device_object_list, 0x0, 0x40, true, 0xa18e835258dcd848)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RELATION_LIST.Sorted", sorted, 0x40, 0x8, true, 0xaa4abd6072ca5dde)
#else
#define _m00
#define _m01
#endif