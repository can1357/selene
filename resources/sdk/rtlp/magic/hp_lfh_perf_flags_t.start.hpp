#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.HotspotDetection", hotspot_detection, 0x0, 0x1, true, 0x5f738920212361c3, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.HotspotFullCommit", hotspot_full_commit, 0x1, 0x1, true, 0xc5457cdc4e43dbc0, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.ActiveSubsegment", active_subsegment, 0x2, 0x1, true, 0xdf2f5953965d1337, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.SmallerSubsegment", smaller_subsegment, 0x3, 0x1, true, 0xf3b62c05f1b517f, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.SingleAffinitySlot", single_affinity_slot, 0x4, 0x1, true, 0x1e59782ab2e93b64, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.ApplyLfhDecommitPolicy", apply_lfh_decommit_policy, 0x5, 0x1, true, 0xfe3fb478c6c4b677, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.EnableGarbageCollection", enable_garbage_collection, 0x6, 0x1, true, 0xfa76c9007e2b85a2, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.LargePagePreCommit", large_page_pre_commit, 0x7, 0x1, true, 0x1ff673f2385a9d89, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.OpportunisticLargePreCommit", opportunistic_large_pre_commit, 0x8, 0x1, true, 0x60c2b8d90db42668, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.LfhForcedAffinity", lfh_forced_affinity, 0x9, 0x1, true, 0xbcf7837f75f35c4f, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "RTLP_HP_LFH_PERF_FLAGS.LfhCachelinePadding", lfh_cacheline_padding, 0xa, 0x1, true, 0x15019adbf3df2219, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RTLP_HP_LFH_PERF_FLAGS.AllFlags", all_flags, 0x0, 0x20, true, 0xb1fa46bf67cfecff)
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