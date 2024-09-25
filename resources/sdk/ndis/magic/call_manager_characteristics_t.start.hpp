#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_CALL_MANAGER_CHARACTERISTICS.MajorVersion", major_version, 0x0, 0x8, true, 0xd4e204c01221c842)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_CALL_MANAGER_CHARACTERISTICS.MinorVersion", minor_version, 0x8, 0x8, true, 0x63ccd52d6ee2b041)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_CALL_MANAGER_CHARACTERISTICS.Filler", filler, 0x10, 0x10, true, 0xf64226051a55934e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmCreateVcHandler", cm_create_vc_handler, 0x40, 0x40, true, 0xeeb0c5b04749bf28)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmDeleteVcHandler", cm_delete_vc_handler, 0x80, 0x40, true, 0x2d7189daf7c89589)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_address_family_t*, void*, void**)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmOpenAfHandler", cm_open_af_handler, 0xc0, 0x40, true, 0x94727b2487817a5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmCloseAfHandler", cm_close_af_handler, 0x100, 0x40, true, 0x5e3134533bbfbedb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_sap_t*, void*, void**)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmRegisterSapHandler", cm_register_sap_handler, 0x140, 0x40, true, 0x75648f35b386dd68)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmDeregisterSapHandler", cm_deregister_sap_handler, 0x180, 0x40, true, 0x7220163d7ed5f4f8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*, void*, void**)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmMakeCallHandler", cm_make_call_handler, 0x1c0, 0x40, true, 0x2abe684bb571f321)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmCloseCallHandler", cm_close_call_handler, 0x200, 0x40, true, 0xb96c236fd4213e19)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmIncomingCallCompleteHandler", cm_incoming_call_complete_handler, 0x240, 0x40, true, 0x4baf1e8eb3d8a69c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*, void*, void**)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmAddPartyHandler", cm_add_party_handler, 0x280, 0x40, true, 0x9ef5ef7b62ec637b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmDropPartyHandler", cm_drop_party_handler, 0x2c0, 0x40, true, 0xa4f4518daaa7f5cf)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmActivateVcCompleteHandler", cm_activate_vc_complete_handler, 0x300, 0x40, true, 0x102d87f95a976d0b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmDeactivateVcCompleteHandler", cm_deactivate_vc_complete_handler, 0x340, 0x40, true, 0x58cb490a2382663e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmModifyCallQoSHandler", cm_modify_call_qo_s_handler, 0x380, 0x40, true, 0x9bdb25b724774677)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, struct ndis::request_t*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmRequestHandler", cm_request_handler, 0x3c0, 0x40, true, 0x205e65777a299013)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, void*, struct ndis::request_t*)>*), "_NDIS_CALL_MANAGER_CHARACTERISTICS.CmRequestCompleteHandler", cm_request_complete_handler, 0x400, 0x40, true, 0x27dbe2cc491e4c1a)
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