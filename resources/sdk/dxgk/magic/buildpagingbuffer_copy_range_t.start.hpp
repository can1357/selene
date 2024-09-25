#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_COPY_RANGE.NumPageTableEntries", num_page_table_entries, 0x0, 0x20, true, 0xd1c6282f4de09b27)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_COPY_RANGE.SrcPageTableAddress", src_page_table_address, 0x40, 0x40, true, 0x915ab8e3cf605e21)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_COPY_RANGE.DstPageTableAddress", dst_page_table_address, 0x80, 0x40, true, 0x12cf7843e8323d8b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_COPY_RANGE.SrcStartPteIndex", src_start_pte_index, 0xc0, 0x20, true, 0x311bdea0ecc29a34)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_COPY_RANGE.DstStartPteIndex", dst_start_pte_index, 0xe0, 0x20, true, 0xeed14ddb92d02d4a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif