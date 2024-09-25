#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_details_RecordUsageResult.queueBackground", queue_background, 0x0, 0x20, true, 0x5be61c6924b89652)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_RecordUsageResult.countImmediate", count_immediate, 0x20, 0x20, true, 0x749fd4e8d07a2338)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::details_service_reporting_kind_t), "wil_details_RecordUsageResult.kindImmediate", kind_immediate, 0x40, 0x20, true, 0x246a52de22d4468d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_RecordUsageResult.payloadId", payload_id, 0x60, 0x20, true, 0x93d7bbd4a6d60e23)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_details_RecordUsageResult.ignoredUse", ignored_use, 0x80, 0x20, true, 0xbdaea355cf2076c0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_details_RecordUsageResult.isVariantConfiguration", is_variant_configuration, 0xa0, 0x20, true, 0xb05d57c7770ed467)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_details_RecordUsageResult.isWexpConfiguration", is_wexp_configuration, 0x0, 0x0, false, 0x2a760dc2becc520e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif