#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x0, 0x0, false, 0xa7184ef317b0b771)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Commit@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x0, 0x0, false, 0x2b35719ba29b7a62)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Decommit@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x0, 0x0, false, 0xbbf6836477ced7f7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x79328, 0x0, true, 0xe86ea3f181175ed5)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetFullMDL@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x7a864, 0x0, true, 0x12b3224132ab9aef)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x87ec0, 0x0, true, 0x24e7175a51f1e0b2)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x83f48, 0x0, true, 0xa88f19be7df305e1)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0xc271c, 0x0, true, 0x2c03354bf8f835e6)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Lock@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x78ff4, 0x0, true, 0xf059117bc2b3b96a)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Map@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0xc2758, 0x0, true, 0xd2e3794d4f5eb305)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapLocked@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0xc2860, 0x0, true, 0xf08457608e1f818a)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x84924, 0x0, true, 0x6471470a42d1b460)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MergeRanges@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x79c30, 0x0, true, 0xa6f4c2023914837d)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x79210, 0x0, true, 0x40ffde09c347327e)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x7ba60, 0x0, true, 0x2418e4e50596b3be)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reset@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x75f28, 0x0, true, 0xf72ed3d0de420710)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResetUndo@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0xc32f8, 0x0, true, 0xefff4d51895d6f10)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Rotate@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0xc3568, 0x0, true, 0x32185bd056ae12aa)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShrinkTo@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x76594, 0x0, true, 0xf788b0cc17469cc7)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SplitAt@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x78050, 0x0, true, 0xb42954827b09fff6)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unlock@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x78ee4, 0x0, true, 0x78ccdc67f78c54e)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unmap@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0xc3cb8, 0x0, true, 0xbbee18f9cb08cdf0)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE$dxgmms2.sys", 0x795b0, 0x0, true, 0xe5dd70f96a6ede6d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#define _o2(...) __VA_ARGS__
#endif