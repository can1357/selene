#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_PD_DISPATCH.NdkClosePd", ndk_close_pd, 0x0, 0x40, true, 0x699d3c4e8ab8ddc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_PD_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0x92a9c49dcd413522)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_pd_t*, uint8_t, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_mr_t**)>*), "_NDK_PD_DISPATCH.NdkCreateMr", ndk_create_mr, 0x80, 0x40, true, 0x2ebc98ec1bf9e9b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_pd_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_mw_t**)>*), "_NDK_PD_DISPATCH.NdkCreateMw", ndk_create_mw, 0xc0, 0x40, true, 0x92d9f2b33bf4766e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_pd_t*, uint32_t, uint32_t, uint32_t, sdk::function<void(void*, int32_t)>*, void*, struct nt::group_affinity_t*, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_srq_t**)>*), "_NDK_PD_DISPATCH.NdkCreateSrq", ndk_create_srq, 0x100, 0x40, true, 0xfa4068547548fac6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_pd_t*, struct ndis::ndk_cq_t*, struct ndis::ndk_cq_t*, void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_qp_t**)>*), "_NDK_PD_DISPATCH.NdkCreateQp", ndk_create_qp, 0x140, 0x40, true, 0xda24074559f6de16)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_pd_t*, struct ndis::ndk_cq_t*, struct ndis::ndk_cq_t*, struct ndis::ndk_srq_t*, void*, uint32_t, uint32_t, uint32_t, sdk::function<void(void*, int32_t, struct ndis::ndk_object_header_t*)>*, void*, struct ndis::ndk_qp_t**)>*), "_NDK_PD_DISPATCH.NdkCreateQpWithSrq", ndk_create_qp_with_srq, 0x180, 0x40, true, 0x104d05dd92be9487)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ndk_pd_t*, uint32_t*)>*), "_NDK_PD_DISPATCH.NdkGetPrivilegedMemoryRegionToken", ndk_get_privileged_memory_region_token, 0x1c0, 0x40, true, 0x12df0c34bda2f528)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif