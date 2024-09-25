#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.GetExtents", get_extents, 0x0, 0x1, true, 0xe18bbd9bd6f3db00, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MMINPAGE_FLAGS.PrefetchSystemVmType", prefetch_system_vm_type, 0x1, 0x2, true, 0x1da938cd19fc5616, 2, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.VaPrefetchReadBlock", va_prefetch_read_block, 0x3, 0x1, true, 0xe587200736775872, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.CollidedFlowThrough", collided_flow_through, 0x4, 0x1, true, 0x30960b7910557050, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.ForceCollisions", force_collisions, 0x5, 0x1, true, 0x122293dfb3108ab, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.InPageExpanded", in_page_expanded, 0x6, 0x1, true, 0x2ffd8e8cf3a29c4a, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.IssuedAtLowPriority", issued_at_low_priority, 0x7, 0x1, true, 0x618a21fc06354548, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.FaultFromStore", fault_from_store, 0x8, 0x1, true, 0x78358bddc741f55d, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMINPAGE_FLAGS.PagePriority", page_priority, 0x9, 0x3, true, 0xfce376b334a69bd, 3, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMINPAGE_FLAGS.ClusteredPagePriority", clustered_page_priority, 0xc, 0x3, true, 0x3a5f03cc572f51d2, 3, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.MakeClusterValid", make_cluster_valid, 0xf, 0x1, true, 0xd3dfe98e54284a9b, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.PerformRelocations", perform_relocations, 0x10, 0x1, true, 0xf93f2f8d0c8a9a25, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.ZeroLastPage", zero_last_page, 0x11, 0x1, true, 0x97f8c0c1390e5fdd, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.UserFault", user_fault, 0x12, 0x1, true, 0x78ebd7ce16f2a957, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.StandbyProtectionNeeded", standby_protection_needed, 0x13, 0x1, true, 0xdb7489c105e32cf7, 1, uint8_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.PteChanged", pte_changed, 0x14, 0x1, true, 0xbcca0667dfbcc9d1, 1, uint8_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.PageFileFault", page_file_fault, 0x15, 0x1, true, 0xb262616c5a8a5f8d, 1, uint8_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.PageFilePageHashActive", page_file_page_hash_active, 0x16, 0x1, true, 0x206cef22d9fa38f2, 1, uint8_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.CoalescedIo", coalesced_io, 0x17, 0x1, true, 0xa50fd447ed8c3064, 1, uint8_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.VmLockNotNeeded", vm_lock_not_needed, 0x18, 0x1, true, 0xc2a2fb26e62a489a, 1, uint8_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMINPAGE_FLAGS.InjectRetry", inject_retry, 0x0, 0x0, false, 0x7d10ece72168410c, 1, uint8_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MMINPAGE_FLAGS.CrossThreadPadding", cross_thread_padding, 0x0, 0x0, false, 0x4f0f784a31f042e1, 6, uint8_t)
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
#define _m20
#define _m21
#endif