#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_MW.Header", header, 0x0, 0x40, true, 0xfdf905a5a1ece1fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_mw_dispatch_t*), "_NDK_MW.Dispatch", dispatch, 0x140, 0x40, true, 0xdf6dee19a8e28c03)
#else
#define _m00
#define _m01
#endif