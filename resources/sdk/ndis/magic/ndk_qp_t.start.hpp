#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_QP.Header", header, 0x0, 0x40, true, 0xd830c562fcbc7e84)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_qp_dispatch_t*), "_NDK_QP.Dispatch", dispatch, 0x140, 0x40, true, 0xae77c83891854b3c)
#else
#define _m00
#define _m01
#endif