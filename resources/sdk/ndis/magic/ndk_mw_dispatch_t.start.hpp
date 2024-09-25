#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_MW_DISPATCH.NdkCloseMw", ndk_close_mw, 0x0, 0x40, true, 0x20507a463b9918ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_MW_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0xdd764e5669d3a31f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct ndis::ndk_mw_t*)>*), "_NDK_MW_DISPATCH.NdkGetRemoteTokenFromMw", ndk_get_remote_token_from_mw, 0x80, 0x40, true, 0x11b84adf8bd57928)
#else
#define _m00
#define _m01
#define _m02
#endif