#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pcw_data_block_t*), "NDIS_PCW_CONTEXT.PcwBlock", pcw_block, 0x0, 0x0, false, 0xb679e7d3f9de604e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NDIS_PCW_CONTEXT.DatapathEventsMask", datapath_events_mask, 0x0, 0x0, false, 0x95ab8021729205e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NDIS_PCW_CONTEXT.DatapathCyclesMask", datapath_cycles_mask, 0x0, 0x0, false, 0xaceb7a72f65f2b8e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NDIS_PCW_CONTEXT.CurrentCpu", current_cpu, 0x0, 0x0, false, 0x9ad4a5dd2327e849)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif