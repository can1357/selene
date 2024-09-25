#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_SHARED_ENDPOINT_DISPATCH.NdkCloseSharedEndpoint", ndk_close_shared_endpoint, 0x0, 0x40, true, 0xdb9759856d46b92b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_SHARED_ENDPOINT_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0xb865983e9c18a3b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_shared_endpoint_t*, struct ndis::sockaddr_t*, uint32_t*)>*), "_NDK_SHARED_ENDPOINT_DISPATCH.NdkGetLocalAddress", ndk_get_local_address, 0x80, 0x40, true, 0x25c15475b7e27baa)
#else
#define _m00
#define _m01
#define _m02
#endif