#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_LDR_DATA_TABLE_ENTRY32.InLoadOrderLinks", in_load_order_links, 0x0, 0x40, true, 0xac9562c6dd9659fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_LDR_DATA_TABLE_ENTRY32.InMemoryOrderLinks", in_memory_order_links, 0x40, 0x40, true, 0xc9d0901c2c3f7733)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_LDR_DATA_TABLE_ENTRY32.InInitializationOrderLinks", in_initialization_order_links, 0x80, 0x40, true, 0xf913a769d743a6a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY32.DllBase", dll_base, 0xc0, 0x20, true, 0x6cc118b41d86dc3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY32.EntryPoint", entry_point, 0xe0, 0x20, true, 0x5748041f97823674)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY32.SizeOfImage", size_of_image, 0x100, 0x20, true, 0xf29827582b42f96e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view32), "_LDR_DATA_TABLE_ENTRY32.FullDllName", full_dll_name, 0x120, 0x40, true, 0xeedb952e8c4e1615)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view32), "_LDR_DATA_TABLE_ENTRY32.BaseDllName", base_dll_name, 0x160, 0x40, true, 0xe265ed04d0262f52)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY32.Flags", flags, 0x1a0, 0x20, true, 0x5fd44b5612bb928b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_DATA_TABLE_ENTRY32.LoadCount", load_count, 0x1c0, 0x10, true, 0x98f5b1eee14fb721)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_DATA_TABLE_ENTRY32.TlsIndex", tls_index, 0x1d0, 0x10, true, 0xe44de107fb772a84)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_LDR_DATA_TABLE_ENTRY32.HashLinks", hash_links, 0x1e0, 0x40, true, 0xe1a33b16485424e6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY32.SectionPointer", section_pointer, 0x1e0, 0x20, true, 0x8a52738705b35b8d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY32.CheckSum", check_sum, 0x200, 0x20, true, 0x8982afac4a5784e1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY32.TimeDateStamp", time_date_stamp, 0x220, 0x20, true, 0x99cbe31cc5401b6c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY32.LoadedImports", loaded_imports, 0x220, 0x20, true, 0xf9563966090234be)
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
#endif