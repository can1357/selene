#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_CO_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0xbdac49f4875fb3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CO_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0x25ecaca0289e9254)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS_MINIPORT_CO_CHARACTERISTICS.CoCreateVcHandler", co_create_vc_handler, 0x40, 0x40, true, 0x20b7c995862b9304)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_MINIPORT_CO_CHARACTERISTICS.CoDeleteVcHandler", co_delete_vc_handler, 0x80, 0x40, true, 0x1e6d8b3892d5bf03)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_MINIPORT_CO_CHARACTERISTICS.CoActivateVcHandler", co_activate_vc_handler, 0xc0, 0x40, true, 0x56f226c304fbad4c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_MINIPORT_CO_CHARACTERISTICS.CoDeactivateVcHandler", co_deactivate_vc_handler, 0x100, 0x40, true, 0x3a67eb2471e07758)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_MINIPORT_CO_CHARACTERISTICS.CoSendNetBufferListsHandler", co_send_net_buffer_lists_handler, 0x140, 0x40, true, 0x5c4abb2ffe40afaa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::oid_request_t*)>*), "_NDIS_MINIPORT_CO_CHARACTERISTICS.CoOidRequestHandler", co_oid_request_handler, 0x180, 0x40, true, 0xb2a6a0b1a5efced7)
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