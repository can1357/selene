#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LFH_SUBSEGMENT_OWNER.IsBucket", is_bucket, 0x0, 0x1, true, 0xd739a82dfb276f1, 1, uint8_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT_OWNER.BucketIndex", bucket_index, 0x8, 0x8, true, 0xaaeae077c25400f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT_OWNER.SlotCount", slot_count, 0x10, 0x8, true, 0xeae6d326d7d6d9a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT_OWNER.SlotIndex", slot_index, 0x10, 0x8, true, 0xdae0fbb6bb486e1a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_LFH_SUBSEGMENT_OWNER.AvailableSubsegmentCount", available_subsegment_count, 0x40, 0x40, true, 0x8f807f19b8413e82)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::srwlock_t, uint64_t>), "_HEAP_LFH_SUBSEGMENT_OWNER.Lock", lock, 0x80, 0x40, true, 0xda104cab58ceb0d7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_LFH_SUBSEGMENT_OWNER.AvailableSubsegmentList", available_subsegment_list, 0xc0, 0x80, true, 0x589ff47d07b97786)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_LFH_SUBSEGMENT_OWNER.FullSubsegmentList", full_subsegment_list, 0x140, 0x80, true, 0xd45c504d8d161dfa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif