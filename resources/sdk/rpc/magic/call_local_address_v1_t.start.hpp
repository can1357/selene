#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_CALL_LOCAL_ADDRESS_V1.Version", version, 0x0, 0x20, true, 0x71f3c3c70fa8e435)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_CALL_LOCAL_ADDRESS_V1.Buffer", buffer, 0x40, 0x40, true, 0xc168166584bee4e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_CALL_LOCAL_ADDRESS_V1.BufferSize", buffer_size, 0x80, 0x20, true, 0x64f8cb805a802287)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::rpc_local_address_format_t), "_RPC_CALL_LOCAL_ADDRESS_V1.AddressFormat", address_format, 0xa0, 0x20, true, 0x3d54a89db4f3da1b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif