#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_TEMPLATE_V1_A.Version", version, 0x0, 0x20, true, 0x8cb3887d36c687f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_TEMPLATE_V1_A.Flags", flags, 0x20, 0x20, true, 0xf1045e27b98d4b49)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_TEMPLATE_V1_A.ProtocolSequence", protocol_sequence, 0x40, 0x20, true, 0x4bb5a6b19795ef6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RPC_BINDING_HANDLE_TEMPLATE_V1_A.NetworkAddress", network_address, 0x80, 0x40, true, 0xec64c1d782f4830a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RPC_BINDING_HANDLE_TEMPLATE_V1_A.StringEndpoint", string_endpoint, 0xc0, 0x40, true, 0xf5607220a9eee888)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RPC_BINDING_HANDLE_TEMPLATE_V1_A.ObjectUuid", object_uuid, 0x140, 0x80, true, 0xff48dbaf6840de2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif