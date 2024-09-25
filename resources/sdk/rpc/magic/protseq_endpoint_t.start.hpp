#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RPC_PROTSEQ_ENDPOINT.RpcProtocolSequence", rpc_protocol_sequence, 0x0, 0x40, true, 0xced8bed6dbb9628e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RPC_PROTSEQ_ENDPOINT.Endpoint", endpoint, 0x40, 0x40, true, 0x66ebba44aa29fd86)
#else
#define _m00
#define _m01
#endif