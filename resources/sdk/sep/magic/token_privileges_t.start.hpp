#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEP_TOKEN_PRIVILEGES.Present", present, 0x0, 0x40, true, 0xc9655847fa14fb5a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEP_TOKEN_PRIVILEGES.Enabled", enabled, 0x40, 0x40, true, 0xfbe0b5b105663bf2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEP_TOKEN_PRIVILEGES.EnabledByDefault", enabled_by_default, 0x80, 0x40, true, 0x3bf2dc55c0e3b81a)
#else
#define _m00
#define _m01
#define _m02
#endif