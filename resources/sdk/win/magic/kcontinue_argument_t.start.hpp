#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kcontinue_type_t), "_KCONTINUE_ARGUMENT.ContinueType", continue_type, 0x0, 0x20, true, 0x27ef08bb003533ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCONTINUE_ARGUMENT.ContinueFlags", continue_flags, 0x20, 0x20, true, 0x2928e0440a1cbc76)
#else
#define _m00
#define _m01
#endif