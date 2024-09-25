#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.ServicePackBuild", service_pack_build, 0x0, 0x20, true, 0xee7ce12cf4b92c60)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.SizeOfDump", size_of_dump, 0x20, 0x20, true, 0x2a92a118fdc253ce)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.ValidOffset", valid_offset, 0x40, 0x20, true, 0x9ad82a7921a077fc)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.ContextOffset", context_offset, 0x60, 0x20, true, 0x3bed4f0251f5497a)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.ExceptionOffset", exception_offset, 0x80, 0x20, true, 0x5c6ac865aa01eff8)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.MmOffset", mm_offset, 0xa0, 0x20, true, 0x73499fe3207559bb)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.UnloadedDriversOffset", unloaded_drivers_offset, 0xc0, 0x20, true, 0x2cddaa94d6624f4d)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.PrcbOffset", prcb_offset, 0xe0, 0x20, true, 0x88a342a66590c8ee)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.ProcessOffset", process_offset, 0x100, 0x20, true, 0x957511bf607dea9d)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.ThreadOffset", thread_offset, 0x120, 0x20, true, 0xfef7da1246ba7472)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.CallStackOffset", call_stack_offset, 0x140, 0x20, true, 0xd32b5b37655e9e1a)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.SizeOfCallStack", size_of_call_stack, 0x160, 0x20, true, 0xdff4be05879b4a88)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.DriverListOffset", driver_list_offset, 0x180, 0x20, true, 0x363fd407942af427)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.DriverCount", driver_count, 0x1a0, 0x20, true, 0x9699e50b97ef28a8)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.StringPoolOffset", string_pool_offset, 0x1c0, 0x20, true, 0x76978149325bffea)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.StringPoolSize", string_pool_size, 0x1e0, 0x20, true, 0x71bb8b8371cdb20b)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.BrokenDriverOffset", broken_driver_offset, 0x200, 0x20, true, 0x787d8368ecef5704)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.TriageOptions", triage_options, 0x220, 0x20, true, 0x234cbc7dfebe9cb3)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRIAGE_DUMP64.TopOfStack", top_of_stack, 0x240, 0x40, true, 0x20167a8a33aab123)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_architecture_specific_t), "_TRIAGE_DUMP64.ArchitectureSpecific", architecture_specific, 0x280, 0x80, true, 0xf0cf7927b1ee4c88)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRIAGE_DUMP64.DataPageAddress", data_page_address, 0x300, 0x40, true, 0xd490a04c770bb1be)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.DataPageOffset", data_page_offset, 0x340, 0x20, true, 0x4352854693eb2976)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.DataPageSize", data_page_size, 0x360, 0x20, true, 0xc4ba2f56fa0bc242)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.DebuggerDataOffset", debugger_data_offset, 0x380, 0x20, true, 0x848736efbcbcfa2c)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.DebuggerDataSize", debugger_data_size, 0x3a0, 0x20, true, 0x5e19ebd80fdba7ba)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.DataBlocksOffset", data_blocks_offset, 0x3c0, 0x20, true, 0x4b2c78a22a8b329e)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.DataBlocksCount", data_blocks_count, 0x3e0, 0x20, true, 0x2d45ab846a178f92)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.ArchitectureSpecific.Ia64.BStoreOffset", b_store_offset, 0x0, 0x20, true, 0xab0476721bb9162c)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DUMP64.ArchitectureSpecific.Ia64.SizeOfBStore", size_of_b_store, 0x20, 0x20, true, 0x9ed9f939ebde0b5f)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRIAGE_DUMP64.ArchitectureSpecific.Ia64.LimitOfBStore", limit_of_b_store, 0x40, 0x40, true, 0xa77e8a1077e2a5dc)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_ia64_t), "_TRIAGE_DUMP64.ArchitectureSpecific.Ia64", ia64, 0x0, 0x80, true, 0xa2b0213f1814a99a)
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
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m19
#define _m20
#define _m21
#define _m22
#endif