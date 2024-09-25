#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_af_block_t*), "_NDIS_CO_AF_BLOCK.NextAf", next_af, 0x0, 0x40, true, 0x55a94fe11f51bea3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CO_AF_BLOCK.Flags", flags, 0x40, 0x20, true, 0xacc959c09fe4b351)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_CO_AF_BLOCK.References", references, 0x60, 0x20, true, 0x555b4eb461ad8bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_CO_AF_BLOCK.Miniport", miniport, 0x80, 0x40, true, 0xf9ec7b25b387445c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::call_manager_characteristics_t*), "_NDIS_CO_AF_BLOCK.CallMgrEntries", call_mgr_entries, 0xc0, 0x40, true, 0x8e5bf88e5a453047)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_call_manager_optional_handlers_t*), "_NDIS_CO_AF_BLOCK.CallMgrChars", call_mgr_chars, 0x100, 0x40, true, 0x426313120f2e3c98)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_CO_AF_BLOCK.CallMgrOpen", call_mgr_open, 0x140, 0x40, true, 0xefd5097ddbf54890)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_AF_BLOCK.CallMgrContext", call_mgr_context, 0x180, 0x40, true, 0xc79389b0da8689a0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::client_characteristics_t), "_NDIS_CO_AF_BLOCK.ClientEntries", client_entries, 0x1c0, 0xc0, true, 0x93d191d5cf2dfda5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_client_optional_handlers_t), "_NDIS_CO_AF_BLOCK.ClientChars", client_chars, 0x680, 0x0, true, 0x12d51bed10c177ac)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_CO_AF_BLOCK.ClientOpen", client_open, 0xb80, 0x40, true, 0xf2be916cbeb6c197)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_AF_BLOCK.ClientContext", client_context, 0xbc0, 0x40, true, 0x96f56baa22c74d9f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_CO_AF_BLOCK.Lock", lock, 0xc00, 0x40, true, 0x8583648d7c69f9ca)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CO_AF_BLOCK.CmMajorNdisVersion", cm_major_ndis_version, 0xc40, 0x20, true, 0x19a8a1b65cdcee7)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CO_AF_BLOCK.ClMajorNdisVersion", cl_major_ndis_version, 0xc60, 0x20, true, 0xe7e0d9fa0087141f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::request_t*), "_NDIS_CO_AF_BLOCK.Ndis5CmRequest", ndis5_cm_request, 0xc80, 0x40, true, 0xc8af0776542cd185)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::request_t), "_NDIS_CO_AF_BLOCK.Request", request, 0xcc0, 0x80, true, 0x4e3b3eb502e87727)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::request_t*), "_NDIS_CO_AF_BLOCK.CloseAfNdisRequest", close_af_ndis_request, 0x1240, 0x40, true, 0xef98734b3b3f4463)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_CO_AF_BLOCK.CloseAfRequested", close_af_requested, 0x1280, 0x8, true, 0xbeada646484ce891)
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