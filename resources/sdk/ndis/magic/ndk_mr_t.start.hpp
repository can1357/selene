#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_MR.Header", header, 0x0, 0x40, true, 0x838f992569cbd8ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_mr_dispatch_t*), "_NDK_MR.Dispatch", dispatch, 0x140, 0x40, true, 0xb65efff0ae3bf6bc)
#else
#define _m00
#define _m01
#endif