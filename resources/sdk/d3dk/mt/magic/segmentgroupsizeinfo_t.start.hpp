#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SEGMENTGROUPSIZEINFO.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0xf3faf1d1381fd48c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::segmentsizeinfo_t), "_D3DKMT_SEGMENTGROUPSIZEINFO.LegacyInfo", legacy_info, 0x40, 0xc0, true, 0x7072927f78baceae)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SEGMENTGROUPSIZEINFO.LocalMemory", local_memory, 0x100, 0x40, true, 0xfb8072cab9790261)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SEGMENTGROUPSIZEINFO.NonLocalMemory", non_local_memory, 0x140, 0x40, true, 0xd9b6f53d0f07101d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SEGMENTGROUPSIZEINFO.NonBudgetMemory", non_budget_memory, 0x180, 0x40, true, 0x6578770f0643ec14)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif