#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_KLDR_DATA_TABLE_ENTRY32.InLoadOrderLinks", in_load_order_links, 0x0, 0x40, true, 0xcd905ed8dfe0d27f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.__Undefined1", undefined1, 0x40, 0x20, true, 0x94138508bd41657)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.__Undefined2", undefined2, 0x60, 0x20, true, 0xe786982bc0718010)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.__Undefined3", undefined3, 0x80, 0x20, true, 0x6c168140f47a82ec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.NonPagedDebugInfo", non_paged_debug_info, 0xa0, 0x20, true, 0x3acd1d70389c6a61)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.DllBase", dll_base, 0xc0, 0x20, true, 0x66933570129dd572)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.EntryPoint", entry_point, 0xe0, 0x20, true, 0xcc43ed7e2c000ef9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.SizeOfImage", size_of_image, 0x100, 0x20, true, 0x1d07daca8a29b7d5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view32), "_KLDR_DATA_TABLE_ENTRY32.FullDllName", full_dll_name, 0x120, 0x40, true, 0x276beea47a22ce38)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view32), "_KLDR_DATA_TABLE_ENTRY32.BaseDllName", base_dll_name, 0x160, 0x40, true, 0xdfb6a35930e5f22e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.Flags", flags, 0x1a0, 0x20, true, 0xac56de8d60ba46ab)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KLDR_DATA_TABLE_ENTRY32.LoadCount", load_count, 0x1c0, 0x10, true, 0x4be77113bf844ddc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KLDR_DATA_TABLE_ENTRY32.__Undefined5", undefined5, 0x1d0, 0x10, true, 0xd1ddad3d03bdcf8a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.__Undefined6", undefined6, 0x1e0, 0x20, true, 0xdb534a05196935fc)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.CheckSum", check_sum, 0x200, 0x20, true, 0x52e3e2f0e9621fb6)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY32.TimeDateStamp", time_date_stamp, 0x220, 0x20, true, 0xa5b440c91ca57466)
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