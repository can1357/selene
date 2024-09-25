#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POOL_TRACKER_TABLE.Key", key, 0x0, 0x20, true, 0xcf401d52d842f76b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOL_TRACKER_TABLE.NonPagedBytes", non_paged_bytes, 0x40, 0x40, true, 0xd958df9dcf06f94b)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_POOL_TRACKER_TABLE.NonPagedAllocs", non_paged_allocs, 0x80, 0x40, true, 0xb9b0d5326cdfb159, 0, uint32_t,uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_POOL_TRACKER_TABLE.NonPagedFrees", non_paged_frees, 0xc0, 0x40, true, 0xd65a875b73159e42, 0, uint32_t,uint64_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOL_TRACKER_TABLE.PagedBytes", paged_bytes, 0x100, 0x40, true, 0x9ee774f27b116d3e)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_POOL_TRACKER_TABLE.PagedAllocs", paged_allocs, 0x140, 0x40, true, 0xac34b5282f2142ed, 0, uint32_t,uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_POOL_TRACKER_TABLE.PagedFrees", paged_frees, 0x180, 0x40, true, 0x994d21b3e49d6231, 0, uint32_t,uint64_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 2>), "_POOL_TRACKER_TABLE.AvailableLimit", available_limit, 0x0, 0x0, false, 0x13a76b422afc35f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pool_limit_table_entry_t*), "_POOL_TRACKER_TABLE.LimitInfo", limit_info, 0x0, 0x0, false, 0x1ead49aba1a75b11)
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
#endif