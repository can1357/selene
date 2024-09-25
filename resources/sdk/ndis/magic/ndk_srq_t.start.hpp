#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_SRQ.Header", header, 0x0, 0x40, true, 0x7407bbf4c5d7ed91)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_srq_dispatch_t*), "_NDK_SRQ.Dispatch", dispatch, 0x140, 0x40, true, 0xfd91db884cda35e2)
#else
#define _m00
#define _m01
#endif