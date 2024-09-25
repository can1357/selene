#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PAGEHEAPS_INFORMATION.TotalSize", total_size, 0x0, 0x20, true, 0xa1fbebe0d5fee2a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PAGEHEAPS_INFORMATION.NumberPageHeaps", number_page_heaps, 0x20, 0x20, true, 0x2ec56bbade938dc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::verifier_pageheap_information_t, 1>), "_RTL_VERIFIER_PAGEHEAPS_INFORMATION.PageHeapInformation", page_heap_information, 0x40, 0xc0, true, 0x1a98b6eb13a27289)
#else
#define _m00
#define _m01
#define _m02
#endif