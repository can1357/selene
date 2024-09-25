#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_SRQ_DISPATCH.NdkCloseSrq", ndk_close_srq, 0x0, 0x40, true, 0x43f6fabf08083ff7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_SRQ_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0x2f44beb81551a17c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_srq_t*, uint32_t, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_SRQ_DISPATCH.NdkModifySrq", ndk_modify_srq, 0x80, 0x40, true, 0xd251fe9d7767fd49)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_srq_t*, void*, const struct ndis::ndk_sge_t*, uint32_t)>*), "_NDK_SRQ_DISPATCH.NdkSrqReceive", ndk_srq_receive, 0xc0, 0x40, true, 0x6f585781437c3372)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif