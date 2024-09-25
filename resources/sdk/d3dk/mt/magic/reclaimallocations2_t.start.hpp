#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RECLAIMALLOCATIONS2.hPagingQueue", h_paging_queue, 0x0, 0x20, true, 0x1b2513357442a268)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RECLAIMALLOCATIONS2.NumAllocations", num_allocations, 0x20, 0x20, true, 0x21b061c1ad8409bf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_RECLAIMALLOCATIONS2.pResources", p_resources, 0x40, 0x40, true, 0xf508becd3b8a6f14)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_RECLAIMALLOCATIONS2.HandleList", handle_list, 0x80, 0x40, true, 0xe091429659abe7a7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "_D3DKMT_RECLAIMALLOCATIONS2.pDiscarded", p_discarded, 0xc0, 0x40, true, 0x698bb08bb1a49675)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::reclaim_result_t*), "_D3DKMT_RECLAIMALLOCATIONS2.pResults", p_results, 0xc0, 0x40, true, 0xfb826f8e09c6cfc7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_RECLAIMALLOCATIONS2.PagingFenceValue", paging_fence_value, 0x100, 0x40, true, 0xca6d1efd68824777)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif