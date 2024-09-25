#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_LDR_DATA_TABLE_ENTRY64.InLoadOrderLinks", in_load_order_links, 0x0, 0x80, true, 0x9b29677a3e447a3e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_LDR_DATA_TABLE_ENTRY64.InMemoryOrderLinks", in_memory_order_links, 0x80, 0x80, true, 0x9b25d4b6eae7053)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_LDR_DATA_TABLE_ENTRY64.InInitializationOrderLinks", in_initialization_order_links, 0x100, 0x80, true, 0x47748fd519e4e996)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_DATA_TABLE_ENTRY64.DllBase", dll_base, 0x180, 0x40, true, 0xf3c123a436271faa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_DATA_TABLE_ENTRY64.EntryPoint", entry_point, 0x1c0, 0x40, true, 0xf7c9e3a810e0009c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY64.SizeOfImage", size_of_image, 0x200, 0x20, true, 0xdde5ab86c44b1271)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_LDR_DATA_TABLE_ENTRY64.FullDllName", full_dll_name, 0x240, 0x80, true, 0x5bb708e5e28a5f82)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_LDR_DATA_TABLE_ENTRY64.BaseDllName", base_dll_name, 0x2c0, 0x80, true, 0x46d00c2e3a2ba086)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY64.Flags", flags, 0x340, 0x20, true, 0xef1c3310b4a029fd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_DATA_TABLE_ENTRY64.LoadCount", load_count, 0x360, 0x10, true, 0x91b2b715bcd29e5f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_DATA_TABLE_ENTRY64.TlsIndex", tls_index, 0x370, 0x10, true, 0xca048bf98a950be7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_LDR_DATA_TABLE_ENTRY64.HashLinks", hash_links, 0x380, 0x80, true, 0x53269f58095c6812)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_DATA_TABLE_ENTRY64.SectionPointer", section_pointer, 0x380, 0x40, true, 0xb98995107b143ac0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY64.CheckSum", check_sum, 0x3c0, 0x20, true, 0xc706d0cb7a40eb89)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY64.TimeDateStamp", time_date_stamp, 0x400, 0x20, true, 0x18dab84300b5ac4a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_DATA_TABLE_ENTRY64.LoadedImports", loaded_imports, 0x400, 0x40, true, 0xb33e291c6f294e)
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