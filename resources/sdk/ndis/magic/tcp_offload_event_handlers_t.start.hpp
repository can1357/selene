#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_TCP_OFFLOAD_EVENT_HANDLERS.Header", header, 0x0, 0x20, true, 0x6705121b4380f24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_NDIS_TCP_OFFLOAD_EVENT_HANDLERS.NdisTcpOffloadEventHandler", ndis_tcp_offload_event_handler, 0x40, 0x40, true, 0xac3f6e7513d5ccfa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*), "_NDIS_TCP_OFFLOAD_EVENT_HANDLERS.NdisTcpOffloadReceiveHandler", ndis_tcp_offload_receive_handler, 0x80, 0x40, true, 0xef1ccdfa710216cd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_TCP_OFFLOAD_EVENT_HANDLERS.NdisTcpOffloadSendComplete", ndis_tcp_offload_send_complete, 0xc0, 0x40, true, 0x4e577e4bb18ebf6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_TCP_OFFLOAD_EVENT_HANDLERS.NdisTcpOffloadReceiveComplete", ndis_tcp_offload_receive_complete, 0x100, 0x40, true, 0x29d7deb1ac006734)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_TCP_OFFLOAD_EVENT_HANDLERS.NdisTcpOffloadDisconnectComplete", ndis_tcp_offload_disconnect_complete, 0x140, 0x40, true, 0xd273de921b5c4597)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_TCP_OFFLOAD_EVENT_HANDLERS.NdisTcpOffloadForwardComplete", ndis_tcp_offload_forward_complete, 0x180, 0x40, true, 0x8b2ab1f4d90e2f71)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif