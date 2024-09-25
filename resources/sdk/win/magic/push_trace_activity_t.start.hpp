#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "PushTraceActivity._savedActivity", saved_activity, 0x0, 0x80, true, 0xf8efb4f5b821aee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "PushTraceActivity._successfullySet", successfully_set, 0x80, 0x8, true, 0x413e7eff88757404)
#else
#define _m00
#define _m01
#endif