#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_NDK_RESPONSE_PARAMETERS.CapabilitiesAvailable", capabilities_available, 0x0, 0x8, true, 0xd8f92bbbc2526c10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_capabilities_t), "_NDIS_NDK_RESPONSE_PARAMETERS.ReceivedCapabilities", received_capabilities, 0x40, 0xc0, true, 0x920c200073128698)
#else
#define _m00
#define _m01
#endif