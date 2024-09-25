#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "PushComCallPassthroughTraceActivity._savedActivity", saved_activity, 0x0, 0x80, true, 0x7cc457bfb7459634)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "PushComCallPassthroughTraceActivity._successfullySet", successfully_set, 0x80, 0x8, true, 0x579aec85b871419c)
#else
#define _m00
#define _m01
#endif