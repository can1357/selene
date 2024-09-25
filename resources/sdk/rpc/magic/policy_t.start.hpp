#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_POLICY.Length", length, 0x0, 0x20, true, 0xcd699a788323c353)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_POLICY.EndpointFlags", endpoint_flags, 0x20, 0x20, true, 0xea286283a34b7dcd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_POLICY.NICFlags", nic_flags, 0x40, 0x20, true, 0x496c14e3b0ae47f7)
#else
#define _m00
#define _m01
#define _m02
#endif