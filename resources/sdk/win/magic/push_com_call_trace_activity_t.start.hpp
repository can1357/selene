#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "PushComCallTraceActivity._guidSavedActivity", guid_saved_activity, 0x0, 0x0, false, 0x920ea0efe9dedf89)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "PushComCallTraceActivity._bSuccessfullySet", b_successfully_set, 0x0, 0x0, false, 0xb059ed60d1ef2976)
#else
#define _m00
#define _m01
#endif