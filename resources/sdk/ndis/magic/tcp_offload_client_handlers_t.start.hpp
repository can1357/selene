#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_TCP_OFFLOAD_CLIENT_HANDLERS.Header", header, 0x0, 0x20, true, 0x7a65a97f95587c75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_TCP_OFFLOAD_CLIENT_HANDLERS.TcpOffloadSendCompleteHandler", tcp_offload_send_complete_handler, 0x40, 0x40, true, 0xc4fbf11ea9e9e33c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_TCP_OFFLOAD_CLIENT_HANDLERS.TcpOffloadReceiveCompleteHandler", tcp_offload_receive_complete_handler, 0x80, 0x40, true, 0x1854a3ba83eb212c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_TCP_OFFLOAD_CLIENT_HANDLERS.TcpOffloadDisconnectCompleteHandler", tcp_offload_disconnect_complete_handler, 0xc0, 0x40, true, 0x2e8ccd4aac1deb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_TCP_OFFLOAD_CLIENT_HANDLERS.TcpOffloadForwardCompleteHandler", tcp_offload_forward_complete_handler, 0x100, 0x40, true, 0xd793d74996cf3e78)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_NDIS_TCP_OFFLOAD_CLIENT_HANDLERS.TcpOffloadEventHandler", tcp_offload_event_handler, 0x140, 0x40, true, 0x2ca0cc2886afa85f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*), "_NDIS_TCP_OFFLOAD_CLIENT_HANDLERS.TcpOffloadReceiveIndicateHandler", tcp_offload_receive_indicate_handler, 0x180, 0x40, true, 0xe2d43740b77dc212)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif