#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_QP_DISPATCH.NdkCloseQp", ndk_close_qp, 0x0, 0x40, true, 0x5849dfc2cd15ff84)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_QP_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0x2aa7f684273fd159)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ndk_qp_t*)>*), "_NDK_QP_DISPATCH.NdkFlush", ndk_flush, 0x80, 0x40, true, 0xd2203529fa2c1b99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t, uint32_t)>*), "_NDK_QP_DISPATCH.NdkSend", ndk_send, 0xc0, 0x40, true, 0xab6012dbe70c38e4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t)>*), "_NDK_QP_DISPATCH.NdkReceive", ndk_receive, 0x100, 0x40, true, 0xfd2c534ce91ef01a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, struct ndis::ndk_mr_t*, struct ndis::ndk_mw_t*, void*, uint64_t, uint32_t)>*), "_NDK_QP_DISPATCH.NdkBind", ndk_bind, 0x140, 0x40, true, 0xc079512cb6bd2eae)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, struct ndis::ndk_mr_t*, uint32_t, const int64_t*, uint32_t, uint64_t, void*, uint32_t)>*), "_NDK_QP_DISPATCH.NdkFastRegister", ndk_fast_register, 0x180, 0x40, true, 0x662ffdfca3dc3b66)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, struct ndis::ndk_object_header_t*, uint32_t)>*), "_NDK_QP_DISPATCH.NdkInvalidate", ndk_invalidate, 0x1c0, 0x40, true, 0x431587fad3039bef)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t, uint64_t, uint32_t, uint32_t)>*), "_NDK_QP_DISPATCH.NdkRead", ndk_read, 0x200, 0x40, true, 0x689a974e563c72ed)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t, uint64_t, uint32_t, uint32_t)>*), "_NDK_QP_DISPATCH.NdkWrite", ndk_write, 0x240, 0x40, true, 0xf913398820fcf9db)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_qp_t*, void*, const struct ndis::ndk_sge_t*, uint32_t, uint32_t, uint32_t)>*), "_NDK_QP_DISPATCH.NdkSendAndInvalidate", ndk_send_and_invalidate, 0x280, 0x40, true, 0x423e7faab6b460fc)
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
#define _m09
#define _m10
#endif