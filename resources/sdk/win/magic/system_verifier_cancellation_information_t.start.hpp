#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_CANCELLATION_INFORMATION.CancelProbability", cancel_probability, 0x0, 0x20, true, 0xf058fd568ee89786)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_CANCELLATION_INFORMATION.CancelThreshold", cancel_threshold, 0x20, 0x20, true, 0x374ccc6d00383926)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_CANCELLATION_INFORMATION.CompletionThreshold", completion_threshold, 0x40, 0x20, true, 0x960f3f81caefe33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_CANCELLATION_INFORMATION.CancellationVerifierDisabled", cancellation_verifier_disabled, 0x60, 0x20, true, 0x2d291774e4b38a18)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_CANCELLATION_INFORMATION.AvailableIssues", available_issues, 0x80, 0x20, true, 0x25e61152c6b53ddc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_verifier_issue_t, 128>), "_SYSTEM_VERIFIER_CANCELLATION_INFORMATION.Issues", issues, 0xc0, 0x0, true, 0x871cce39b0034e36)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif