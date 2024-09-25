#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x23f076b4a21cb22)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_usage_match_t), "_CERT_CHAIN_PARA.RequestedUsage", requested_usage, 0x40, 0xc0, true, 0xb4f4f4f8b694e947)
#else
#define _m00
#define _m01
#endif