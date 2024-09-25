#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPCOLEMESSAGE.dataRepresentation", data_representation, 0x40, 0x20, true, 0x1aed91613571c3e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRPCOLEMESSAGE.Buffer", buffer, 0x80, 0x40, true, 0x1f916ecbbfa0e787)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPCOLEMESSAGE.cbBuffer", cb_buffer, 0xc0, 0x20, true, 0xa099b1fd77bf1a0b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPCOLEMESSAGE.iMethod", i_method, 0xe0, 0x20, true, 0x8490b2372ee86030)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPCOLEMESSAGE.rpcFlags", rpc_flags, 0x240, 0x20, true, 0xb5932ca0cb237387)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif