#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_TRANSPORT_CHARACTERISTICS.Version", version, 0x0, 0x20, true, 0xb382cb60d52ebaea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_TRANSPORT_CHARACTERISTICS.TransportCharacteristicsFlags", transport_characteristics_flags, 0x20, 0x20, true, 0x76d0857a8dc069f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_USB_TRANSPORT_CHARACTERISTICS.CurrentRoundtripLatencyInMilliSeconds", current_roundtrip_latency_in_milli_seconds, 0x40, 0x40, true, 0xc846d53d59b0ac97)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_USB_TRANSPORT_CHARACTERISTICS.MaxPotentialBandwidth", max_potential_bandwidth, 0x80, 0x40, true, 0xa5f84511df78439d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif