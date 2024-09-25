#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0xf4f35864379b3d54)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.MajorNdisVersion", major_ndis_version, 0x20, 0x8, true, 0x36a59f71db5a486a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.MinorNdisVersion", minor_ndis_version, 0x28, 0x8, true, 0xbb7ce390a583b442)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.MajorDriverVersion", major_driver_version, 0x30, 0x8, true, 0x271ad915c8daf6ac)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.MinorDriverVersion", minor_driver_version, 0x38, 0x8, true, 0xc6d061cb5f49fa5f)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.Flags", flags, 0x40, 0x20, true, 0xb818249e15fa2bce)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.FriendlyName", friendly_name, 0x80, 0x80, true, 0x110a051c3dac016)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.UniqueName", unique_name, 0x100, 0x80, true, 0xc69271d25cfcacfc)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.ServiceName", service_name, 0x180, 0x80, true, 0xf6d3dda3d3dc7f3b)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.SetOptionsHandler", set_options_handler, 0x200, 0x40, true, 0x5cf2bd3f831e124f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.SetFilterModuleOptionsHandler", set_filter_module_options_handler, 0x240, 0x40, true, 0xd3e5d69164ca691)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::filter_attach_parameters_t*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.AttachHandler", attach_handler, 0x280, 0x40, true, 0x6e5ee4889d4c4a5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.DetachHandler", detach_handler, 0x2c0, 0x40, true, 0x210b048a2f42b94f)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::filter_restart_parameters_t*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.RestartHandler", restart_handler, 0x300, 0x40, true, 0x6e790819290305dc)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::filter_pause_parameters_t*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.PauseHandler", pause_handler, 0x340, 0x40, true, 0x14e21db3887d2434)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.SendNetBufferListsHandler", send_net_buffer_lists_handler, 0x380, 0x40, true, 0xf1d21f1267568092)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.SendNetBufferListsCompleteHandler", send_net_buffer_lists_complete_handler, 0x3c0, 0x40, true, 0xa2d865f124ddc9ec)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.CancelSendNetBufferListsHandler", cancel_send_net_buffer_lists_handler, 0x400, 0x40, true, 0xd92094f34d97e213)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.ReceiveNetBufferListsHandler", receive_net_buffer_lists_handler, 0x440, 0x40, true, 0x1b7d193f90d73521)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.ReturnNetBufferListsHandler", return_net_buffer_lists_handler, 0x480, 0x40, true, 0x82739931d9eb65ea)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.OidRequestHandler", oid_request_handler, 0x4c0, 0x40, true, 0x471df83374c31c5a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.OidRequestCompleteHandler", oid_request_complete_handler, 0x500, 0x40, true, 0x91547d30153722e)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.CancelOidRequestHandler", cancel_oid_request_handler, 0x540, 0x40, true, 0x6d78a305e5275bbf)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_device_pnp_event_t*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.DevicePnPEventNotifyHandler", device_pn_p_event_notify_handler, 0x580, 0x40, true, 0x87ae90b4acafd269)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_pnp_event_notification_t*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.NetPnPEventHandler", net_pn_p_event_handler, 0x5c0, 0x40, true, 0x5fa390db8304323f)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::status_indication_t*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.StatusHandler", status_handler, 0x600, 0x40, true, 0xab89dd9b3dca49bc)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.DirectOidRequestHandler", direct_oid_request_handler, 0x640, 0x40, true, 0x4fcbba466edfd81f)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.DirectOidRequestCompleteHandler", direct_oid_request_complete_handler, 0x680, 0x40, true, 0x5022a92f3b819ad0)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.CancelDirectOidRequestHandler", cancel_direct_oid_request_handler, 0x6c0, 0x40, true, 0x6f8ff5229e8c4c4f)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*, void**)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.SynchronousOidRequestHandler", synchronous_oid_request_handler, 0x700, 0x40, true, 0xe4fc577274ce2d0a)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t*, void*)>*), "_NDIS_FILTER_DRIVER_CHARACTERISTICS.SynchronousOidRequestCompleteHandler", synchronous_oid_request_complete_handler, 0x740, 0x40, true, 0xaa76c1ef7b33a8a2)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#endif