#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::coverage_request_codes_t), "_COVERAGE_MODULE_REQUEST.RequestType", request_type, 0x0, 0x20, true, 0x4f1aba9207cda582)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_COVERAGE_MODULE_REQUEST.SearchInfo.MD5Hash", md5_hash, 0x0, 0x80, true, 0x9d08a030190fb330)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_COVERAGE_MODULE_REQUEST.SearchInfo.ModuleName", module_name, 0x0, 0x80, true, 0x3fed5c1fa7eb6d4b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_search_info_t), "_COVERAGE_MODULE_REQUEST.SearchInfo", search_info, 0x40, 0x80, true, 0x4905f7b54c1af43c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif