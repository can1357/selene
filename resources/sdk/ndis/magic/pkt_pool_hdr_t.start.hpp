#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PKT_POOL_HDR.List", list, 0x0, 0x80, true, 0x985bda62b94f702c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_PKT_POOL_HDR.TimeStamp", time_stamp, 0x80, 0x40, true, 0x215f881b212e3030)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_NDIS_PKT_POOL_HDR.FreeList", free_list, 0x100, 0x80, true, 0xc31f9ce3bd57255)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pool_block_type_t), "_NDIS_PKT_POOL_HDR.State", state, 0x180, 0x20, true, 0x7313a41d5ebf55c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif