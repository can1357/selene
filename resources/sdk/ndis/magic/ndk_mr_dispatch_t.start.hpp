#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_MR_DISPATCH.NdkCloseMr", ndk_close_mr, 0x0, 0x40, true, 0xcccb78082aab1d7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_MR_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0x34fbbcc5dfb89cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_mr_t*, struct nt::mdl_t*, uint64_t, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_MR_DISPATCH.NdkRegisterMr", ndk_register_mr, 0x80, 0x40, true, 0xcc764d3f4c08e819)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_mr_t*, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_MR_DISPATCH.NdkDeregisterMr", ndk_deregister_mr, 0xc0, 0x40, true, 0x261e13d36ef09124)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_mr_t*, uint32_t, uint8_t, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_MR_DISPATCH.NdkInitializeFastRegisterMr", ndk_initialize_fast_register_mr, 0x100, 0x40, true, 0x377e22d1a7cd6c8b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct ndis::ndk_mr_t*)>*), "_NDK_MR_DISPATCH.NdkGetRemoteTokenFromMr", ndk_get_remote_token_from_mr, 0x140, 0x40, true, 0x54001ff4bbe4d175)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct ndis::ndk_mr_t*)>*), "_NDK_MR_DISPATCH.NdkGetLocalTokenFromMr", ndk_get_local_token_from_mr, 0x180, 0x40, true, 0x540c96599b3d6df0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif