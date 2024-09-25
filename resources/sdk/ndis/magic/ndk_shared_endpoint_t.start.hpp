#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_SHARED_ENDPOINT.Header", header, 0x0, 0x40, true, 0x61de836f89aed513)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_shared_endpoint_dispatch_t*), "_NDK_SHARED_ENDPOINT.Dispatch", dispatch, 0x140, 0x40, true, 0x543050d3494c41fd)
#else
#define _m00
#define _m01
#endif