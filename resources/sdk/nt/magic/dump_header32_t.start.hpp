#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.Signature", signature, 0x0, 0x20, true, 0x8ba08829c9657764)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.ValidDump", valid_dump, 0x20, 0x20, true, 0xbfa04f3ec3788673)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.MajorVersion", major_version, 0x40, 0x20, true, 0x62107788d98c7b01)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.MinorVersion", minor_version, 0x60, 0x20, true, 0x7a3a394719f402be)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.DirectoryTableBase", directory_table_base, 0x80, 0x20, true, 0x234f857b66b35a84)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.PfnDataBase", pfn_data_base, 0xa0, 0x20, true, 0x83baa5210525dba1)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.PsLoadedModuleList", ps_loaded_module_list, 0xc0, 0x20, true, 0xf1611e7125457fb9)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.PsActiveProcessHead", ps_active_process_head, 0xe0, 0x20, true, 0x231eca2668058684)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.MachineImageType", machine_image_type, 0x100, 0x20, true, 0x2b4af2a134dc8e8a)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.NumberProcessors", number_processors, 0x120, 0x20, true, 0x53c3bb3fc820fa96)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.BugCheckCode", bug_check_code, 0x140, 0x20, true, 0xc568233bac72bb2a)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.BugCheckParameter1", bug_check_parameter1, 0x160, 0x20, true, 0xe91bd0a7bae83de9)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.BugCheckParameter2", bug_check_parameter2, 0x180, 0x20, true, 0x4bde2fadcbe005c2)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.BugCheckParameter3", bug_check_parameter3, 0x1a0, 0x20, true, 0x466e6093cfa6c78d)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.BugCheckParameter4", bug_check_parameter4, 0x1c0, 0x20, true, 0x4cc14aadc21759ff)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_DUMP_HEADER32.VersionUser", version_user, 0x1e0, 0x0, true, 0xc3006b970ab1e4e7)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUMP_HEADER32.PaeEnabled", pae_enabled, 0x2e0, 0x8, true, 0x1676a95cd4c5cbd2)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.KdDebuggerDataBlock", kd_debugger_data_block, 0x300, 0x20, true, 0x6a02e3dbd928ac9d)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::physical_memory_descriptor32_t), "_DUMP_HEADER32.PhysicalMemoryBlock", physical_memory_block, 0x320, 0x80, true, 0xd75a8440d8b6db05)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 700>), "_DUMP_HEADER32.PhysicalMemoryBlockBuffer", physical_memory_block_buffer, 0x320, 0xe0, true, 0xfe210c0f2d08f313)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1200>), "_DUMP_HEADER32.ContextRecord", context_record, 0x1900, 0x80, true, 0xb2ee7613149b51d9)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::exception_record32_t), "_DUMP_HEADER32.Exception", exception, 0x3e80, 0x80, true, 0xb2bf5c89fb4e9633)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_DUMP_HEADER32.Comment", comment, 0x4100, 0x0, true, 0x538f996a08b37188)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1768>), "_DUMP_HEADER32._reserved0", reserved0, 0x4500, 0x40, true, 0x65ae0502759e8972)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.DumpType", dump_type, 0x7c40, 0x20, true, 0xcc9c13ef62dd5dcb)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.MiniDumpFields", mini_dump_fields, 0x7c60, 0x20, true, 0x62a6073cf94f136d)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.SecondaryDataState", secondary_data_state, 0x7c80, 0x20, true, 0xc833308ac0c78640)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.ProductType", product_type, 0x7ca0, 0x20, true, 0x464bbbddc8c68320)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.SuiteMask", suite_mask, 0x7cc0, 0x20, true, 0xabc7eec15a088400)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_HEADER32.WriterStatus", writer_status, 0x7ce0, 0x20, true, 0x9824db17ba6ba5f4)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUMP_HEADER32.RequiredDumpSpace", required_dump_space, 0x7d00, 0x40, true, 0xcef7889f52a7ad55)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DUMP_HEADER32._reserved2", reserved2, 0x7d40, 0x80, true, 0x15830b22a344804a)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUMP_HEADER32.SystemUpTime", system_up_time, 0x7dc0, 0x40, true, 0x4c64c523b186b83d)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUMP_HEADER32.SystemTime", system_time, 0x7e00, 0x40, true, 0xf46d4d2c34f2ab65)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 56>), "_DUMP_HEADER32._reserved3", reserved3, 0x7e40, 0xc0, true, 0xa6ed78d104d39676)
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
#endif