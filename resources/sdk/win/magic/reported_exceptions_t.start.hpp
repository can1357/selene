#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ReportedExceptions.dwExceptionCode", dw_exception_code, 0x0, 0x20, true, 0xb5fa31d7f7fb425c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ReportedExceptions.dwReportCount", dw_report_count, 0x20, 0x20, true, 0x678932cc1e63fe9c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ReportedExceptions.dwMaxCount", dw_max_count, 0x40, 0x20, true, 0x4f70844139aa88bc)
#else
#define _m00
#define _m01
#define _m02
#endif