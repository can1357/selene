#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CONFIGURATION.Length", length, 0x0, 0x20, true, 0x2f9729171102f065)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CONFIGURATION.BeaconPeriod", beacon_period, 0x20, 0x20, true, 0xd1689dc6f6cfa45a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CONFIGURATION.ATIMWindow", atim_window, 0x40, 0x20, true, 0x883df4e266c2db1f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CONFIGURATION.DSConfig", ds_config, 0x60, 0x20, true, 0xd6fd63b1ed71b7c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_configuration_fh_t), "_NDIS_802_11_CONFIGURATION.FHConfig", fh_config, 0x80, 0x80, true, 0xa82cdac55be35192)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif