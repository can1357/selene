#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.Header", header, 0x0, 0x20, true, 0xf9f1543e277c1699)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.Flags", flags, 0x20, 0x20, true, 0x4ee0efcddcc892c3)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.TableId", table_id, 0x40, 0x20, true, 0x55e1399df302d39a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.VPortId", v_port_id, 0x60, 0x20, true, 0x8329b2c3450faf2b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.MatchProfileId", match_profile_id, 0x80, 0x20, true, 0xd48a0802f3178282)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.MatchRequestStatus", match_request_status, 0xa0, 0x20, true, 0x8e515c9a7ad626a4)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.ActionRequestStatus", action_request_status, 0xc0, 0x20, true, 0xe0c71ff898aa9a78)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterFlags", counter_flags, 0xe0, 0x20, true, 0xcc65c1ca15e69a33)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_update_frequency_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterUpdateFrequency", counter_update_frequency, 0x100, 0x20, true, 0x161cdf41566f37c5)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_type_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterType", counter_type, 0x120, 0x20, true, 0xec8d72373c913ff)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.UpdatePeriod", update_period, 0x140, 0x20, true, 0x5868640af5f76107)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_counter_value_buffer_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterValueBuffer", counter_value_buffer, 0x180, 0x40, true, 0xc8b642b2a5ec4031)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.Priority", priority, 0x1c0, 0x20, true, 0xc4a74e8216f90fc7)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_wildcard_action_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.Action", action, 0x1e0, 0x20, true, 0xa88ad0ea2eead5df)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.RedirectionVPortId", redirection_v_port_id, 0x200, 0x20, true, 0x2771162a2cd5df0e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.TtlIsOneRedirectionVPortId", ttl_is_one_redirection_v_port_id, 0x220, 0x20, true, 0xef9b985ba665bc00)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.NumCounterObjects", num_counter_objects, 0x240, 0x20, true, 0xe5bcab5b19b7c51f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterIdArray", counter_id_array, 0x260, 0x0, true, 0xa9d8cb8a5d1237ac)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_flow_entry_cache_hint_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CacheHint", cache_hint, 0x360, 0x20, true, 0x89c9557f7336d05f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.ClientFlowEntryId", client_flow_entry_id, 0x380, 0x40, true, 0x38ca48030867669b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.ProviderFlowEntryId", provider_flow_entry_id, 0x3c0, 0x40, true, 0xf902e8c60bff4dd5)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_flow_entry_state_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.FlowEntryState", flow_entry_state, 0x400, 0x20, true, 0xd685c2f4bbb2174f)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.HeaderGroupWildcardMatchArrayOffset", header_group_wildcard_match_array_offset, 0x420, 0x20, true, 0x45885efc3f0e7f6c)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.HeaderGroupWildcardMatchArrayNumElements", header_group_wildcard_match_array_num_elements, 0x440, 0x20, true, 0x78efc11538f248cd)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.HeaderGroupWildcardMatchArrayElementSize", header_group_wildcard_match_array_element_size, 0x460, 0x20, true, 0x868191abf457f57b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CustomActionOffset", custom_action_offset, 0x480, 0x20, true, 0x2f5b52e0f255ddba)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_counter_value_t*), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterValueBuffer.PacketCounterAddress", packet_counter_address, 0x0, 0x40, true, 0x10095cf8b10fc21f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_byte_counter_value_t*), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterValueBuffer.ByteCounterAddress", byte_counter_address, 0x0, 0x40, true, 0x329178edadae0898)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_byte_counter_value_t*), "_NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY.CounterValueBuffer.PacketByteCounterAddress", packet_byte_counter_address, 0x0, 0x40, true, 0x1c04b76b62060dfc)
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
#define _m014
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
#define _m11
#define _m12
#define _m13
#endif