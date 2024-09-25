#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, sdk::function<void(void*)>*, void*)>*), "_NDK_LISTENER_DISPATCH.NdkCloseListener", ndk_close_listener, 0x0, 0x40, true, 0x6a8c2a00de99b011)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_object_header_t*, struct nt::guid_t*, struct ndis::ndk_version_t, struct ndis::ndk_extension_interface_t*)>*), "_NDK_LISTENER_DISPATCH.NdkQueryExtension", ndk_query_extension, 0x40, 0x40, true, 0x5ea4f891b7adc6cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_listener_t*, struct ndis::sockaddr_t const*, uint32_t, sdk::function<void(void*, int32_t)>*, void*)>*), "_NDK_LISTENER_DISPATCH.NdkListen", ndk_listen, 0x80, 0x40, true, 0x228df8456d16f84a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ndk_listener_t*, struct ndis::sockaddr_t*, uint32_t*)>*), "_NDK_LISTENER_DISPATCH.NdkGetLocalAddress", ndk_get_local_address, 0xc0, 0x40, true, 0x46c9c87b7179f992)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ndk_listener_t*, uint8_t)>*), "_NDK_LISTENER_DISPATCH.NdkControlConnectEvents", ndk_control_connect_events, 0x100, 0x40, true, 0xe92c25e256841b82)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif