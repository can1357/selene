#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NBL_QUEUE.First", first, 0x0, 0x0, false, 0xf48a34fb1ce06290)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t**), "_NBL_QUEUE.Last", last, 0x0, 0x0, false, 0xaa0d6d1f3e72bec8)
#else
#define _m00
#define _m01
#endif