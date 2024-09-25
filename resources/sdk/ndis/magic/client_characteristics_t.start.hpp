#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_CLIENT_CHARACTERISTICS.MajorVersion", major_version, 0x0, 0x8, true, 0x2492cb5822e9c8dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_CLIENT_CHARACTERISTICS.MinorVersion", minor_version, 0x8, 0x8, true, 0xd5e25ab14302457e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_CLIENT_CHARACTERISTICS.Filler", filler, 0x10, 0x10, true, 0xdffb2389deb966b3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClCreateVcHandler", cl_create_vc_handler, 0x40, 0x40, true, 0x5226d29e4bf22893)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClDeleteVcHandler", cl_delete_vc_handler, 0x80, 0x40, true, 0xf09b5b495e067fde)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, struct ndis::request_t*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClRequestHandler", cl_request_handler, 0xc0, 0x40, true, 0x3f9a80d187e30b09)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, void*, struct ndis::request_t*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClRequestCompleteHandler", cl_request_complete_handler, 0x100, 0x40, true, 0x8dfcbd1f3cd15b24)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClOpenAfCompleteHandler", cl_open_af_complete_handler, 0x140, 0x40, true, 0x2efe61037f7d8d2f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClCloseAfCompleteHandler", cl_close_af_complete_handler, 0x180, 0x40, true, 0x484342264470b08)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_sap_t*, void*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClRegisterSapCompleteHandler", cl_register_sap_complete_handler, 0x1c0, 0x40, true, 0xadd5874f8129bf01)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClDeregisterSapCompleteHandler", cl_deregister_sap_complete_handler, 0x200, 0x40, true, 0xe780e4931264879d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClMakeCallCompleteHandler", cl_make_call_complete_handler, 0x240, 0x40, true, 0x63ddde1f8e9d5136)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClModifyCallQoSCompleteHandler", cl_modify_call_qo_s_complete_handler, 0x280, 0x40, true, 0xa677bf4d2378fade)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClCloseCallCompleteHandler", cl_close_call_complete_handler, 0x2c0, 0x40, true, 0x373abc8080f42ce1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClAddPartyCompleteHandler", cl_add_party_complete_handler, 0x300, 0x40, true, 0xb0534c0df96c7996)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClDropPartyCompleteHandler", cl_drop_party_complete_handler, 0x340, 0x40, true, 0xa0e42f2bc707fec2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClIncomingCallHandler", cl_incoming_call_handler, 0x380, 0x40, true, 0x46504e0303f44c8b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClIncomingCallQoSChangeHandler", cl_incoming_call_qo_s_change_handler, 0x3c0, 0x40, true, 0x23428cc0835bb696)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, uint32_t)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClIncomingCloseCallHandler", cl_incoming_close_call_handler, 0x400, 0x40, true, 0x5e7aff7e5a839b90)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, uint32_t)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClIncomingDropPartyHandler", cl_incoming_drop_party_handler, 0x440, 0x40, true, 0x83e28acd16a7babc)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_CLIENT_CHARACTERISTICS.ClCallConnectedHandler", cl_call_connected_handler, 0x480, 0x40, true, 0x8bf27658fbf77ab5)
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
#endif