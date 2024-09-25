#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_AHC_SERVICE_HWID_QUERY.QueryResult", query_result, 0x0, 0x8, true, 0xa4613bb144617e42)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_HWID_QUERY.HwId", hw_id, 0x40, 0x80, true, 0xf1851a2042d45916)
#else
#define _m00
#define _m01
#endif