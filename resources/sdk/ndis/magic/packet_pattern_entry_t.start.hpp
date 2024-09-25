#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_PACKET_PATTERN_ENTRY.Link", link, 0x0, 0x40, true, 0xf2179bc50a4d0677)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_PACKET_PATTERN_ENTRY.DupLink", dup_link, 0x40, 0x40, true, 0xdd5912a1fa79ecb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PATTERN_ENTRY.Size", size, 0x80, 0x20, true, 0x1e901ee65c828994)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PACKET_PATTERN_ENTRY.Source", source, 0xc0, 0x40, true, 0x273834eb633a2876)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PATTERN_ENTRY.Priority", priority, 0x100, 0x20, true, 0x57669275145b8333)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PATTERN_ENTRY.EffectivePriority", effective_priority, 0x120, 0x20, true, 0x9226ce32cb1d42db)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PATTERN_ENTRY.Id", id, 0x140, 0x20, true, 0x4f08994ca89603ef)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PATTERN_ENTRY.PortNumber", port_number, 0x160, 0x20, true, 0x93b9460c2ef50b1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_packet_pattern_t), "_NDIS_PACKET_PATTERN_ENTRY.Pattern", pattern, 0x180, 0xc0, true, 0x6dabd0815ff1bc1b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_wol_pattern_t), "_NDIS_PACKET_PATTERN_ENTRY.WoLPattern", wo_l_pattern, 0x180, 0x20, true, 0x607bbb89e0b6a45e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_protocol_offload_t), "_NDIS_PACKET_PATTERN_ENTRY.ProtocolOffload", protocol_offload, 0x180, 0x0, true, 0x7509dd6af8801a40)
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
#endif