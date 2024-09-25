#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0xd950874b478723e5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.MajorNdisVersion", major_ndis_version, 0x20, 0x8, true, 0x12a50a05af8f9cac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.MinorNdisVersion", minor_ndis_version, 0x28, 0x8, true, 0x4fc62def8b3d6acf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.MajorDriverVersion", major_driver_version, 0x30, 0x8, true, 0xa0dd8a0d916e2e24)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.MinorDriverVersion", minor_driver_version, 0x38, 0x8, true, 0x8ca1b10fc80b6bae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.Flags", flags, 0x40, 0x20, true, 0xfe2531f99e7eaf0b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.Name", name, 0x80, 0x80, true, 0xdec9d2268b85eb69)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.SetOptionsHandler", set_options_handler, 0x100, 0x40, true, 0x168595865bffaad8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::bind_parameters_t*)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.BindAdapterHandlerEx", bind_adapter_handler_ex, 0x140, 0x40, true, 0x62003be670575a18)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.UnbindAdapterHandlerEx", unbind_adapter_handler_ex, 0x180, 0x40, true, 0xb136fafa593ba7e7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.OpenAdapterCompleteHandlerEx", open_adapter_complete_handler_ex, 0x1c0, 0x40, true, 0x8dea88290a4336c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.CloseAdapterCompleteHandlerEx", close_adapter_complete_handler_ex, 0x200, 0x40, true, 0x227a18f06df7c26e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_pnp_event_notification_t*)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.NetPnPEventHandler", net_pn_p_event_handler, 0x240, 0x40, true, 0x9c930d51dfef64a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.UninstallHandler", uninstall_handler, 0x280, 0x40, true, 0xc0dc3f5249cb760f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.OidRequestCompleteHandler", oid_request_complete_handler, 0x2c0, 0x40, true, 0x11e9636079a03571)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::status_indication_t*)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.StatusHandlerEx", status_handler_ex, 0x300, 0x40, true, 0x4b40ef706e988a6a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.ReceiveNetBufferListsHandler", receive_net_buffer_lists_handler, 0x340, 0x40, true, 0x67c381c3f6a5f610)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.SendNetBufferListsCompleteHandler", send_net_buffer_lists_complete_handler, 0x380, 0x40, true, 0xc14e61dbc598bf80)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.DirectOidRequestCompleteHandler", direct_oid_request_complete_handler, 0x3c0, 0x40, true, 0xd6bb951514f2cee8)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif