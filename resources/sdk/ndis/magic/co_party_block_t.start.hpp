#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_vc_ptr_block_t*), "_NDIS_CO_PARTY_BLOCK.VcPtr", vc_ptr, 0x0, 0x0, false, 0xe930631debf98150)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_PARTY_BLOCK.CallMgrContext", call_mgr_context, 0x0, 0x0, false, 0x893f662953b6e33d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_PARTY_BLOCK.ClientContext", client_context, 0x0, 0x0, false, 0xb172b9c1ce7e34d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, uint32_t)>*), "_NDIS_CO_PARTY_BLOCK.ClIncomingDropPartyHandler", cl_incoming_drop_party_handler, 0x0, 0x0, false, 0x4693aba6d7d5639b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CO_PARTY_BLOCK.ClDropPartyCompleteHandler", cl_drop_party_complete_handler, 0x0, 0x0, false, 0x670afd93e2104380)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif