#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_LISTENER.Header", header, 0x0, 0x40, true, 0xbb920822b77cc4e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_listener_dispatch_t*), "_NDK_LISTENER.Dispatch", dispatch, 0x140, 0x40, true, 0xf259dec26387b273)
#else
#define _m00
#define _m01
#endif