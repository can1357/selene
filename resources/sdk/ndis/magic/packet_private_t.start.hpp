#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PRIVATE.PhysicalCount", physical_count, 0x0, 0x20, true, 0xc30614ad8f0c86ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PRIVATE.TotalLength", total_length, 0x20, 0x20, true, 0x47d89baa1488b098)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_NDIS_PACKET_PRIVATE.Head", head, 0x40, 0x40, true, 0xceea81bd9c6d02f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_NDIS_PACKET_PRIVATE.Tail", tail, 0x80, 0x40, true, 0xec07a2b33195104)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PACKET_PRIVATE.Pool", pool, 0xc0, 0x40, true, 0xae519ede6e0b3f0d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PRIVATE.Count", count, 0x100, 0x20, true, 0x1a7b9d8502131e48)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_PRIVATE.Flags", flags, 0x120, 0x20, true, 0xfa6b6c5fd811814c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PACKET_PRIVATE.ValidCounts", valid_counts, 0x140, 0x8, true, 0xc8b9bda5634fdd1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PACKET_PRIVATE.NdisPacketFlags", ndis_packet_flags, 0x148, 0x8, true, 0x22033d6e3b68aed0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_PACKET_PRIVATE.NdisPacketOobOffset", ndis_packet_oob_offset, 0x150, 0x10, true, 0x9804bbc630a18915)
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
#endif