#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.Header", header, 0x0, 0x20, true, 0xf76b39c19ca8c0b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmCreateVcHandler", cm_create_vc_handler, 0x40, 0x40, true, 0x2b8acbd9c6bc44a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmDeleteVcHandler", cm_delete_vc_handler, 0x80, 0x40, true, 0x2bf2e1bf06fae8e0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_address_family_t*, void*, void**)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmOpenAfHandler", cm_open_af_handler, 0xc0, 0x40, true, 0x3d71834237c3ffa6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmCloseAfHandler", cm_close_af_handler, 0x100, 0x40, true, 0x20a1516cfbb4c66b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_sap_t*, void*, void**)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmRegisterSapHandler", cm_register_sap_handler, 0x140, 0x40, true, 0xe6401c7d84c8e5c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmDeregisterSapHandler", cm_deregister_sap_handler, 0x180, 0x40, true, 0x5a15e306771500c4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*, void*, void**)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmMakeCallHandler", cm_make_call_handler, 0x1c0, 0x40, true, 0x19250a60d24017e1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmCloseCallHandler", cm_close_call_handler, 0x200, 0x40, true, 0x17e87eb2147c6303)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmIncomingCallCompleteHandler", cm_incoming_call_complete_handler, 0x240, 0x40, true, 0xbe4db79b8d8a5000)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*, void*, void**)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmAddPartyHandler", cm_add_party_handler, 0x280, 0x40, true, 0x716ed4117d7e6ac5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmDropPartyHandler", cm_drop_party_handler, 0x2c0, 0x40, true, 0x8144fd02b10106a9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmActivateVcCompleteHandler", cm_activate_vc_complete_handler, 0x300, 0x40, true, 0x27a18a9cbf947f0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmDeactivateVcCompleteHandler", cm_deactivate_vc_complete_handler, 0x340, 0x40, true, 0xfe098e6136ff8efb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmModifyCallQoSHandler", cm_modify_call_qo_s_handler, 0x380, 0x40, true, 0x5dcc0a52974be96c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, struct ndis::oid_request_t*)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmOidRequestHandler", cm_oid_request_handler, 0x3c0, 0x40, true, 0xc77afd7fc6aefac3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmOidRequestCompleteHandler", cm_oid_request_complete_handler, 0x400, 0x40, true, 0xc9d9409bcfdd6b7d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS.CmNotifyCloseAfCompleteHandler", cm_notify_close_af_complete_handler, 0x440, 0x40, true, 0xb0d637ed4283acae)
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
#endif