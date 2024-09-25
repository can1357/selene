#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_PD.Header", header, 0x0, 0x40, true, 0x7b881fbefd7a7a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_pd_dispatch_t*), "_NDK_PD.Dispatch", dispatch, 0x140, 0x40, true, 0x26bcefdb2b528c9)
#else
#define _m00
#define _m01
#endif