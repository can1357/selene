#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RXACT_CONTEXT.RootRegistryKey", root_registry_key, 0x0, 0x40, true, 0xfa6864a895142a5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RXACT_CONTEXT.RXactKey", r_xact_key, 0x40, 0x40, true, 0x1235787e96d2fb60)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_RXACT_CONTEXT.HandlesValid", handles_valid, 0x80, 0x8, true, 0x5a902d771cd85c34)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rxact_log_t*), "_RTL_RXACT_CONTEXT.RXactLog", r_xact_log, 0xc0, 0x40, true, 0x6e737db9d9d54b1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif