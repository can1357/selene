#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0xee635e377ef1ded9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0xce08dee34648c1c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::chimney_offload_type_t), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.OffloadType", offload_type, 0x40, 0x20, true, 0x3422b2306c8507a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadSendCompleteHandler", tcp_offload_send_complete_handler, 0x80, 0x40, true, 0x23329a72ac83706b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadReceiveCompleteHandler", tcp_offload_receive_complete_handler, 0xc0, 0x40, true, 0x2705b2add9faf0c3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadDisconnectCompleteHandler", tcp_offload_disconnect_complete_handler, 0x100, 0x40, true, 0x6bc167237d3af658)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadForwardCompleteHandler", tcp_offload_forward_complete_handler, 0x140, 0x40, true, 0x44975b52ace66e49)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadEventHandler", tcp_offload_event_handler, 0x180, 0x40, true, 0x8e6e46d5ea6f7acd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadReceiveIndicateHandler", tcp_offload_receive_indicate_handler, 0x1c0, 0x40, true, 0x40c1a02432552b83)
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
#endif