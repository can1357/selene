#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_CQ_DISPATCH.NdkCloseCq", ndk_close_cq, 0x0, 0x40, true, 0x6434b95fbc5de0ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_CQ_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0x716cac6c822a1ef8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_cq_t*, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_CQ_DISPATCH.NdkResizeCq", ndk_resize_cq, 0x80, 0x40, true, 0x58d388aeb19275ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ndk_cq_t*, uint32_t)>*), "_NDK_CQ_DISPATCH.NdkArmCq", ndk_arm_cq, 0xc0, 0x40, true, 0x29a1ae9b58ea05b6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct ndis::ndk_cq_t*, struct ndis::ndk_result_t*, uint32_t)>*), "_NDK_CQ_DISPATCH.NdkGetCqResults", ndk_get_cq_results, 0x100, 0x40, true, 0x9d87bdad7e95b194)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_cq_t*, uint32_t, uint32_t)>*), "_NDK_CQ_DISPATCH.NdkControlCqInterruptModeration", ndk_control_cq_interrupt_moderation, 0x140, 0x40, true, 0x63541bf94cf9b93)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct ndis::ndk_cq_t*, struct ndis::ndk_result_ex_t*, uint32_t)>*), "_NDK_CQ_DISPATCH.NdkGetCqResultsEx", ndk_get_cq_results_ex, 0x180, 0x40, true, 0xefe859fa7bcede23)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif