#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_subsegment_owner_t), "_HEAP_LFH_AFFINITY_SLOT.State", state, 0x0, 0xc0, true, 0x2ffba4c0cdb41bf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_fast_ref_t), "_HEAP_LFH_AFFINITY_SLOT.ActiveSubsegment", active_subsegment, 0x1c0, 0x40, true, 0x4bb88c54d7cbfc03)
#else
#define _m00
#define _m01
#endif