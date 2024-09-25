#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.AlwaysRepatch", always_repatch, 0x0, 0x1, true, 0x3e1de1d7205ad03f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.FailSharedPrimary", fail_shared_primary, 0x1, 0x1, true, 0xf987a6eddf7d2285, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.FailProbeAndLock", fail_probe_and_lock, 0x2, 0x1, true, 0x2fa65551a6e6089c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.AlwaysDiscardOffer", always_discard_offer, 0x3, 0x1, true, 0xa3534bce6062665b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.NeverDiscardOffer", never_discard_offer, 0x4, 0x1, true, 0xd0fab34e113d6370, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.ForceComplexLock", force_complex_lock, 0x5, 0x1, true, 0x8211cc39003d8a63, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.NeverPrepatch", never_prepatch, 0x6, 0x1, true, 0xbeff27290509928d, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.ExpectPreparationFailure", expect_preparation_failure, 0x7, 0x1, true, 0x76a595bf48f6d0b8, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.TakeSplitPoint", take_split_point, 0x8, 0x1, true, 0x9d27b852e46b8c8, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.FailAcquireSwizzlingRange", fail_acquire_swizzling_range, 0x9, 0x1, true, 0xaaff11e040dd6ee0, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.PagingPathLockSubrange", paging_path_lock_subrange, 0xa, 0x1, true, 0x28b2860cf65a7e2f, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.PagingPathLockMinrange", paging_path_lock_minrange, 0xb, 0x1, true, 0xdaca653da0df958e, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.FailVaRotation", fail_va_rotation, 0xc, 0x1, true, 0x5041ceaf4ef49d61, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.NoDemotion", no_demotion, 0xd, 0x1, true, 0xb1eefa46393a8862, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.FailDefragPass", fail_defrag_pass, 0xe, 0x1, true, 0xcb762bc6fd8bfce3, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.AlwaysProcessOfferList", always_process_offer_list, 0xf, 0x1, true, 0xbd5d09db7fbb1352, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.AlwaysDecommitOffer", always_decommit_offer, 0x10, 0x1, true, 0xfb06895090fb7d5f, 1, uint32_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.NeverMoveDefrag", never_move_defrag, 0x11, 0x1, true, 0xee3e1a5a27b86316, 1, uint32_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.AlwaysRelocateDisplayableResources", always_relocate_displayable_resources, 0x12, 0x1, true, 0x3d042b609f51f394, 1, uint32_t)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.Value", value, 0x0, 0x20, true, 0xea301404df3053ae)
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
#define _m17
#define _m18
#define _m19
#endif