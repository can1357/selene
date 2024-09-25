#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS.ForceSynchronousEvict", force_synchronous_evict, 0x0, 0x1, true, 0x48e5aa1a0fe47f31, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS.NeverDeferEvictions", never_defer_evictions, 0x1, 0x1, true, 0x4d8924b13c9a0172, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS.AlwaysFailCommitOnReclaim", always_fail_commit_on_reclaim, 0x2, 0x1, true, 0xa58db37691445f5, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS.Value", value, 0x0, 0x20, true, 0xcd3ca6132ef87aba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif