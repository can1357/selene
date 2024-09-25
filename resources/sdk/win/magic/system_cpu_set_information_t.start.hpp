#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CPU_SET_INFORMATION.Size", size, 0x0, 0x20, true, 0xe6bb15c8c4adc76b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::cpu_set_information_type_t), "_SYSTEM_CPU_SET_INFORMATION.Type", type, 0x20, 0x20, true, 0xba757ece50b645ce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.Id", id, 0x0, 0x20, true, 0xb49aa9b9ca5ee717)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.Group", group, 0x20, 0x10, true, 0x1d0cfdd59d229b67)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.LogicalProcessorIndex", logical_processor_index, 0x30, 0x8, true, 0x3d88e7e890abf578)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.CoreIndex", core_index, 0x38, 0x8, true, 0x4fc697a99503abd8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.LastLevelCacheIndex", last_level_cache_index, 0x40, 0x8, true, 0xd00510f86ae64488)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.NumaNodeIndex", numa_node_index, 0x48, 0x8, true, 0xf7bed6ab2f168d97)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.EfficiencyClass", efficiency_class, 0x50, 0x8, true, 0x881cf4bc17004cf5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.AllFlags", all_flags, 0x58, 0x8, true, 0x96d909a273c9f7be)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.Parked", parked, 0x58, 0x1, true, 0x3a4431140be5fb01, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.Allocated", allocated, 0x59, 0x1, true, 0x240dbe316d927be8, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.AllocatedToTargetProcess", allocated_to_target_process, 0x5a, 0x1, true, 0x23f5440523022d76, 1, uint8_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.RealTime", real_time, 0x5b, 0x1, true, 0x10fe4bbc66855715, 1, uint8_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.AllocationTag", allocation_tag, 0x80, 0x40, true, 0xfe428e6d3c45cf44)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet.SchedulingClass", scheduling_class, 0x60, 0x8, true, 0x25cfdfe4fdbc58ff)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_cpu_set_t), "_SYSTEM_CPU_SET_INFORMATION.CpuSet", cpu_set, 0x40, 0xc0, true, 0x136e0da63cc6f4dc)
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
#endif