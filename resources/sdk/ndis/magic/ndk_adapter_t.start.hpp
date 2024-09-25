#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_object_header_t), "_NDK_ADAPTER.Header", header, 0x0, 0x40, true, 0xce1a57f12c33711)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ndk_adapter_dispatch_t*), "_NDK_ADAPTER.Dispatch", dispatch, 0x140, 0x40, true, 0xe26f13117d2b482c)
#else
#define _m00
#define _m01
#endif