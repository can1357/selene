#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0xcaa5b0a41e141d98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0x4eb21a0a2c46d9a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::chimney_offload_type_t), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.OffloadType", offload_type, 0x40, 0x20, true, 0x54a392fc2fa17e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadSendHandler", tcp_offload_send_handler, 0x80, 0x40, true, 0x67158ed34ec1734a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadReceiveHandler", tcp_offload_receive_handler, 0xc0, 0x40, true, 0x7c93ea532bf5481b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadDisconnectHandler", tcp_offload_disconnect_handler, 0x100, 0x40, true, 0x56d68c68227d250c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadForwardHandler", tcp_offload_forward_handler, 0x140, 0x40, true, 0x46613b7ce1844eaf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.TcpOffloadReceiveReturnHandler", tcp_offload_receive_return_handler, 0x180, 0x40, true, 0x44901f3d0a97d766)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif