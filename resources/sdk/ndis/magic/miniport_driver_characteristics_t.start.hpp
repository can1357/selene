#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x5558ddacc3e38e8e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.MajorNdisVersion", major_ndis_version, 0x20, 0x8, true, 0x5912335cb70af8e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.MinorNdisVersion", minor_ndis_version, 0x28, 0x8, true, 0x914acad7ee682eba)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.MajorDriverVersion", major_driver_version, 0x30, 0x8, true, 0x9e415e20587902c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.MinorDriverVersion", minor_driver_version, 0x38, 0x8, true, 0x20b635bf15da7c38)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.Flags", flags, 0x40, 0x20, true, 0xf3cb6fa0355f7ce8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.SetOptionsHandler", set_options_handler, 0x80, 0x40, true, 0xef204d38f5c0b27d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::miniport_init_parameters_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.InitializeHandlerEx", initialize_handler_ex, 0xc0, 0x40, true, 0xf98594fd14570900)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum ndis::halt_action_t)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.HaltHandlerEx", halt_handler_ex, 0x100, 0x40, true, 0xfd4d5c16ff0cdcdd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.UnloadHandler", unload_handler, 0x140, 0x40, true, 0x75c96f74be595efd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::miniport_pause_parameters_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.PauseHandler", pause_handler, 0x180, 0x40, true, 0x3161dbe9d4bd6a77)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::miniport_restart_parameters_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.RestartHandler", restart_handler, 0x1c0, 0x40, true, 0x326e8618ceff66f8)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.OidRequestHandler", oid_request_handler, 0x200, 0x40, true, 0x19715155718f7fc8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.SendNetBufferListsHandler", send_net_buffer_lists_handler, 0x240, 0x40, true, 0xf1811a5eeb7ddbe)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.ReturnNetBufferListsHandler", return_net_buffer_lists_handler, 0x280, 0x40, true, 0x632434ae325116ce)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.CancelSendHandler", cancel_send_handler, 0x2c0, 0x40, true, 0x2464de8276388eba)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.CheckForHangHandlerEx", check_for_hang_handler_ex, 0x300, 0x40, true, 0x93a859b13699765e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.ResetHandlerEx", reset_handler_ex, 0x340, 0x40, true, 0x305d7c7c1939543f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_device_pnp_event_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.DevicePnPEventNotifyHandler", device_pn_p_event_notify_handler, 0x380, 0x40, true, 0x5845b6ad6913486d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum ndis::shutdown_action_t)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.ShutdownHandlerEx", shutdown_handler_ex, 0x3c0, 0x40, true, 0x4616172bd6d5aa6)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.CancelOidRequestHandler", cancel_oid_request_handler, 0x400, 0x40, true, 0x2e81b9bd7f74d477)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.DirectOidRequestHandler", direct_oid_request_handler, 0x440, 0x40, true, 0x6739c9d78f133d30)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.CancelDirectOidRequestHandler", cancel_direct_oid_request_handler, 0x480, 0x40, true, 0x571053689d748c7e)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.SynchronousOidRequestHandler", synchronous_oid_request_handler, 0x4c0, 0x40, true, 0x93ea42645029c66c)
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
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif