#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PNP_CAPABILITIES.Flags", flags, 0x0, 0x20, true, 0x8afa7155ddb19977)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_wake_up_capabilities_t), "_NDIS_PNP_CAPABILITIES.WakeUpCapabilities", wake_up_capabilities, 0x20, 0x60, true, 0x13ffd5bc13076154)
#else
#define _m00
#define _m01
#endif