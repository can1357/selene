#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REASON_CONTEXT.Version", version, 0x0, 0x20, true, 0xd17ec1913249ecdc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REASON_CONTEXT.Flags", flags, 0x20, 0x20, true, 0x7e3056d68f8c9e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "_REASON_CONTEXT.Reason.Detailed.LocalizedReasonModule", localized_reason_module, 0x0, 0x40, true, 0xef9af6fab054560)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REASON_CONTEXT.Reason.Detailed.LocalizedReasonId", localized_reason_id, 0x40, 0x20, true, 0x4f439f6b6a44e1df)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REASON_CONTEXT.Reason.Detailed.ReasonStringCount", reason_string_count, 0x60, 0x20, true, 0x2388ca95e47d69d6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_REASON_CONTEXT.Reason.Detailed.ReasonStrings", reason_strings, 0x80, 0x40, true, 0xaff6eb16760356d4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_detailed_t), "_REASON_CONTEXT.Reason.Detailed", detailed, 0x0, 0xc0, true, 0x754997f20c24477e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_REASON_CONTEXT.Reason.SimpleReasonString", simple_reason_string, 0x0, 0x40, true, 0x83a92d220f369869)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_reason_t), "_REASON_CONTEXT.Reason", reason, 0x40, 0xc0, true, 0xb9cfad8d4a93cd1)
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