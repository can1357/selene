#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NET_BUFFER_LIST_DATA.Next", next, 0x0, 0x40, true, 0x90ae0494ed0be886)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_t*), "_NET_BUFFER_LIST_DATA.FirstNetBuffer", first_net_buffer, 0x40, 0x40, true, 0x69caa443d9c89318)
#else
#define _m00
#define _m01
#endif