#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_LFH_SUBSEGMENT.ListEntry", list_entry, 0x0, 0x80, true, 0xfa58999b7762eead)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_subsegment_owner_t*), "_HEAP_LFH_SUBSEGMENT.Owner", owner, 0x80, 0x40, true, 0x33882ff798fc2536)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union heap::lfh_subsegment_delay_free_t), "_HEAP_LFH_SUBSEGMENT.DelayFree", delay_free, 0x80, 0x40, true, 0x833def6d595250a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::srwlock_t, uint64_t>), "_HEAP_LFH_SUBSEGMENT.CommitLock", commit_lock, 0xc0, 0x40, true, 0x209ede59a2877be0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LFH_SUBSEGMENT.FreeCount", free_count, 0x100, 0x10, true, 0x97661932e232586a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LFH_SUBSEGMENT.BlockCount", block_count, 0x110, 0x10, true, 0xce99e7c0f4fb69d7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int16_t), "_HEAP_LFH_SUBSEGMENT.InterlockedShort", interlocked_short, 0x100, 0x10, true, 0xa2ae6041e53b7d50)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_HEAP_LFH_SUBSEGMENT.InterlockedLong", interlocked_long, 0x100, 0x20, true, 0x67677050ced00930)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LFH_SUBSEGMENT.FreeHint", free_hint, 0x120, 0x10, true, 0x950847c97f1595d0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT.Location", location, 0x130, 0x8, true, 0x77d8b1e57b5aafda)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_subsegment_encoded_offsets_t), "_HEAP_LFH_SUBSEGMENT.BlockOffsets", block_offsets, 0x140, 0x20, true, 0x4dd4ed8324fe4b6b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT.CommitUnitShift", commit_unit_shift, 0x160, 0x8, true, 0x6be2597a62ef652d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT.CommitUnitCount", commit_unit_count, 0x168, 0x8, true, 0x52f4d38d62ed475e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LFH_SUBSEGMENT.CommitStateOffset", commit_state_offset, 0x170, 0x10, true, 0xd2408e96735445c9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_HEAP_LFH_SUBSEGMENT.BlockBitmap", block_bitmap, 0x180, 0x40, true, 0xdc22c09c9d42db5c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT.WitheldBlockCount", witheld_block_count, 0x138, 0x8, true, 0xd37e4a8e15af6c8c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_HEAP_LFH_SUBSEGMENT.Link", link, 0x0, 0x0, false, 0x34884371565dc379)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif