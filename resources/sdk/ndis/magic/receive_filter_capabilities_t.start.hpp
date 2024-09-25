#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.Header", header, 0x0, 0x20, true, 0x7824381400aab506)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.Flags", flags, 0x20, 0x20, true, 0xd3e2347e47bc7653)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.EnabledFilterTypes", enabled_filter_types, 0x40, 0x20, true, 0x295142ae5f1646a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.EnabledQueueTypes", enabled_queue_types, 0x60, 0x20, true, 0xb31f50b653990fff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.NumQueues", num_queues, 0x80, 0x20, true, 0x84e22730a7711bc5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.SupportedQueueProperties", supported_queue_properties, 0xa0, 0x20, true, 0xd5d5f1b30ecde85f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.SupportedFilterTests", supported_filter_tests, 0xc0, 0x20, true, 0x5c77363963b46dc3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.SupportedHeaders", supported_headers, 0xe0, 0x20, true, 0x35b14b63aa0f55fd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.SupportedMacHeaderFields", supported_mac_header_fields, 0x100, 0x20, true, 0x72bd717fb23d5f27)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.MaxMacHeaderFilters", max_mac_header_filters, 0x120, 0x20, true, 0xacb827ac2a932240)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.MaxQueueGroups", max_queue_groups, 0x140, 0x20, true, 0x2b779b5f901684e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.MaxQueuesPerQueueGroup", max_queues_per_queue_group, 0x160, 0x20, true, 0xf6b64cf012841ff9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.MinLookaheadSplitSize", min_lookahead_split_size, 0x180, 0x20, true, 0x85ff0674a03e3f27)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.MaxLookaheadSplitSize", max_lookahead_split_size, 0x1a0, 0x20, true, 0x767068fcef662991)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.SupportedARPHeaderFields", supported_arp_header_fields, 0x1c0, 0x20, true, 0x675867664ebdad3d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.SupportedIPv4HeaderFields", supported_i_pv4_header_fields, 0x1e0, 0x20, true, 0x644503099bb810c9)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.SupportedIPv6HeaderFields", supported_i_pv6_header_fields, 0x200, 0x20, true, 0xcbd2992763c5787f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.SupportedUdpHeaderFields", supported_udp_header_fields, 0x220, 0x20, true, 0xeba21de657db306b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.MaxFieldTestsPerPacketCoalescingFilter", max_field_tests_per_packet_coalescing_filter, 0x240, 0x20, true, 0x24b9b15a614de70a)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.MaxPacketCoalescingFilters", max_packet_coalescing_filters, 0x260, 0x20, true, 0x4cb773b1d82b5676)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_CAPABILITIES.NdisReserved", ndis_reserved, 0x280, 0x20, true, 0xa9857ce7875f1ebf)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif