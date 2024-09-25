#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_ENDPOINT_TEMPLATEW.Version", version, 0x0, 0x20, true, 0x3608b3047d6777da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "RPC_ENDPOINT_TEMPLATEW.ProtSeq", prot_seq, 0x40, 0x40, true, 0xd2069f405e811ba6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "RPC_ENDPOINT_TEMPLATEW.Endpoint", endpoint, 0x80, 0x40, true, 0x7b3c3cc8682f2393)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_ENDPOINT_TEMPLATEW.SecurityDescriptor", security_descriptor, 0xc0, 0x40, true, 0xba226afb222092be)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_ENDPOINT_TEMPLATEW.Backlog", backlog, 0x100, 0x20, true, 0x36ca1dad22409daa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif