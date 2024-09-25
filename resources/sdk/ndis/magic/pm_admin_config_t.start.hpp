#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_PM_ADMIN_CONFIG.WakeOnPattern", wake_on_pattern, 0x0, 0x2, true, 0x61a66c426c02efa1, 2, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_PM_ADMIN_CONFIG.WakeOnMagicPacket", wake_on_magic_packet, 0x2, 0x2, true, 0xb5ca788899ef2598, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_PM_ADMIN_CONFIG.DeviceSleepOnDisconnect", device_sleep_on_disconnect, 0x4, 0x2, true, 0xa197e662681279f3, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_PM_ADMIN_CONFIG.PMARPOffload", pmarp_offload, 0x6, 0x2, true, 0xb3f30070e411a1ca, 2, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_PM_ADMIN_CONFIG.PMNSOffload", pmns_offload, 0x8, 0x2, true, 0x734e0c209e1e09ae, 2, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_PM_ADMIN_CONFIG.PMWiFiRekeyOffload", pm_wi_fi_rekey_offload, 0xa, 0x2, true, 0xadaf8e766bb7aeaa, 2, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_PM_ADMIN_CONFIG.SelectiveSuspend", selective_suspend, 0xc, 0x2, true, 0x12584b6758fd72b5, 2, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_ADMIN_CONFIG.Value", value, 0x0, 0x20, true, 0x1e7f5031ae252a47)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_PM_ADMIN_CONFIG.NicAutoPowerSaver", nic_auto_power_saver, 0xe, 0x2, true, 0x1eef16a794b55408, 2, uint32_t)
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
#endif