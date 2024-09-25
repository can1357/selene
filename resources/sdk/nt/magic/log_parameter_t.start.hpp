#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::log_parameter_header_t), "_LOG_PARAMETER.Header", header, 0x0, 0x20, true, 0x353f98100de651f4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_LOG_PARAMETER.AsByte", as_byte, 0x20, 0x0, true, 0x30edf3d4019499a5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::threshold_resource_count_t), "_LOG_PARAMETER.THRESHOLD_RESOURCE_COUNT", threshold_resource_count, 0x20, 0x40, true, 0x907e8d8f4b4c1038)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::temperature_t), "_LOG_PARAMETER.TEMPERATURE", temperature, 0x20, 0x10, true, 0x7c6bba26a22723fa)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::date_of_manufacture_t), "_LOG_PARAMETER.DATE_OF_MANUFACTURE", date_of_manufacture, 0x20, 0x30, true, 0xe4dd03e31c5097a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::self_test_results_t), "_LOG_PARAMETER.SELF_TEST_RESULTS", self_test_results, 0x20, 0x80, true, 0x6cc33aa75647c4ae)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::solid_state_media_t), "_LOG_PARAMETER.SOLID_STATE_MEDIA", solid_state_media, 0x20, 0x20, true, 0xd324f0d31dcf475a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::background_scan_status_t), "_LOG_PARAMETER.BACKGROUND_SCAN_STATUS", background_scan_status, 0x20, 0x60, true, 0x9902a71f47c57f08)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::informational_exceptions_t), "_LOG_PARAMETER.INFORMATIONAL_EXCEPTIONS", informational_exceptions, 0x20, 0x20, true, 0x7077d0f4f1088f52)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif