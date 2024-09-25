#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_INSTANCE.Signature", signature, 0x0, 0x20, true, 0x6ae16ad34c610c82)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_ARBITER_INSTANCE.MutexEvent", mutex_event, 0x40, 0x40, true, 0xefb183342c1a2fc5)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ARBITER_INSTANCE.Name", name, 0x80, 0x40, true, 0x7496e39f41be0394)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ARBITER_INSTANCE.OrderingName", ordering_name, 0xc0, 0x40, true, 0xafd8e50fa2dc4a3a)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ARBITER_INSTANCE.ResourceType", resource_type, 0x100, 0x20, true, 0xbd70d71ab567b6df)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::range_list_t*), "_ARBITER_INSTANCE.Allocation", allocation, 0x140, 0x40, true, 0xd91755df01e2a98e)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::range_list_t*), "_ARBITER_INSTANCE.PossibleAllocation", possible_allocation, 0x180, 0x40, true, 0x75bcecd249a83174)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::ordering_list_t), "_ARBITER_INSTANCE.OrderingList", ordering_list, 0x1c0, 0x80, true, 0xbba5ea626a8a4dd1)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::ordering_list_t), "_ARBITER_INSTANCE.ReservedList", reserved_list, 0x240, 0x80, true, 0x78772c131f96400c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ARBITER_INSTANCE.ReferenceCount", reference_count, 0x2c0, 0x20, true, 0x457f65cfa1c6f4c1)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::interface_t*), "_ARBITER_INSTANCE.Interface", interface, 0x300, 0x40, true, 0x49b7ec1581f98858)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_INSTANCE.AllocationStackMaxSize", allocation_stack_max_size, 0x340, 0x20, true, 0x95fccf470f0d3a69)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::allocation_state_t*), "_ARBITER_INSTANCE.AllocationStack", allocation_stack, 0x380, 0x40, true, 0x70047245d0acf1ee)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct io::resource_descriptor_t*, uint64_t*, uint64_t*, uint64_t*, uint64_t*)>*), "_ARBITER_INSTANCE.UnpackRequirement", unpack_requirement, 0x3c0, 0x40, true, 0xf2a0ebe815d11295)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct io::resource_descriptor_t*, uint64_t, struct cm::partial_resource_descriptor_t*)>*), "_ARBITER_INSTANCE.PackResource", pack_resource, 0x400, 0x40, true, 0xa882c240eff62a0d)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct cm::partial_resource_descriptor_t*, uint64_t*, uint64_t*)>*), "_ARBITER_INSTANCE.UnpackResource", unpack_resource, 0x440, 0x40, true, 0xad7a9783fb1ac14d)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct io::resource_descriptor_t*)>*), "_ARBITER_INSTANCE.ScoreRequirement", score_requirement, 0x480, 0x40, true, 0xfccb92131b23f38d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::test_allocation_parameters_t*)>*), "_ARBITER_INSTANCE.TestAllocation", test_allocation, 0x4c0, 0x40, true, 0xa80ac72bc0fd690)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::retest_allocation_parameters_t*)>*), "_ARBITER_INSTANCE.RetestAllocation", retest_allocation, 0x500, 0x40, true, 0x129fc5efabfde238)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*)>*), "_ARBITER_INSTANCE.CommitAllocation", commit_allocation, 0x540, 0x40, true, 0xd07650a3cdda3f03)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*)>*), "_ARBITER_INSTANCE.RollbackAllocation", rollback_allocation, 0x580, 0x40, true, 0xd22940f2fb27aa7f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::boot_allocation_parameters_t*)>*), "_ARBITER_INSTANCE.BootAllocation", boot_allocation, 0x5c0, 0x40, true, 0xec41d536d78480b8)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::query_arbitrate_parameters_t*)>*), "_ARBITER_INSTANCE.QueryArbitrate", query_arbitrate, 0x600, 0x40, true, 0xa0f135e608cd0dcd)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::query_conflict_parameters_t*)>*), "_ARBITER_INSTANCE.QueryConflict", query_conflict, 0x640, 0x40, true, 0x7e97bc5f017fd73e)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::add_reserved_parameters_t*)>*), "_ARBITER_INSTANCE.AddReserved", add_reserved, 0x680, 0x40, true, 0xc008d95721817e9f)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct cm::resource_list_t*)>*), "_ARBITER_INSTANCE.StartArbiter", start_arbiter, 0x6c0, 0x40, true, 0xc2e7d8e7a265fc40)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*), "_ARBITER_INSTANCE.PreprocessEntry", preprocess_entry, 0x700, 0x40, true, 0x740550b905b3d12)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*), "_ARBITER_INSTANCE.AllocateEntry", allocate_entry, 0x740, 0x40, true, 0x99aa4e443eb29ff)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*), "_ARBITER_INSTANCE.GetNextAllocationRange", get_next_allocation_range, 0x780, 0x40, true, 0xe64f4af16aefe67c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*), "_ARBITER_INSTANCE.FindSuitableRange", find_suitable_range, 0x7c0, 0x40, true, 0x62dcdf7f83118149)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*), "_ARBITER_INSTANCE.AddAllocation", add_allocation, 0x800, 0x40, true, 0xcf6be16a5fd9e918)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*), "_ARBITER_INSTANCE.BacktrackAllocation", backtrack_allocation, 0x840, 0x40, true, 0x5bdde1e07c0e63e9)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*), "_ARBITER_INSTANCE.OverrideConflict", override_conflict, 0x880, 0x40, true, 0xc0b7caa79a66b262)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, uint32_t, struct cm::partial_resource_descriptor_t*, struct rtl::range_list_t*)>*), "_ARBITER_INSTANCE.InitializeRangeList", initialize_range_list, 0x8c0, 0x40, true, 0xd606e5f8f51756b3)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ARBITER_INSTANCE.TransactionInProgress", transaction_in_progress, 0x940, 0x8, true, 0xd34e6035ad868134)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_ARBITER_INSTANCE.TransactionEvent", transaction_event, 0x980, 0x40, true, 0xb6816939c140bc06)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ARBITER_INSTANCE.Extension", extension, 0x9c0, 0x40, true, 0x74cb1ec4f24624c8)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_ARBITER_INSTANCE.BusDeviceObject", bus_device_object, 0xa00, 0x40, true, 0x8f6b2299711a23f3)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ARBITER_INSTANCE.ConflictCallbackContext", conflict_callback_context, 0xa40, 0x40, true, 0x9271bafa1a8dbc2d)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct rtl::range_t*)>*), "_ARBITER_INSTANCE.ConflictCallback", conflict_callback, 0xa80, 0x40, true, 0x22e41d547831e560)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct arbiter::instance_t*, void*)>*), "_ARBITER_INSTANCE.DeleteOwnerRanges", delete_owner_ranges, 0x900, 0x40, true, 0xa1d8482468fd0636)
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
#define _m011
#define _m012
#define _m013
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
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#endif