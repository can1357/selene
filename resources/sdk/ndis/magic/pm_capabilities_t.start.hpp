#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PM_CAPABILITIES.Header", header, 0x0, 0x20, true, 0x24c3c047e9366f55)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.Flags", flags, 0x20, 0x20, true, 0xb537861866bae58b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.SupportedWoLPacketPatterns", supported_wo_l_packet_patterns, 0x40, 0x20, true, 0xfc35a25ac72304ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.NumTotalWoLPatterns", num_total_wo_l_patterns, 0x60, 0x20, true, 0x74fbdc258175a0c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.MaxWoLPatternSize", max_wo_l_pattern_size, 0x80, 0x20, true, 0x6e8d08d6750fad8d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.MaxWoLPatternOffset", max_wo_l_pattern_offset, 0xa0, 0x20, true, 0xf20968c6a0526b5a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.MaxWoLPacketSaveBuffer", max_wo_l_packet_save_buffer, 0xc0, 0x20, true, 0x4fef0c5476263b5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.SupportedProtocolOffloads", supported_protocol_offloads, 0xe0, 0x20, true, 0xd397ee1817aa93ff)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.NumArpOffloadIPv4Addresses", num_arp_offload_i_pv4_addresses, 0x100, 0x20, true, 0xdd2d7053741c0cd2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.NumNSOffloadIPv6Addresses", num_ns_offload_i_pv6_addresses, 0x120, 0x20, true, 0xaad8de14bac7ffc2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::device_power_state_t), "_NDIS_PM_CAPABILITIES.MinMagicPacketWakeUp", min_magic_packet_wake_up, 0x140, 0x20, true, 0x92519dfd5e3eafe1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::device_power_state_t), "_NDIS_PM_CAPABILITIES.MinPatternWakeUp", min_pattern_wake_up, 0x160, 0x20, true, 0x590e8a4a059a8c59)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::device_power_state_t), "_NDIS_PM_CAPABILITIES.MinLinkChangeWakeUp", min_link_change_wake_up, 0x180, 0x20, true, 0x6979002a19079135)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.SupportedWakeUpEvents", supported_wake_up_events, 0x1a0, 0x20, true, 0x496263278d618397)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_CAPABILITIES.MediaSpecificWakeUpEvents", media_specific_wake_up_events, 0x1c0, 0x20, true, 0xabf70a634847b430)
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
#define _m13
#define _m14
#endif