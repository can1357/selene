#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_GENERAL_LOOKASIDE_POOL.ListHead", list_head, 0x0, 0x80, true, 0x6ea3ec754b888c98)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_GENERAL_LOOKASIDE_POOL.SingleListHead", single_list_head, 0x0, 0x40, true, 0x9c0079a57d64cf62)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GENERAL_LOOKASIDE_POOL.Depth", depth, 0x80, 0x10, true, 0x187307ee00860272)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GENERAL_LOOKASIDE_POOL.MaximumDepth", maximum_depth, 0x90, 0x10, true, 0x165200fbce441a3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.TotalAllocates", total_allocates, 0xa0, 0x20, true, 0x9391e4b7c2d66e90)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.AllocateMisses", allocate_misses, 0xc0, 0x20, true, 0xcacc97ee86c566f7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.AllocateHits", allocate_hits, 0xc0, 0x20, true, 0x33150bcc6ec11a77)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.TotalFrees", total_frees, 0xe0, 0x20, true, 0x1055a1c69e154fe7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.FreeMisses", free_misses, 0x100, 0x20, true, 0xc6f27ab9425cbf71)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.FreeHits", free_hits, 0x100, 0x20, true, 0xbd058ecbb8ca6ead)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "_GENERAL_LOOKASIDE_POOL.Type", type, 0x120, 0x20, true, 0xa5b1f53f0e37cfb9)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.Tag", tag, 0x140, 0x20, true, 0xfcd2233a63cc9354)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.Size", size, 0x160, 0x20, true, 0xa72060a0dec9798b)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_function_ex_t ), "_GENERAL_LOOKASIDE_POOL.AllocateEx", allocate_ex, 0x180, 0x40, true, 0x404ac16b4c73b5c0)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_function_t ), "_GENERAL_LOOKASIDE_POOL.Allocate", allocate, 0x180, 0x40, true, 0x33ae1a3cb15ea578)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfree_function_ex_t ), "_GENERAL_LOOKASIDE_POOL.FreeEx", free_ex, 0x1c0, 0x40, true, 0x96983a1d5ebe050)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_GENERAL_LOOKASIDE_POOL.Free", free, 0x1c0, 0x40, true, 0xc01776e3b1d647b4)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_GENERAL_LOOKASIDE_POOL.ListEntry", list_entry, 0x200, 0x80, true, 0xeb5c7b910478ece)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.LastTotalAllocates", last_total_allocates, 0x280, 0x20, true, 0x410167e30579f555)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.LastAllocateMisses", last_allocate_misses, 0x2a0, 0x20, true, 0xf131606e4479e96f)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE_POOL.LastAllocateHits", last_allocate_hits, 0x2a0, 0x20, true, 0x3048119da9854c4f)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_GENERAL_LOOKASIDE_POOL.Future", future, 0x2c0, 0x40, true, 0xaf3204cd0837479f)
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
#endif