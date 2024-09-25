#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_TRIAGE_INFORMATION.ActionTaken", action_taken, 0x0, 0x20, true, 0x7a094e4522361756)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_SYSTEM_VERIFIER_TRIAGE_INFORMATION.CrashData", crash_data, 0x40, 0x40, true, 0xbade03ebcb1706cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_TRIAGE_INFORMATION.VerifierMode", verifier_mode, 0x180, 0x20, true, 0x3b496d97a20deb04)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_TRIAGE_INFORMATION.VerifierFlags", verifier_flags, 0x1a0, 0x20, true, 0xb9485df5044a417d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_SYSTEM_VERIFIER_TRIAGE_INFORMATION.VerifierTargets", verifier_targets, 0x1c0, 0x0, true, 0xffd34699b3139e3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif