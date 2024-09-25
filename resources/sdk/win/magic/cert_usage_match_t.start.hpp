#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_USAGE_MATCH.dwType", dw_type, 0x0, 0x20, true, 0xbf8e5991bda2b636)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_usage_t), "_CERT_USAGE_MATCH.Usage", usage, 0x40, 0x80, true, 0x8bbbd8dc1cc78171)
#else
#define _m00
#define _m01
#endif