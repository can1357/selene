#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COUNTED_REASON_CONTEXT.Version", version, 0x0, 0x20, true, 0xb2be74cc6431a154)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COUNTED_REASON_CONTEXT.Flags", flags, 0x20, 0x20, true, 0xe25e02b18eb4408d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_COUNTED_REASON_CONTEXT.ResourceFileName", resource_file_name, 0x40, 0x80, true, 0xa001807a13bf745e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_COUNTED_REASON_CONTEXT.ResourceReasonId", resource_reason_id, 0xc0, 0x10, true, 0xc9cecccafd536824)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COUNTED_REASON_CONTEXT.StringCount", string_count, 0xe0, 0x20, true, 0xc56841b0706cc64c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_COUNTED_REASON_CONTEXT.ReasonStrings", reason_strings, 0x100, 0x40, true, 0x670b80dc973f6058)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_COUNTED_REASON_CONTEXT.SimpleString", simple_string, 0x40, 0x80, true, 0x9f5aecb168c18fcb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif