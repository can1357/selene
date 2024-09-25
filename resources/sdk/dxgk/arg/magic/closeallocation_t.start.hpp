#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CLOSEALLOCATION.NumAllocations", num_allocations, 0x0, 0x20, true, 0x202d4dbbe5438e5a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void**), "_DXGKARG_CLOSEALLOCATION.pOpenHandleList", p_open_handle_list, 0x40, 0x40, true, 0x84c4caf872b7a991)
#else
#define _m00
#define _m01
#endif