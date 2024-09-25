#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_CONNECTOR.Header", header, 0x0, 0x40, true, 0xe6738f1c6d24ccd2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_connector_dispatch_t*), "_NDK_CONNECTOR.Dispatch", dispatch, 0x140, 0x40, true, 0xe91cc5ee73a3e210)
#else
#define _m00
#define _m01
#endif