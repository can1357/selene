#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_TEMPLATE_V1_W.Version", version, 0x0, 0x20, true, 0x423e427b4573f3ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_TEMPLATE_V1_W.Flags", flags, 0x20, 0x20, true, 0x5043ed6c56ec679e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_TEMPLATE_V1_W.ProtocolSequence", protocol_sequence, 0x40, 0x20, true, 0x4e1e4ac8c5385d2a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RPC_BINDING_HANDLE_TEMPLATE_V1_W.NetworkAddress", network_address, 0x80, 0x40, true, 0x3b5a10292fd95132)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RPC_BINDING_HANDLE_TEMPLATE_V1_W.StringEndpoint", string_endpoint, 0xc0, 0x40, true, 0x108214d1d298b1d7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RPC_BINDING_HANDLE_TEMPLATE_V1_W.ObjectUuid", object_uuid, 0x140, 0x80, true, 0xc136e884b26f0ed2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif