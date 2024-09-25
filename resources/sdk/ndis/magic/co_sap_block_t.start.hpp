#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_SAP_BLOCK.CallMgrContext", call_mgr_context, 0x0, 0x0, false, 0x849ef64463a0875c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_SAP_BLOCK.ClientContext", client_context, 0x0, 0x0, false, 0xa9a88a9dcde4a8e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_af_block_t*), "_NDIS_CO_SAP_BLOCK.AfBlock", af_block, 0x0, 0x0, false, 0xd18f8743cd707550)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_sap_t*), "_NDIS_CO_SAP_BLOCK.Sap", sap, 0x0, 0x0, false, 0x5916d2698d317d24)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CO_SAP_BLOCK.Flags", flags, 0x0, 0x0, false, 0x7cf1e84f2bfb8a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_CO_SAP_BLOCK.References", references, 0x0, 0x0, false, 0xe90826d2a989472e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_CO_SAP_BLOCK.Lock", lock, 0x0, 0x0, false, 0xf03ec3c185af6404)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif