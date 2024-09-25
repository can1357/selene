#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_SYSTEM_DIF_VOLATILE_INFORMATION.RuleClasses", rule_classes, 0x0, 0x0, false, 0x96c019771877e6f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DIF_VOLATILE_INFORMATION.VerifierOption", verifier_option, 0x0, 0x0, false, 0x19b73c680d9d7f59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DIF_VOLATILE_INFORMATION.TriageContext", triage_context, 0x0, 0x0, false, 0x343cc4adb3b20c9a)
#else
#define _m00
#define _m01
#define _m02
#endif