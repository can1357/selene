#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KHETRO_HWFEEDBACK_TYPE.Count", count, 0x0, 0x0, false, 0xe8dd9e80d139fb3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::khetero_hwfeedback_class_t, 1>), "_KHETRO_HWFEEDBACK_TYPE.HwFeedbackClass", hw_feedback_class, 0x0, 0x0, false, 0x7a62a21e1efaa6e7)
#else
#define _m00
#define _m01
#endif