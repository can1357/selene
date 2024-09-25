#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_subsegment_owner_t), "_HEAP_LFH_BUCKET.State", state, 0x0, 0xc0, true, 0x415e22b93cdaa89)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_LFH_BUCKET.TotalBlockCount", total_block_count, 0x1c0, 0x40, true, 0x3068213ab9786bc7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_LFH_BUCKET.TotalSubsegmentCount", total_subsegment_count, 0x200, 0x40, true, 0x8d68b43bc28eaca2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LFH_BUCKET.ReciprocalBlockSize", reciprocal_block_size, 0x240, 0x20, true, 0xb07bce775120e0b9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_BUCKET.Shift", shift, 0x260, 0x8, true, 0x5a1f1767cc93a12e)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_HEAP_LFH_BUCKET.ContentionCount", contention_count, 0x268, 0x8, true, 0x3f6809f30ac14b54, 0, uint32_t,uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::srwlock_t, uint64_t>), "_HEAP_LFH_BUCKET.AffinityMappingLock", affinity_mapping_lock, 0x280, 0x40, true, 0xbb25d4e22a2b16ae)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_HEAP_LFH_BUCKET.ProcAffinityMapping", proc_affinity_mapping, 0x2c0, 0x40, true, 0xd26abb6a408ba5bc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_affinity_slot_t**), "_HEAP_LFH_BUCKET.AffinitySlots", affinity_slots, 0x300, 0x40, true, 0x9be4486a683b5457)
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