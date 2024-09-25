#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_MMSUPPORT_INSTANCE.NextPageColor", next_page_color, 0x0, 0x20, true, 0x7e04fb2f0e11c880, 0, uint16_t,uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_MMSUPPORT_INSTANCE.PageFaultCount", page_fault_count, 0x20, 0x20, true, 0xd4a1a74bf99d2f8b, 32, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_INSTANCE.TrimmedPageCount", trimmed_page_count, 0x40, 0x40, true, 0xbdbcd41e02aa0b74)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsl_instance_t*), "_MMSUPPORT_INSTANCE.VmWorkingSetList", vm_working_set_list, 0x80, 0x40, true, 0x4206ededa8af735d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMSUPPORT_INSTANCE.WorkingSetExpansionLinks", working_set_expansion_links, 0xc0, 0x80, true, 0x7e4d1c30ae7dbdb3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint64_t, 7>, sdk::array<volatile uint64_t, 8>>), "_MMSUPPORT_INSTANCE.AgeDistribution", age_distribution, 0x140, 0x0, true, 0x1c05dec767a06db9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t*), "_MMSUPPORT_INSTANCE.ExitOutswapGate", exit_outswap_gate, 0x340, 0x40, true, 0x4d53cda125ef71bd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_INSTANCE.MinimumWorkingSetSize", minimum_working_set_size, 0x380, 0x40, true, 0x7ab15672110f133)
#define _m08 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint64_t), "_MMSUPPORT_INSTANCE.WorkingSetLeafSize", working_set_leaf_size, 0x3c0, 0x40, true, 0x4979b56f0bd66ab6, 64, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint64_t), "_MMSUPPORT_INSTANCE.WorkingSetLeafPrivateSize", working_set_leaf_private_size, 0x400, 0x40, true, 0xe450ee3362617d45, 64, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint64_t), "_MMSUPPORT_INSTANCE.WorkingSetSize", working_set_size, 0x440, 0x40, true, 0xd05b072aeab6d9d1, 64, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint64_t), "_MMSUPPORT_INSTANCE.WorkingSetPrivateSize", working_set_private_size, 0x480, 0x40, true, 0x6b7a78aaf9128e52, 64, uint64_t)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_INSTANCE.MaximumWorkingSetSize", maximum_working_set_size, 0x4c0, 0x40, true, 0x39f99639eb4e02f5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_INSTANCE.PeakWorkingSetSize", peak_working_set_size, 0x500, 0x40, true, 0x2a2f05f5ad02144e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMSUPPORT_INSTANCE.HardFaultCount", hard_fault_count, 0x540, 0x20, true, 0x1ce75b3f095ce618)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MMSUPPORT_INSTANCE.LastTrimStamp", last_trim_stamp, 0x560, 0x10, true, 0xd9ae115725a71c1c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MMSUPPORT_INSTANCE.PartitionId", partition_id, 0x570, 0x10, true, 0x62b99f3d10993f9b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_flags_t), "_MMSUPPORT_INSTANCE.Flags", flags, 0x5c0, 0x20, true, 0x91afacaaa032b866)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_INSTANCE.SelfmapLock", selfmap_lock, 0x580, 0x40, true, 0xeb5d1e2289ccceeb)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMSUPPORT_INSTANCE.InstancedWorkingSet", instanced_working_set, 0x0, 0x0, false, 0x52d7a599b37b573b)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MMSUPPORT_INSTANCE.InterlockedFlags", interlocked_flags, 0x0, 0x0, false, 0xfc4f049517fcfb29)
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
#endif