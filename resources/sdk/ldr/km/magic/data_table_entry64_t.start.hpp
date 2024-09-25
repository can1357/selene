#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_KLDR_DATA_TABLE_ENTRY64.InLoadOrderLinks", in_load_order_links, 0x0, 0x80, true, 0x3055a575490bdc7e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KLDR_DATA_TABLE_ENTRY64.__Undefined1", undefined1, 0x80, 0x40, true, 0x210d10804e8c1add)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KLDR_DATA_TABLE_ENTRY64.__Undefined2", undefined2, 0xc0, 0x40, true, 0x7496f9503ba7d640)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KLDR_DATA_TABLE_ENTRY64.__Undefined3", undefined3, 0x100, 0x40, true, 0x20f32688dc3c5649)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KLDR_DATA_TABLE_ENTRY64.NonPagedDebugInfo", non_paged_debug_info, 0x140, 0x40, true, 0xe4c2f61a483d074b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KLDR_DATA_TABLE_ENTRY64.DllBase", dll_base, 0x180, 0x40, true, 0xd9b8cb6d3b6acee3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KLDR_DATA_TABLE_ENTRY64.EntryPoint", entry_point, 0x1c0, 0x40, true, 0xcefab29e758c8fd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY64.SizeOfImage", size_of_image, 0x200, 0x20, true, 0x6f78c8d71a19079d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_KLDR_DATA_TABLE_ENTRY64.FullDllName", full_dll_name, 0x240, 0x80, true, 0x69d71b30f34dbab)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_KLDR_DATA_TABLE_ENTRY64.BaseDllName", base_dll_name, 0x2c0, 0x80, true, 0x9d43e879268b5349)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY64.Flags", flags, 0x340, 0x20, true, 0xfd04a00467ef0ca8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KLDR_DATA_TABLE_ENTRY64.LoadCount", load_count, 0x360, 0x10, true, 0x588d9cd170c0c57)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KLDR_DATA_TABLE_ENTRY64.__Undefined5", undefined5, 0x370, 0x10, true, 0x6ef4f03f6c85c4ad)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KLDR_DATA_TABLE_ENTRY64.__Undefined6", undefined6, 0x380, 0x40, true, 0xaa29ff9da7c75b10)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY64.CheckSum", check_sum, 0x3c0, 0x20, true, 0xecfd691ca2ff4da0)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY64.__padding1", padding1, 0x3e0, 0x20, true, 0x7d6e9d7dbfd619b4)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY64.TimeDateStamp", time_date_stamp, 0x400, 0x20, true, 0x6b7acea301d97479)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY64.__padding2", padding2, 0x420, 0x20, true, 0xf14a1cdd799bf835)
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
#define _m16
#define _m17
#endif