#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PERFINFO_PAGE_RANGE_IDENTITY.UseDescription", use_description, 0x0, 0x4, true, 0xa48faa0e7fc4c750, 4, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_PERFINFO_PAGE_RANGE_IDENTITY.UniqueKey", unique_key, 0x4, 0x30, true, 0x9e4e80d95d12a55d, 48, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PAGE_RANGE_IDENTITY.ProtoPteAddress", proto_pte_address, 0x40, 0x40, true, 0xa5d3472d0a265081)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PAGE_RANGE_IDENTITY.PageFrameIndex", page_frame_index, 0x40, 0x40, true, 0xc50f2ac59554c724)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PAGE_RANGE_IDENTITY.VirtualAddress", virtual_address, 0x40, 0x40, true, 0x1dc4011d73371132)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PAGE_RANGE_IDENTITY.PageCount", page_count, 0x80, 0x40, true, 0x9b1ce28d9d06bccd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif