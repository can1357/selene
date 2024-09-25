#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::details_service_reporting_kind_t), "Change.kind", kind, 0x0, 0x0, false, 0x92565663731ccb09)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Change.count", count, 0x0, 0x0, false, 0x96f7baf04f5af3df)
#else
#define _m00
#define _m01
#endif