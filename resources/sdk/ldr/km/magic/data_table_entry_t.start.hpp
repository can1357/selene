#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KLDR_DATA_TABLE_ENTRY.InLoadOrderLinks", in_load_order_links, 0x0, 0x80, true, 0xa59be6730b1f2e86)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KLDR_DATA_TABLE_ENTRY.ExceptionTable", exception_table, 0x80, 0x40, true, 0xf47b69cfc47b8ca0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY.ExceptionTableSize", exception_table_size, 0xc0, 0x20, true, 0x3a8bf36af3e4ab43)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KLDR_DATA_TABLE_ENTRY.GpValue", gp_value, 0x100, 0x40, true, 0x86b6632255bb848d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::non_paged_debug_info_t*), "_KLDR_DATA_TABLE_ENTRY.NonPagedDebugInfo", non_paged_debug_info, 0x140, 0x40, true, 0xd24ab83f4ad568a1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KLDR_DATA_TABLE_ENTRY.DllBase", dll_base, 0x180, 0x40, true, 0xef6f7d99b9d5b52b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KLDR_DATA_TABLE_ENTRY.EntryPoint", entry_point, 0x1c0, 0x40, true, 0x167e3a5cbe63d993)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY.SizeOfImage", size_of_image, 0x200, 0x20, true, 0x3d67d3768b006eb6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_KLDR_DATA_TABLE_ENTRY.FullDllName", full_dll_name, 0x240, 0x80, true, 0xb44d5c485fe7cff1)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_KLDR_DATA_TABLE_ENTRY.BaseDllName", base_dll_name, 0x2c0, 0x80, true, 0xdc3230c8893ce05c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY.Flags", flags, 0x340, 0x20, true, 0x807f38b9bb8dd050)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KLDR_DATA_TABLE_ENTRY.LoadCount", load_count, 0x360, 0x10, true, 0x49a520cc033df70b)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_KLDR_DATA_TABLE_ENTRY.SignatureLevel", signature_level, 0x370, 0x4, true, 0x1e1442a8e72835ab, 4, uint16_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KLDR_DATA_TABLE_ENTRY.SignatureType", signature_type, 0x374, 0x3, true, 0x7371980429d8e7a7, 3, uint16_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KLDR_DATA_TABLE_ENTRY.EntireField", entire_field, 0x370, 0x10, true, 0x22aba585de515716)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KLDR_DATA_TABLE_ENTRY.SectionPointer", section_pointer, 0x380, 0x40, true, 0x941cf293bba94901)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY.CheckSum", check_sum, 0x3c0, 0x20, true, 0xe522d328b5759d4)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY.CoverageSectionSize", coverage_section_size, 0x3e0, 0x20, true, 0x97ea00852c272450)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KLDR_DATA_TABLE_ENTRY.CoverageSection", coverage_section, 0x400, 0x40, true, 0x320273cd242df41e)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KLDR_DATA_TABLE_ENTRY.LoadedImports", loaded_imports, 0x440, 0x40, true, 0x6f57744098f2daaf)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY.SizeOfImageNotRounded", size_of_image_not_rounded, 0x4c0, 0x20, true, 0x94f2c7ae093f4a58)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLDR_DATA_TABLE_ENTRY.TimeDateStamp", time_date_stamp, 0x4e0, 0x20, true, 0xa0b2f7586580b0fc)
#define _m22 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_KLDR_DATA_TABLE_ENTRY.Frozen", frozen, 0x377, 0x2, true, 0x9b186ec4ba4cdefc, 2, uint16_t)
#define _m23 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLDR_DATA_TABLE_ENTRY.HotPatch", hot_patch, 0x379, 0x1, true, 0xd33ded21d30a69b2, 1, uint16_t)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::km::data_table_entry_t*), "_KLDR_DATA_TABLE_ENTRY.NtDataTableEntry", nt_data_table_entry, 0x480, 0x40, true, 0xd79582f6f2b1a28b)
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
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif