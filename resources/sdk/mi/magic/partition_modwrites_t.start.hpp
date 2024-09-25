#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpage_file_expansion_t), "_MI_PARTITION_MODWRITES.AttemptForCantExtend", attempt_for_cant_extend, 0x0, 0xc0, true, 0xed678e92c9c038f6)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpage_file_expansion_t), "_MI_PARTITION_MODWRITES.PageFileContract", page_file_contract, 0x2c0, 0xc0, true, 0xf4a7a643012601f5)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_MODWRITES.NumberOfMappedMdls", number_of_mapped_mdls, 0x580, 0x40, true, 0x40dc452365b0b1f9)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_MODWRITES.NumberOfMappedMdlsInUse", number_of_mapped_mdls_in_use, 0x5c0, 0x20, true, 0xa87f9e52c07c661e)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_MODWRITES.NumberOfMappedMdlsInUsePeak", number_of_mapped_mdls_in_use_peak, 0x5e0, 0x20, true, 0x3a188ee7d0e4341)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmmod_writer_listhead_t), "_MI_PARTITION_MODWRITES.MappedFileHeader", mapped_file_header, 0x600, 0x40, true, 0x7ba79947a519f39d)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_MODWRITES.NeedMappedMdl", need_mapped_mdl, 0x740, 0x8, true, 0xa227a47591813e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_MODWRITES.NeedPageFileMdl", need_page_file_mdl, 0x748, 0x8, true, 0x5e50dfb4fc5ba15e)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_MODWRITES.TransitionInserted", transition_inserted, 0x758, 0x8, true, 0x72a2f8bf7c61dfa1)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PARTITION_MODWRITES.LastModifiedWriteError", last_modified_write_error, 0x760, 0x20, true, 0x715d77fe432afb85)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PARTITION_MODWRITES.LastMappedWriteError", last_mapped_write_error, 0x780, 0x20, true, 0x9eb82d793bf4f4ef)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MI_PARTITION_MODWRITES.MappedFileWriteSucceeded", mapped_file_write_succeeded, 0x7a0, 0x20, true, 0x5ece2a1b3c2fee)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_MODWRITES.MappedWriteBurstCount", mapped_write_burst_count, 0x7c0, 0x20, true, 0x668991fbf8350bf3)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_MODWRITES.LowPriorityModWritesOutstanding", low_priority_mod_writes_outstanding, 0x7e0, 0x20, true, 0xdff06e63c77a71e3)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_MODWRITES.BoostModWriteIoPriorityEvent", boost_mod_write_io_priority_event, 0x800, 0xc0, true, 0x2b5dd2716bf3107a)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PARTITION_MODWRITES.ModifiedWriterThreadPriority", modified_writer_thread_priority, 0x8c0, 0x20, true, 0x60a7bf4b2d6ee739)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_MODWRITES.ModifiedPagesLowPriorityGoal", modified_pages_low_priority_goal, 0x900, 0x40, true, 0x175c23efdc2e490d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_MODWRITES.ModifiedPageWriterEvent", modified_page_writer_event, 0x940, 0xc0, true, 0x484d24a70bdf7814)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_MODWRITES.ModifiedWriterExitedEvent", modified_writer_exited_event, 0xa00, 0xc0, true, 0xbc4b646031ee0c3)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_MODWRITES.WriteAllPagefilePages", write_all_pagefile_pages, 0xac0, 0x20, true, 0x2c4f94a50147547a)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_MODWRITES.WriteAllMappedPages", write_all_mapped_pages, 0xae0, 0x20, true, 0x7257d1f05ba25ae6)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_MODWRITES.MappedPageWriterEvent", mapped_page_writer_event, 0xb00, 0xc0, true, 0xd41a91d2462e0e75)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::modwrite_data_t), "_MI_PARTITION_MODWRITES.ModWriteData", mod_write_data, 0xbc0, 0x0, true, 0x1bc0a46b7803e54)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_MODWRITES.RescanPageFilesEvent", rescan_page_files_event, 0xdc0, 0xc0, true, 0xd172768f0af42c2f)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmmod_writer_listhead_t), "_MI_PARTITION_MODWRITES.PagingFileHeader", paging_file_header, 0xe80, 0x40, true, 0xb70566b3d390ef5f)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_MI_PARTITION_MODWRITES.ModifiedPageWriterThread", modified_page_writer_thread, 0xfc0, 0x40, true, 0x2e3b0d02153b63a9)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_MI_PARTITION_MODWRITES.ModifiedPageWriterRundown", modified_page_writer_rundown, 0x1000, 0x40, true, 0xa348f7871f69d3a9)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_PARTITION_MODWRITES.PagefileScanWorkItem", pagefile_scan_work_item, 0x1040, 0x0, true, 0xc14d8f33f807f0ef)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_MODWRITES.PagefileScanCount", pagefile_scan_count, 0x1140, 0x20, true, 0x894a68d7b0707bcc)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_MODWRITES.NotifyStoreMemoryConditions", notify_store_memory_conditions, 0x11c0, 0xc0, true, 0x43e83d8a27ad62e2)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_MI_PARTITION_MODWRITES.DelayMappedWrite", delay_mapped_write, 0x1280, 0x8, true, 0xde557766bc39110a)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MI_PARTITION_MODWRITES.PagefileReservationsEnabled", pagefile_reservations_enabled, 0x12a0, 0x20, true, 0x11e3bdfcb4aac040)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_PARTITION_MODWRITES.PageFileCreationLock", page_file_creation_lock, 0x12c0, 0x40, true, 0x857502ee92041594)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_PARTITION_MODWRITES.TrimPagefileWorkItem", trim_pagefile_work_item, 0x1300, 0x0, true, 0xbb8b549a6ce0733c)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_MODWRITES.LastTrimPagefileTime", last_trim_pagefile_time, 0x1400, 0x40, true, 0xd786b7eb692ba25b)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_PARTITION_MODWRITES.WsSwapPagefileContractWorkItem", ws_swap_pagefile_contract_work_item, 0x1440, 0x0, true, 0xdc0dce9a5ae88229)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_MODWRITES.WsSwapPageFileContractionInProgress", ws_swap_page_file_contraction_in_progress, 0x1540, 0x20, true, 0x57b25cb1ed14ce56)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_PARTITION_MODWRITES.WorkingSetSwapLock", working_set_swap_lock, 0x1580, 0x40, true, 0x9022c1d07d28e845)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_MODWRITES.WorkingSetInswapLock", working_set_inswap_lock, 0x15c0, 0x20, true, 0x51a0019162cad820)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_MODWRITES.ModwriterActive", modwriter_active, 0x750, 0x8, true, 0xeb272369928d3af)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_MODWRITES.ClusterRestrictionLock", cluster_restriction_lock, 0x1160, 0x20, true, 0xc262fc641bfb6f30)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::restricted_modwrites_t, 2>), "_MI_PARTITION_MODWRITES.ClusterRestrictions", cluster_restrictions, 0x1180, 0x30, true, 0xbc68bb69a9bfb6fb)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<volatile int32_t, 2>), "_MI_PARTITION_MODWRITES.ClusterWritesDisabled", cluster_writes_disabled, 0x0, 0x0, false, 0x39d5eb59153e8b05)
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
#define _m041
#define _m042
#endif