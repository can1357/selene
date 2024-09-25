#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "VACB_LEVEL_ALLOCATION_LIST.VacbLevelList", vacb_level_list, 0x0, 0x80, true, 0xb6ecbbad5500bb6b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "VACB_LEVEL_ALLOCATION_LIST.VacbLevelWithBcbListHeads", vacb_level_with_bcb_list_heads, 0x80, 0x40, true, 0x55fa9ec7773ba3aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "VACB_LEVEL_ALLOCATION_LIST.VacbLevelsAllocated", vacb_levels_allocated, 0xc0, 0x20, true, 0x70aad20eaf396921)
#else
#define _m00
#define _m01
#define _m02
#endif