#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION_EX.VerifyMode", verify_mode, 0x0, 0x20, true, 0xdc54e2bc31bb7b4a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION_EX.OptionChanges", option_changes, 0x20, 0x20, true, 0x8c0cd5656b489c52)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_VERIFIER_INFORMATION_EX.PreviousBucketName", previous_bucket_name, 0x40, 0x80, true, 0x79597ff3c534a0b1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION_EX.IrpCancelTimeoutMsec", irp_cancel_timeout_msec, 0xc0, 0x20, true, 0xc57f507262fbe00c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION_EX.VerifierExtensionEnabled", verifier_extension_enabled, 0xe0, 0x20, true, 0xc590567013df73bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif