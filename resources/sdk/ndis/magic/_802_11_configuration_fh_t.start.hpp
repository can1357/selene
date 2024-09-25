#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CONFIGURATION_FH.Length", length, 0x0, 0x20, true, 0x247a51379a59996)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CONFIGURATION_FH.HopPattern", hop_pattern, 0x20, 0x20, true, 0x9debec183b8b8be9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CONFIGURATION_FH.HopSet", hop_set, 0x40, 0x20, true, 0x8cb1b1d237525afa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CONFIGURATION_FH.DwellTime", dwell_time, 0x60, 0x20, true, 0x1c70e6c086712e5f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif