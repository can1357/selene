#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.Header", header, 0x0, 0x20, true, 0xd85aed8122d321e7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.Flags", flags, 0x20, 0x20, true, 0xf69876e8888aef7a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.TableId", table_id, 0x40, 0x20, true, 0xc750cefc35910804)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.VPortId", v_port_id, 0x60, 0x20, true, 0x8956f001987d2bf7)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.MatchProfileId", match_profile_id, 0x80, 0x20, true, 0xefd764ee73b6923e)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.MatchRequestStatus", match_request_status, 0xa0, 0x20, true, 0x1132e5ea3706c32)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.ActionRequestStatus", action_request_status, 0xc0, 0x20, true, 0x74ca5f71bf0a8b23)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterFlags", counter_flags, 0xe0, 0x20, true, 0x7cf7ad151274207f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_update_frequency_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterUpdateFrequency", counter_update_frequency, 0x100, 0x20, true, 0xa2dd459ee037f77e)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_type_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterType", counter_type, 0x120, 0x20, true, 0x24441062733e864)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.UpdatePeriod", update_period, 0x140, 0x20, true, 0xfa62f0bdeed44623)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_counter_value_buffer_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterValueBuffer", counter_value_buffer, 0x180, 0x40, true, 0x34636baca2d1c83)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.HeaderTranspositionProfileId", header_transposition_profile_id, 0x1c0, 0x20, true, 0xf4d982cd671a8665)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.RedirectionVPortId", redirection_v_port_id, 0x1e0, 0x20, true, 0x58855117e59014bf)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.TtlIsOneRedirectionVPortId", ttl_is_one_redirection_v_port_id, 0x200, 0x20, true, 0x5362f19820ae3b75)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.NumCounterObjects", num_counter_objects, 0x220, 0x20, true, 0x1d5df4916a60da7e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterIdArray", counter_id_array, 0x240, 0x0, true, 0xa69435b4665125e3)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_flow_entry_cache_hint_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CacheHint", cache_hint, 0x340, 0x20, true, 0x7017b90828e92238)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.ClientFlowEntryId", client_flow_entry_id, 0x380, 0x40, true, 0x852827ae70acdd76)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.ProviderFlowEntryId", provider_flow_entry_id, 0x3c0, 0x40, true, 0x52fef4e5abf60655)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_flow_entry_state_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.FlowEntryState", flow_entry_state, 0x400, 0x20, true, 0x81cd53100483ff23)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.TcpSequenceNumber", tcp_sequence_number, 0x420, 0x20, true, 0x277055262852a08d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.HeaderGroupExactMatchArrayOffset", header_group_exact_match_array_offset, 0x440, 0x20, true, 0x8c2c9b2cddb116cb)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.HeaderGroupExactMatchArrayNumElements", header_group_exact_match_array_num_elements, 0x460, 0x20, true, 0x2acfa056d8af32da)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.HeaderGroupExactMatchArrayElementSize", header_group_exact_match_array_element_size, 0x480, 0x20, true, 0x2c08fee9fa12b52d)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.HeaderGroupTranspositionArrayOffset", header_group_transposition_array_offset, 0x4a0, 0x20, true, 0x6c5edd2228185501)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.HeaderGroupTranspositionArrayNumElements", header_group_transposition_array_num_elements, 0x4c0, 0x20, true, 0x6f8a10243daa3bad)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.HeaderGroupTranspositionArrayElementSize", header_group_transposition_array_element_size, 0x4e0, 0x20, true, 0x98b1861fa39b3a3a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CustomActionOffset", custom_action_offset, 0x500, 0x20, true, 0x4c7bca7e45ccc05)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_counter_value_t*), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterValueBuffer.PacketCounterAddress", packet_counter_address, 0x0, 0x40, true, 0xb8fc4a918677a411)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_byte_counter_value_t*), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterValueBuffer.ByteCounterAddress", byte_counter_address, 0x0, 0x40, true, 0x409631e294ea65d4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_byte_counter_value_t*), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterValueBuffer.PacketByteCounterAddress", packet_byte_counter_address, 0x0, 0x40, true, 0xf91e2786da794293)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_byte_counter_value_and_state_t*), "_NDIS_GFT_EXACT_MATCH_FLOW_ENTRY.CounterValueBuffer.PacketByteCounterAndStateAddress", packet_byte_counter_and_state_address, 0x0, 0x40, true, 0x4ea67ad78385e82f)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m11
#define _m12
#define _m13
#define _m14
#endif