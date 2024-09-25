#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::local_segment_info_t*), "_HEAP_SUBSEGMENT.LocalInfo", local_info, 0x0, 0x40, true, 0x4343f40bef5610f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::userdata_header_t*), "_HEAP_SUBSEGMENT.UserBlocks", user_blocks, 0x40, 0x40, true, 0xc368f6e60a2abecb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_HEAP_SUBSEGMENT.DelayFreeList", delay_free_list, 0x80, 0x80, true, 0x60d94bde2939648c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ntdll::interlock_seq_t), "_HEAP_SUBSEGMENT.AggregateExchg", aggregate_exchg, 0x100, 0x20, true, 0x7ac8e8aba39fccab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint16_t), "_HEAP_SUBSEGMENT.BlockSize", block_size, 0x120, 0x10, true, 0xa8d67756dab8bddf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_SUBSEGMENT.Flags", flags, 0x130, 0x10, true, 0xbef0274c3339baf0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_SUBSEGMENT.BlockCount", block_count, 0x140, 0x10, true, 0x9b5ca4134c711448)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_SUBSEGMENT.SizeIndex", size_index, 0x150, 0x8, true, 0xa4a05912d75a3aee)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_SUBSEGMENT.AffinityIndex", affinity_index, 0x158, 0x8, true, 0xbd1e51a27adca345)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HEAP_SUBSEGMENT.Alignment", alignment, 0x120, 0x40, true, 0x13e6b96b789a939b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_HEAP_SUBSEGMENT.Lock", lock, 0x160, 0x20, true, 0xde1849af07ea08fb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_HEAP_SUBSEGMENT.SFreeListEntry", s_free_list_entry, 0x180, 0x40, true, 0x7d7a680a00e8b941)
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
#define _m09
#define _m10
#define _m11
#endif