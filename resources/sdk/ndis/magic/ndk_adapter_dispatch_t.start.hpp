#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_ADAPTER_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x0, 0x40, true, 0x7dd0dce5314ee0d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_adapter_t*, struct ndis::ndk_adapter_info_t*, uint32_t*)>*), "_NDK_ADAPTER_DISPATCH.NdkQueryAdapterInfo", ndk_query_adapter_info, 0x40, 0x40, true, 0xc70b73b455300031)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_adapter_t*, uint32_t, sdk::function<void(void*, int32_t)>*, void*, struct nt::group_affinity_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_cq_t**)>*), "_NDK_ADAPTER_DISPATCH.NdkCreateCq", ndk_create_cq, 0x80, 0x40, true, 0xbaf0b6431cab87bc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_adapter_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_pd_t**)>*), "_NDK_ADAPTER_DISPATCH.NdkCreatePd", ndk_create_pd, 0xc0, 0x40, true, 0x3477bc5b6cb20ccf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_adapter_t*, struct ndis::sockaddr_t const*, uint32_t, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_shared_endpoint_t**)>*), "_NDK_ADAPTER_DISPATCH.NdkCreateSharedEndpoint", ndk_create_shared_endpoint, 0x100, 0x40, true, 0x42e20b7a819aeb1e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_adapter_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_connector_t**)>*), "_NDK_ADAPTER_DISPATCH.NdkCreateConnector", ndk_create_connector, 0x140, 0x40, true, 0x806b9dcbf3cda1ee)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_adapter_t*, sdk::function<void(void*, struct ndis::ndk_connector_t*)>*, void*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_listener_t**)>*), "_NDK_ADAPTER_DISPATCH.NdkCreateListener", ndk_create_listener, 0x180, 0x40, true, 0xd445853bb40cfef4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_adapter_t*, struct nt::mdl_t*, uint64_t, sdk::function<void(void*, int32_t)>*, void*, struct ndis::ndk_logical_address_mapping_t*, uint32_t*, uint32_t*)>*), "_NDK_ADAPTER_DISPATCH.NdkBuildLAM", ndk_build_lam, 0x1c0, 0x40, true, 0xd6b3688d02454b41)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ndk_adapter_t*, struct ndis::ndk_logical_address_mapping_t*)>*), "_NDK_ADAPTER_DISPATCH.NdkReleaseLAM", ndk_release_lam, 0x200, 0x40, true, 0xc3955c825a72d075)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif