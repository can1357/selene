#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_GENERAL_LOOKASIDE.ListHead", list_head, 0x0, 0x80, true, 0x6008f90648ab61ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_GENERAL_LOOKASIDE.SingleListHead", single_list_head, 0x0, 0x40, true, 0x9a3d0ac365a2983e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GENERAL_LOOKASIDE.Depth", depth, 0x80, 0x10, true, 0x500ffd9866ced40a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GENERAL_LOOKASIDE.MaximumDepth", maximum_depth, 0x90, 0x10, true, 0x66e189f13ceb3727)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.TotalAllocates", total_allocates, 0xa0, 0x20, true, 0x2b4b7216be49ca3a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.AllocateMisses", allocate_misses, 0xc0, 0x20, true, 0x97987dc254030d32)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.AllocateHits", allocate_hits, 0xc0, 0x20, true, 0xc7d5e64ba080f317)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.TotalFrees", total_frees, 0xe0, 0x20, true, 0xafefc941e7ca0ea1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.FreeMisses", free_misses, 0x100, 0x20, true, 0xd72da1954a48722d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.FreeHits", free_hits, 0x100, 0x20, true, 0x57e8f7d3743b9dcd)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "_GENERAL_LOOKASIDE.Type", type, 0x120, 0x20, true, 0x9a8048407035460c)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.Tag", tag, 0x140, 0x20, true, 0x74bca8da88ad9ef5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.Size", size, 0x160, 0x20, true, 0x1db0fd7172f394a1)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_function_ex_t ), "_GENERAL_LOOKASIDE.AllocateEx", allocate_ex, 0x180, 0x40, true, 0xcd57071a3aca796e)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_function_t ), "_GENERAL_LOOKASIDE.Allocate", allocate, 0x180, 0x40, true, 0x7e825b50f9b8b5e9)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfree_function_ex_t ), "_GENERAL_LOOKASIDE.FreeEx", free_ex, 0x1c0, 0x40, true, 0xb66a7cf1c8340c3c)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_GENERAL_LOOKASIDE.Free", free, 0x1c0, 0x40, true, 0x6945753c3662c191)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_GENERAL_LOOKASIDE.ListEntry", list_entry, 0x200, 0x80, true, 0x9307c2c288195464)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.LastTotalAllocates", last_total_allocates, 0x280, 0x20, true, 0xd05addc5e9ca093c)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.LastAllocateMisses", last_allocate_misses, 0x2a0, 0x20, true, 0xc8562051009fc03a)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERAL_LOOKASIDE.LastAllocateHits", last_allocate_hits, 0x2a0, 0x20, true, 0x6f6cb9fdf3b717c8)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_GENERAL_LOOKASIDE.Future", future, 0x2c0, 0x40, true, 0xb38a67ef56e10abe)
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