#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.ServicePackBuild", service_pack_build, 0x0, 0x20, true, 0xad21d26dce6501b1)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.SizeOfDump", size_of_dump, 0x20, 0x20, true, 0xccd669fb2a93f63f)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.ValidOffset", valid_offset, 0x40, 0x20, true, 0x2af7b5e176c637f0)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.ContextOffset", context_offset, 0x60, 0x20, true, 0x4cc879a74a81ba4a)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.ExceptionOffset", exception_offset, 0x80, 0x20, true, 0xfd481ba2aabfcdb6)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.MmOffset", mm_offset, 0xa0, 0x20, true, 0xa0a4d534d61567a0)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.UnloadedDriversOffset", unloaded_drivers_offset, 0xc0, 0x20, true, 0x4ac0a8ce716491a1)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.PrcbOffset", prcb_offset, 0xe0, 0x20, true, 0xb21fa227b1f065bb)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.ProcessOffset", process_offset, 0x100, 0x20, true, 0xf590e3c36d32239e)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.ThreadOffset", thread_offset, 0x120, 0x20, true, 0x3a2fd80b4c4dc180)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.CallStackOffset", call_stack_offset, 0x140, 0x20, true, 0x4583af6f10da91f0)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.SizeOfCallStack", size_of_call_stack, 0x160, 0x20, true, 0xba47f4da0af067aa)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DriverListOffset", driver_list_offset, 0x180, 0x20, true, 0xbae02022c62b811d)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DriverCount", driver_count, 0x1a0, 0x20, true, 0x8f36c131742722d3)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.StringPoolOffset", string_pool_offset, 0x1c0, 0x20, true, 0xbc4d301199d5d2b5)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.StringPoolSize", string_pool_size, 0x1e0, 0x20, true, 0xc571ae4acdf5cfa)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.BrokenDriverOffset", broken_driver_offset, 0x200, 0x20, true, 0xd80481d290709709)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.TriageOptions", triage_options, 0x220, 0x20, true, 0xa39d5562e2b34b4c)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.TopOfStack", top_of_stack, 0x240, 0x20, true, 0x396d3c027003b1db)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DataPageAddress", data_page_address, 0x260, 0x20, true, 0x355845151a384487)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DataPageOffset", data_page_offset, 0x280, 0x20, true, 0x83290a509d7057ff)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DataPageSize", data_page_size, 0x2a0, 0x20, true, 0xb0147cdd6fee2fd7)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DebuggerDataOffset", debugger_data_offset, 0x2c0, 0x20, true, 0xf1212debc4d7580b)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DebuggerDataSize", debugger_data_size, 0x2e0, 0x20, true, 0xb98588996b4c6bc9)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DataBlocksOffset", data_blocks_offset, 0x300, 0x20, true, 0x17c6f375504e72e3)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP32.DataBlocksCount", data_blocks_count, 0x320, 0x20, true, 0x18d4cb05ad30805f)
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
#endif