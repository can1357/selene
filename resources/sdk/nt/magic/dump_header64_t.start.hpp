#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.Signature", signature, 0x0, 0x20, true, 0x81606dad4344f566)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.ValidDump", valid_dump, 0x20, 0x20, true, 0x2ffd1e4af5e5e8aa)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.MajorVersion", major_version, 0x40, 0x20, true, 0x6338097c69790115)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.MinorVersion", minor_version, 0x60, 0x20, true, 0x42a008012257efc6)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.DirectoryTableBase", directory_table_base, 0x80, 0x40, true, 0xb18aaeea7732fa19)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.PfnDataBase", pfn_data_base, 0xc0, 0x40, true, 0xa1495f398f216395)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.PsLoadedModuleList", ps_loaded_module_list, 0x100, 0x40, true, 0xc9f4e16f5f22cc8)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.PsActiveProcessHead", ps_active_process_head, 0x140, 0x40, true, 0xb05423cfa81fea87)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.MachineImageType", machine_image_type, 0x180, 0x20, true, 0x419438f01a520b6b)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.NumberProcessors", number_processors, 0x1a0, 0x20, true, 0x26c7d4c8f6ea3037)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.BugCheckCode", bug_check_code, 0x1c0, 0x20, true, 0x71157bd55e27474b)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.BugCheckParameter1", bug_check_parameter1, 0x200, 0x40, true, 0x9366f54a6ff05085)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.BugCheckParameter2", bug_check_parameter2, 0x240, 0x40, true, 0x7ec29db754b21aba)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.BugCheckParameter3", bug_check_parameter3, 0x280, 0x40, true, 0x934925f001b63c81)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.BugCheckParameter4", bug_check_parameter4, 0x2c0, 0x40, true, 0x2975c197b476befe)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_DUMP_HEADER64.VersionUser", version_user, 0x300, 0x0, true, 0xdbf45ccdae3ff958)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_HEADER64.KdDebuggerDataBlock", kd_debugger_data_block, 0x400, 0x40, true, 0xb36b423212eb8e03)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::physical_memory_descriptor64_t), "_DUMP_HEADER64.PhysicalMemoryBlock", physical_memory_block, 0x440, 0x0, true, 0xc91ff5d24e6835b7)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 700>), "_DUMP_HEADER64.PhysicalMemoryBlockBuffer", physical_memory_block_buffer, 0x440, 0xe0, true, 0xc696bc152380d742)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3000>), "_DUMP_HEADER64.ContextRecord", context_record, 0x1a40, 0xc0, true, 0x10046bbbf0d5f661)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::exception_record64_t), "_DUMP_HEADER64.Exception", exception, 0x7800, 0xc0, true, 0xc34630a5929537b5)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.DumpType", dump_type, 0x7cc0, 0x20, true, 0xa8691f59e15e0a39)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUMP_HEADER64.RequiredDumpSpace", required_dump_space, 0x7d00, 0x40, true, 0xf60702973d858706)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUMP_HEADER64.SystemTime", system_time, 0x7d40, 0x40, true, 0x682941612c47ff67)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_DUMP_HEADER64.Comment", comment, 0x7d80, 0x0, true, 0x5c22ca752f0cb051)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUMP_HEADER64.SystemUpTime", system_up_time, 0x8180, 0x40, true, 0x2ae3d1f8b8b2df42)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.MiniDumpFields", mini_dump_fields, 0x81c0, 0x20, true, 0x5dfd3b763a9e5503)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.SecondaryDataState", secondary_data_state, 0x81e0, 0x20, true, 0x8ed80e944e4b7524)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.ProductType", product_type, 0x8200, 0x20, true, 0x3e5747213ae955b0)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.SuiteMask", suite_mask, 0x8220, 0x20, true, 0xa85538d7f9486ab5)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER64.WriterStatus", writer_status, 0x8240, 0x20, true, 0x4b5662c7463f4c5)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4020>), "_DUMP_HEADER64._reserved0", reserved0, 0x8260, 0xa0, true, 0x71a8db14b4c296f)
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
#endif