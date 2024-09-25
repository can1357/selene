#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ERROR_RECOVERY_INFO_SECTION.RecoveryKernel", recovery_kernel, 0x0, 0x0, false, 0x420e6abbacabb60f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union whea::recovery_action_t), "_WHEA_ERROR_RECOVERY_INFO_SECTION.RecoveryAction", recovery_action, 0x0, 0x0, false, 0xb323afab8930d671)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum whea::recovery_type_t), "_WHEA_ERROR_RECOVERY_INFO_SECTION.RecoveryType", recovery_type, 0x0, 0x0, false, 0xed72ee312eb3bae1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ERROR_RECOVERY_INFO_SECTION.Irql", irql, 0x0, 0x0, false, 0x6acada8df8e029ed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ERROR_RECOVERY_INFO_SECTION.RecoverySucceeded", recovery_succeeded, 0x0, 0x0, false, 0x5d956fd1402597c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum whea::recovery_failure_reason_t), "_WHEA_ERROR_RECOVERY_INFO_SECTION.FailureReason", failure_reason, 0x0, 0x0, false, 0x7365a9ccd56b8229)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 20>), "_WHEA_ERROR_RECOVERY_INFO_SECTION.ProcessName", process_name, 0x0, 0x0, false, 0x1c2244292bd0a3b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif