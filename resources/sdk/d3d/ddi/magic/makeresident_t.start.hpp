#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_MAKERESIDENT.hPagingQueue", h_paging_queue, 0x0, 0x20, true, 0xa55e7d7c80934441)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_MAKERESIDENT.NumAllocations", num_allocations, 0x20, 0x20, true, 0xdf15ae2c65b8eeb4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "D3DDDI_MAKERESIDENT.AllocationList", allocation_list, 0x40, 0x40, true, 0x94d36762fd63bd3b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "D3DDDI_MAKERESIDENT.PriorityList", priority_list, 0x80, 0x40, true, 0x3d3c4eba56014832)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::makeresident_flags_t), "D3DDDI_MAKERESIDENT.Flags", flags, 0xc0, 0x20, true, 0x1f0b5a39a5c181ac)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAKERESIDENT.PagingFenceValue", paging_fence_value, 0x100, 0x40, true, 0xedc286642e848e67)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAKERESIDENT.NumBytesToTrim", num_bytes_to_trim, 0x140, 0x40, true, 0x1135ee91ace1ba4f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif