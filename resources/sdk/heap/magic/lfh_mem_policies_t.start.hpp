#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LFH_MEM_POLICIES.DisableAffinity", disable_affinity, 0x0, 0x1, true, 0x8e3da349bc3281f1, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LFH_MEM_POLICIES.SlowSubsegmentGrowth", slow_subsegment_growth, 0x1, 0x1, true, 0x6b0884e3b564ea5d, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LFH_MEM_POLICIES.AllPolicies", all_policies, 0x0, 0x20, true, 0x37a01a00ceaa9d19)
#else
#define _m00
#define _m01
#define _m02
#endif