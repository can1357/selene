#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_HANDLE_TABLE_ENTRY.VolatileLowValue", volatile_low_value, 0x0, 0x40, true, 0xd8abe157206acc05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HANDLE_TABLE_ENTRY.LowValue", low_value, 0x0, 0x40, true, 0x4e9672d0f43073c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::handle_table_entry_info_t volatile*), "_HANDLE_TABLE_ENTRY.InfoTable", info_table, 0x0, 0x40, true, 0x989d6dddb2430995)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HANDLE_TABLE_ENTRY.HighValue", high_value, 0x40, 0x40, true, 0x6dcb930705bee107)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::handle_table_entry_t*), "_HANDLE_TABLE_ENTRY.NextFreeHandleEntry", next_free_handle_entry, 0x40, 0x40, true, 0xf17c1ef48a0645b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exhandle_t), "_HANDLE_TABLE_ENTRY.LeafHandleValue", leaf_handle_value, 0x40, 0x40, true, 0x9494dc93bca27327)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HANDLE_TABLE_ENTRY.RefCountField", ref_count_field, 0x0, 0x40, true, 0x338cbb2ba2257bae)
#define _m07 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_HANDLE_TABLE_ENTRY.Unlocked", unlocked, 0x0, 0x1, true, 0xe94b3e9f021b482a, 1, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint16_t), "_HANDLE_TABLE_ENTRY.RefCnt", ref_cnt, 0x1, 0x10, true, 0x227f054c470083e4, 16, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint3_t), "_HANDLE_TABLE_ENTRY.Attributes", attributes, 0x11, 0x3, true, 0x23d91f1f98973d9c, 3, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint44_t), "_HANDLE_TABLE_ENTRY.ObjectPointerBits", object_pointer_bits, 0x14, 0x2c, true, 0x63a8a9b3106332b2, 44, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint25_t), "_HANDLE_TABLE_ENTRY.GrantedAccessBits", granted_access_bits, 0x40, 0x19, true, 0x4d631732bf595796, 25, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HANDLE_TABLE_ENTRY.NoRightsUpgrade", no_rights_upgrade, 0x59, 0x1, true, 0x61b8daff509fd035, 1, uint32_t)
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
#endif