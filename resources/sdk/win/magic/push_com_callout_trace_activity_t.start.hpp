#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "PushComCalloutTraceActivity._guidSavedActivity", guid_saved_activity, 0x0, 0x0, false, 0x3bde3d0f3fb7c65f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "PushComCalloutTraceActivity._bSuccessfullySet", b_successfully_set, 0x0, 0x0, false, 0xa3818bf037a2b719)
#else
#define _m00
#define _m01
#endif