#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_CONNECTOR_DISPATCH.NdkCloseConnector", ndk_close_connector, 0x0, 0x40, true, 0xe671bfcdca132011)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_CONNECTOR_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0xb79734ca185d59be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::ndk_qp_t*, struct ndis::sockaddr_t const*, uint32_t, struct ndis::sockaddr_t const*, uint32_t, uint32_t, uint32_t, void const*, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_CONNECTOR_DISPATCH.NdkConnect", ndk_connect, 0x80, 0x40, true, 0x12e707546dfa57d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::ndk_qp_t*, struct ndis::ndk_shared_endpoint_t*, struct ndis::sockaddr_t const*, uint32_t, uint32_t, uint32_t, void const*, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_CONNECTOR_DISPATCH.NdkConnectWithSharedEndpoint", ndk_connect_with_shared_endpoint, 0xc0, 0x40, true, 0x67f5f9084f9b95e9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, sdk::function<void(void*)>*, void*, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_CONNECTOR_DISPATCH.NdkCompleteConnect", ndk_complete_connect, 0x100, 0x40, true, 0xd6002fc7e82caf9d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::ndk_qp_t*, uint32_t, uint32_t, void const*, uint32_t, sdk::function<void(void*)>*, void*, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_CONNECTOR_DISPATCH.NdkAccept", ndk_accept, 0x140, 0x40, true, 0x1747548752fa5be2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, void const*, uint32_t)>*), "_NDK_CONNECTOR_DISPATCH.NdkReject", ndk_reject, 0x180, 0x40, true, 0x28235abe4a707849)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, uint32_t*, uint32_t*, void*, uint32_t*)>*), "_NDK_CONNECTOR_DISPATCH.NdkGetConnectionData", ndk_get_connection_data, 0x1c0, 0x40, true, 0xf6e3fbc29347a2fc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::sockaddr_t*, uint32_t*)>*), "_NDK_CONNECTOR_DISPATCH.NdkGetLocalAddress", ndk_get_local_address, 0x200, 0x40, true, 0xbc34281d06149f8b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::sockaddr_t*, uint32_t*)>*), "_NDK_CONNECTOR_DISPATCH.NdkGetPeerAddress", ndk_get_peer_address, 0x240, 0x40, true, 0x508f9e98a14abbf9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_CONNECTOR_DISPATCH.NdkDisconnect", ndk_disconnect, 0x280, 0x40, true, 0xf161da8bd4e331b0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, sdk::function<void(void*, uint32_t)>*, void*, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_CONNECTOR_DISPATCH.NdkCompleteConnectEx", ndk_complete_connect_ex, 0x0, 0x0, false, 0x8e3929ab177dcdf9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_connector_t*, struct ndis::ndk_qp_t*, uint32_t, uint32_t, void const*, uint32_t, sdk::function<void(void*, uint32_t)>*, void*, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_CONNECTOR_DISPATCH.NdkAcceptEx", ndk_accept_ex, 0x0, 0x0, false, 0x84a2b4fc671b920e)
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
#define _m11
#define _m12
#endif