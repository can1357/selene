#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_data_t), "_NET_BUFFER_HEADER.NetBufferData", net_buffer_data, 0x0, 0x80, true, 0xb14b35c7014389af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_NET_BUFFER_HEADER.Link", link, 0x0, 0x80, true, 0x822bc27a5c8f786d)
#else
#define _m00
#define _m01
#endif