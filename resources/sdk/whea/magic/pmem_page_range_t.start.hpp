#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PMEM_PAGE_RANGE.StartingPfn", starting_pfn, 0x0, 0x40, true, 0xc20101588509dad)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PMEM_PAGE_RANGE.PageCount", page_count, 0x40, 0x40, true, 0x4b5d2dbcd6f9a04e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PMEM_PAGE_RANGE.MarkedBadBitmap", marked_bad_bitmap, 0x80, 0x40, true, 0xb700d9ddaeee0e8e)
#else
#define _m00
#define _m01
#define _m02
#endif