#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMINPAGE_SUPPORT.ListEntry", list_entry, 0x0, 0x80, true, 0x49eb020f083f909e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMINPAGE_SUPPORT.ListHead", list_head, 0x80, 0x80, true, 0x1c23e0c26457532f)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MMINPAGE_SUPPORT.Event", event, 0x100, 0xc0, true, 0xb3939f36620f361e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MMINPAGE_SUPPORT.CollidedEvent", collided_event, 0x1c0, 0xc0, true, 0xd0df8ea6b1d8ae18)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_MMINPAGE_SUPPORT.IoStatus", io_status, 0x280, 0x80, true, 0xd510829e531edcae)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MMINPAGE_SUPPORT.ReadOffset", read_offset, 0x300, 0x40, true, 0xe7cb5df2605c6a08)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kapc_state_t), "_MMINPAGE_SUPPORT.ApcState", apc_state, 0x340, 0x80, true, 0xc2f5338a0b12325e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_MMINPAGE_SUPPORT.Thread", thread, 0x4c0, 0x40, true, 0xa0e6cb46196a033c)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MMINPAGE_SUPPORT.LockedProtoPfn", locked_proto_pfn, 0x500, 0x40, true, 0xf97c64572939836a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t), "_MMINPAGE_SUPPORT.PteContents", pte_contents, 0x540, 0x40, true, 0x2c11fcc1ee2c8a0a)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MMINPAGE_SUPPORT.WaitCount", wait_count, 0x580, 0x20, true, 0xd6514298364bf659)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMINPAGE_SUPPORT.ByteCount", byte_count, 0x5c0, 0x20, true, 0xdd4a09e9b8112dcf)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMINPAGE_SUPPORT.ImagePteOffset", image_pte_offset, 0x5e0, 0x20, true, 0xf73331c52ea6efb7)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMINPAGE_SUPPORT.TossPage", toss_page, 0x5e0, 0x20, true, 0x5c5287706a6f3bd4)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mminpage_flags_t), "_MMINPAGE_SUPPORT.e1", e1, 0x600, 0x20, true, 0x74c6781edfc22c77)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMINPAGE_SUPPORT.LongFlags", long_flags, 0x600, 0x20, true, 0xc63c08243b9f4b69)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_MMINPAGE_SUPPORT.FilePointer", file_pointer, 0x640, 0x40, true, 0x2b54567bad975376)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::subsection_t*), "_MMINPAGE_SUPPORT.Subsection", subsection, 0x680, 0x40, true, 0xba6e7f5bebed5665)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMINPAGE_SUPPORT.FaultingAddress", faulting_address, 0x700, 0x40, true, 0x1787e717e01d1b26)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MMINPAGE_SUPPORT.PointerPte", pointer_pte, 0x740, 0x40, true, 0x5f9680ec1d21543f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MMINPAGE_SUPPORT.BasePte", base_pte, 0x780, 0x40, true, 0xf95f6ff0a6849ff)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MMINPAGE_SUPPORT.Pfn", pfn, 0x7c0, 0x40, true, 0xc272a62be676197d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_MMINPAGE_SUPPORT.PrefetchMdl", prefetch_mdl, 0x800, 0x40, true, 0x454e976fbd5eb216)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t), "_MMINPAGE_SUPPORT.Mdl", mdl, 0x880, 0x80, true, 0x23383e892cdab231)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 16>), "_MMINPAGE_SUPPORT.Page", page, 0xa00, 0x0, true, 0xb55f04e622f69dd8)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mminpage_support_flow_through_t), "_MMINPAGE_SUPPORT.FlowThrough", flow_through, 0xa00, 0xc0, true, 0x20a59ff45514bbd5)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_MMINPAGE_SUPPORT.SListEntry", s_list_entry, 0x0, 0x80, true, 0x1dcbc1e2d987c73b)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::hard_fault_state_t), "_MMINPAGE_SUPPORT.HardFaultState", hard_fault_state, 0x340, 0x80, true, 0xe7e6fcc159f75705)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MMINPAGE_SUPPORT.InjectRetry", inject_retry, 0x5a0, 0x20, true, 0x9c0e0b378da8931a)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpaging_file_t*), "_MMINPAGE_SUPPORT.PagingFile", paging_file, 0x640, 0x40, true, 0xef4d04f4f7169528)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_MMINPAGE_SUPPORT.ProbeCount", probe_count, 0x840, 0x40, true, 0xf2d40ce0ab84e9b4)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_MMINPAGE_SUPPORT.ControlArea", control_area, 0x680, 0x40, true, 0x98afbad7dec1ea46)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMINPAGE_SUPPORT.Autoboost", autoboost, 0x6c0, 0x40, true, 0x1182e3f64b51076b)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMINPAGE_SUPPORT.AutoBoostLock", auto_boost_lock, 0x0, 0x0, false, 0x2f592665eababa37)
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
#endif