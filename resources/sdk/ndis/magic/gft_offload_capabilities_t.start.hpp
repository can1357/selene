#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.Header", header, 0x0, 0x20, true, 0xcf647a786aafdab2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.Flags", flags, 0x20, 0x20, true, 0x76ec8ee0a8426f45)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.CounterCapabilities", counter_capabilities, 0x40, 0x20, true, 0x58763ba5cff0054f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SupportedTableTypes", supported_table_types, 0x60, 0x20, true, 0x7b2dcf8b8e72081e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SupportedEncapsulationTypes", supported_encapsulation_types, 0x80, 0x20, true, 0x109757acae9ab5ef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SupportedIngressExactMatchTableActions", supported_ingress_exact_match_table_actions, 0xa0, 0x20, true, 0x91539c1447ff2540)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SupportedEgressExactMatchTableActions", supported_egress_exact_match_table_actions, 0xc0, 0x20, true, 0x436dc9b14cc45ef6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SoftwareSupportedIngressExactMatchTableActions", software_supported_ingress_exact_match_table_actions, 0xe0, 0x20, true, 0xf0b77d036b2ccab0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SoftwareSupportedEgressExactMatchTableActions", software_supported_egress_exact_match_table_actions, 0x100, 0x20, true, 0xe1693043148db8f0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SupportedIngressWildcardMatchTableActions", supported_ingress_wildcard_match_table_actions, 0x120, 0x20, true, 0x3ed9404450cd2088)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SupportedEgressWildcardMatchTableActions", supported_egress_wildcard_match_table_actions, 0x140, 0x20, true, 0x25050bdb8c6e07fc)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SoftwareSupportedIngressWildcardMatchTableActions", software_supported_ingress_wildcard_match_table_actions, 0x160, 0x20, true, 0x316e27798f7caf4f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.SoftwareSupportedEgressWildcardMatchTableActions", software_supported_egress_wildcard_match_table_actions, 0x180, 0x20, true, 0x67ff468a415910e8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumPacketCounterObjects", num_packet_counter_objects, 0x1a0, 0x20, true, 0x8e1f9a3d4ded2e47)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumByteCounterObjects", num_byte_counter_objects, 0x1c0, 0x20, true, 0x819a9867ff2469dd)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumCounterObjectsPerIngressExactMatchFlowEntry", num_counter_objects_per_ingress_exact_match_flow_entry, 0x220, 0x20, true, 0x503feae4e60b0c09)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumCounterObjectsPerEgressExactMatchFlowEntry", num_counter_objects_per_egress_exact_match_flow_entry, 0x240, 0x20, true, 0x7f4946dd37ba2c06)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumCounterObjectsPerIngressWildcardMatchFlowEntry", num_counter_objects_per_ingress_wildcard_match_flow_entry, 0x260, 0x20, true, 0xcb116cbda2a2e676)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumCounterObjectsPerEgressWildcardMatchFlowEntry", num_counter_objects_per_egress_wildcard_match_flow_entry, 0x280, 0x20, true, 0x9b39f4b3e5c87e35)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumPacketByteCounterObjects", num_packet_byte_counter_objects, 0x1e0, 0x20, true, 0xd7b738e3be48814d)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumPacketByteCounterAndStateObjects", num_packet_byte_counter_and_state_objects, 0x200, 0x20, true, 0x6ff55a7cff7db405)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_CAPABILITIES.NumPacketAndByteCounterObjects", num_packet_and_byte_counter_objects, 0x0, 0x0, false, 0xb0059384ac1860d7)
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
#define _m21
#endif