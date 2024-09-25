#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.Header", header, 0x0, 0x20, true, 0xd7432e54ea98cfb9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClCreateVcHandler", cl_create_vc_handler, 0x40, 0x40, true, 0xda28ea35d1ab49fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClDeleteVcHandler", cl_delete_vc_handler, 0x80, 0x40, true, 0x7d2af0c613c4bec0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, struct ndis::oid_request_t*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClOidRequestHandler", cl_oid_request_handler, 0xc0, 0x40, true, 0xb146a822017dac2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClOidRequestCompleteHandler", cl_oid_request_complete_handler, 0x100, 0x40, true, 0xa896f0c92bf63c34)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int32_t)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClOpenAfCompleteHandlerEx", cl_open_af_complete_handler_ex, 0x140, 0x40, true, 0x8b22e3fbaa23d052)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClCloseAfCompleteHandler", cl_close_af_complete_handler, 0x180, 0x40, true, 0xbc33dc60e2fab853)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_sap_t*, void*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClRegisterSapCompleteHandler", cl_register_sap_complete_handler, 0x1c0, 0x40, true, 0xdc50379a65bb4702)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClDeregisterSapCompleteHandler", cl_deregister_sap_complete_handler, 0x200, 0x40, true, 0x385d0ecc73c0d40e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClMakeCallCompleteHandler", cl_make_call_complete_handler, 0x240, 0x40, true, 0x2218fd0cd193a4a2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClModifyCallQoSCompleteHandler", cl_modify_call_qo_s_complete_handler, 0x280, 0x40, true, 0x14300a0eba69aecb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClCloseCallCompleteHandler", cl_close_call_complete_handler, 0x2c0, 0x40, true, 0x6fc4f9bf78e7edbd)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClAddPartyCompleteHandler", cl_add_party_complete_handler, 0x300, 0x40, true, 0x1b60f5abe23d552c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClDropPartyCompleteHandler", cl_drop_party_complete_handler, 0x340, 0x40, true, 0xd89ea604bc5a4759)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClIncomingCallHandler", cl_incoming_call_handler, 0x380, 0x40, true, 0x1af2c5904521ea63)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClIncomingCallQoSChangeHandler", cl_incoming_call_qo_s_change_handler, 0x3c0, 0x40, true, 0x31aac9ad04108d33)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, uint32_t)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClIncomingCloseCallHandler", cl_incoming_close_call_handler, 0x400, 0x40, true, 0xa63cb61cff276fca)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, uint32_t)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClIncomingDropPartyHandler", cl_incoming_drop_party_handler, 0x440, 0x40, true, 0x92ec8b2865157667)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClCallConnectedHandler", cl_call_connected_handler, 0x480, 0x40, true, 0xcd6b5ef9ba6f1d9)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.ClNotifyCloseAfHandler", cl_notify_close_af_handler, 0x4c0, 0x40, true, 0x1ff6afebfb9fd357)
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
#endif