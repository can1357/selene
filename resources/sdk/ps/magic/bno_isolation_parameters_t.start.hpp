#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PS_BNO_ISOLATION_PARAMETERS.IsolationPrefix", isolation_prefix, 0x0, 0x80, true, 0xdafb14d9d2e76ef4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_BNO_ISOLATION_PARAMETERS.HandleCount", handle_count, 0x80, 0x20, true, 0xedf230ed2a656672)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_PS_BNO_ISOLATION_PARAMETERS.Handles", handles, 0xc0, 0x40, true, 0x9f511485824c6c3b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PS_BNO_ISOLATION_PARAMETERS.IsolationEnabled", isolation_enabled, 0x100, 0x8, true, 0xb02c44fe562aa9c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif