#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_internal_page_allocator_t), "CPageAllocator._pgalloc", pgalloc, 0x0, 0x80, true, 0xca3d5ef8bb472307)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CPageAllocator._hHeap", h_heap, 0x280, 0x40, true, 0x430a1da0d24a8c61)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CPageAllocator._cbPerEntry", cb_per_entry, 0x2c0, 0x40, true, 0x8004809eaec5d9c7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CPageAllocator._lNumEntries", l_num_entries, 0x300, 0x20, true, 0x1d7f007eda89204)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif