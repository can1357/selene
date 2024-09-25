#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_version_t), "_NDIS_OPEN_NDK_ADAPTER_PARAMETERS.Version", version, 0x0, 0x20, true, 0x762e0c8888ebefb5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_NDK_ADAPTER_PARAMETERS.SwitchId", switch_id, 0x20, 0x20, true, 0x113281449ad1c786)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_NDK_ADAPTER_PARAMETERS.VPortId", v_port_id, 0x40, 0x20, true, 0x9c23b39b69371147)
#else
#define _m00
#define _m01
#define _m02
#endif