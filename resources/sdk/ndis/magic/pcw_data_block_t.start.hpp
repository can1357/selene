#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 26>), "_NDIS_PCW_DATA_BLOCK.DatapathEventReferences", datapath_event_references, 0x0, 0x0, false, 0xaada32e421bdef27)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 13>), "_NDIS_PCW_DATA_BLOCK.DatapathCycleReferences", datapath_cycle_references, 0x0, 0x0, false, 0x7c02a15ffd1f31e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pcw_data_block_t*), "_NDIS_PCW_DATA_BLOCK.Next", next, 0x0, 0x0, false, 0x4990e96594cccf6a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCW_DATA_BLOCK.ReferenceCount", reference_count, 0x0, 0x0, false, 0x4f183d567127faa8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_PCW_DATA_BLOCK.Miniport", miniport, 0x0, 0x0, false, 0xcc2b488350b3607f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCW_DATA_BLOCK.TotalInstanceId", total_instance_id, 0x0, 0x0, false, 0xeddf20c2cb8eb734)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_PCW_DATA_BLOCK.TotalInstanceName", total_instance_name, 0x0, 0x0, false, 0x2d40c86ef5b0505f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif