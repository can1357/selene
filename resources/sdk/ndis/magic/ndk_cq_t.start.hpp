#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_CQ.Header", header, 0x0, 0x40, true, 0x58054341cdc89f19)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_cq_dispatch_t*), "_NDK_CQ.Dispatch", dispatch, 0x140, 0x40, true, 0x5821e0008492addf)
#else
#define _m00
#define _m01
#endif