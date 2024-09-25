#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0xd6e714ec0897fbd5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES.Enabled", enabled, 0x20, 0x8, true, 0xc6c7ab59cb8c14)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES.NdkCapabilities", ndk_capabilities, 0x40, 0x40, true, 0x4d5559a002404a6d)
#else
#define _m00
#define _m01
#define _m02
#endif