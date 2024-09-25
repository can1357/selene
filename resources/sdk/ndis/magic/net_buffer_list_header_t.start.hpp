#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_data_t), "_NET_BUFFER_LIST_HEADER.NetBufferListData", net_buffer_list_data, 0x0, 0x80, true, 0x37da60a418e34a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_NET_BUFFER_LIST_HEADER.Link", link, 0x0, 0x80, true, 0xc985ce2af5fba2b8)
#else
#define _m00
#define _m01
#endif