#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_ENDPOINT_TEMPLATEA.Version", version, 0x0, 0x20, true, 0x3c803395b878b2d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "RPC_ENDPOINT_TEMPLATEA.ProtSeq", prot_seq, 0x40, 0x40, true, 0xc722cc8d24cf7e87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "RPC_ENDPOINT_TEMPLATEA.Endpoint", endpoint, 0x80, 0x40, true, 0x2a8cec88361b3829)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_ENDPOINT_TEMPLATEA.SecurityDescriptor", security_descriptor, 0xc0, 0x40, true, 0xea42e1d7eba359b4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_ENDPOINT_TEMPLATEA.Backlog", backlog, 0x100, 0x20, true, 0xb3073886c8cb39d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif