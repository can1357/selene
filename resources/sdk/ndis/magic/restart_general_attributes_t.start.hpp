#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0xc575d7e827640cf4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.MtuSize", mtu_size, 0x20, 0x20, true, 0xee32c0988bed4cb8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.MaxXmitLinkSpeed", max_xmit_link_speed, 0x40, 0x40, true, 0x5870df3622a2c889)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.MaxRcvLinkSpeed", max_rcv_link_speed, 0x80, 0x40, true, 0x6751b8ec4dd5396f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.LookaheadSize", lookahead_size, 0xc0, 0x20, true, 0x6f57878b6ad24775)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.MacOptions", mac_options, 0xe0, 0x20, true, 0xcfdbf732d8d0ece6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.SupportedPacketFilters", supported_packet_filters, 0x100, 0x20, true, 0x7bfb84d1e3eadf9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.MaxMulticastListSize", max_multicast_list_size, 0x120, 0x20, true, 0x6b5df3dcf0a050c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_capabilities_t*), "_NDIS_RESTART_GENERAL_ATTRIBUTES.RecvScaleCapabilities", recv_scale_capabilities, 0x140, 0x40, true, 0x572217006840365c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_access_type_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.AccessType", access_type, 0x180, 0x20, true, 0xc20ebe55a882e4ca)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.Flags", flags, 0x1a0, 0x20, true, 0x3cde0d44db2635f5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_connection_type_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.ConnectionType", connection_type, 0x1c0, 0x20, true, 0xc6348f971e31a59f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.SupportedStatistics", supported_statistics, 0x1e0, 0x20, true, 0x2a504352dc3878fb)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.DataBackFillSize", data_back_fill_size, 0x200, 0x20, true, 0x74be39fa979b6dfa)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.ContextBackFillSize", context_back_fill_size, 0x220, 0x20, true, 0xd4b720ded69f4ee8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_NDIS_RESTART_GENERAL_ATTRIBUTES.SupportedOidList", supported_oid_list, 0x240, 0x40, true, 0x15a00d2dd56a437d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.SupportedOidListLength", supported_oid_list_length, 0x280, 0x20, true, 0xde9b4490c4743570)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_GENERAL_ATTRIBUTES.MaxLookaheadSizeAccessed", max_lookahead_size_accessed, 0x2a0, 0x20, true, 0xbf83405508d2722f)
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
#endif