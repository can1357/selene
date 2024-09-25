#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.ActiveResourceCount", active_resource_count, 0x0, 0x20, true, 0x51c96b4382e4303f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.TotalResourceCount", total_resource_count, 0x20, 0x20, true, 0xa33ac4c2396c1670)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.ExclusiveAcquire", exclusive_acquire, 0x40, 0x20, true, 0xe1086a2c1e4ddc27)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.SharedFirstLevel", shared_first_level, 0x60, 0x20, true, 0x66c6daed4d341a8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.SharedSecondLevel", shared_second_level, 0x80, 0x20, true, 0x510680922f46d83b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.StarveFirstLevel", starve_first_level, 0xa0, 0x20, true, 0x65e348dbfa26edef)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.StarveSecondLevel", starve_second_level, 0xc0, 0x20, true, 0x6a493a6cb1b68a2d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.WaitForExclusive", wait_for_exclusive, 0xe0, 0x20, true, 0xa2e6129d2bfa83e9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.OwnerTableExpands", owner_table_expands, 0x100, 0x20, true, 0xbd155cd1c2d3039e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_PERFORMANCE_DATA.MaximumTableExpand", maximum_table_expand, 0x120, 0x20, true, 0xfc6c1eabbe493d51)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 64>), "_RESOURCE_PERFORMANCE_DATA.HashTable", hash_table, 0x140, 0x0, true, 0x4caafa25cf811f22)
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
#endif