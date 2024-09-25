#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KHETERO_HWFEEDBACK_CLASS.PerformanceClass", performance_class, 0x0, 0x0, false, 0xa1a43d0f40245640)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KHETERO_HWFEEDBACK_CLASS.EfficiencyClass", efficiency_class, 0x0, 0x0, false, 0xf0ecf9a84bb016b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KHETERO_HWFEEDBACK_CLASS.PerformanceClassRawValue", performance_class_raw_value, 0x0, 0x0, false, 0xb82da780185c78bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KHETERO_HWFEEDBACK_CLASS.EfficiencyClassRawValue", efficiency_class_raw_value, 0x0, 0x0, false, 0xb3e5aa3db48b6be9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif