#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_AUDIT_CALLBACK_ACE.Header", header, 0x0, 0x20, true, 0x348b93ffcd4e8982)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_CALLBACK_ACE.Mask", mask, 0x20, 0x20, true, 0x5da4e40703435a72)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_CALLBACK_ACE.SidStart", sid_start, 0x40, 0x20, true, 0x7474268cc2da3e74)
#else
#define _m00
#define _m01
#define _m02
#endif