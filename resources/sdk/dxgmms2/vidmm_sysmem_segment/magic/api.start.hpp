#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapTemporaryResource@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x0, 0x0, false, 0x2e09c35160978475)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapTemporaryResource@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x0, 0x0, false, 0x2fff73d7bbea189d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x88930, 0x0, true, 0x181c002c98e33ab0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EndTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x88b70, 0x0, true, 0x59a349db9ed688ea)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitResource@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x64490, 0x0, true, 0x2c9e25b1360b3006)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ$dxgmms2.sys", 0xc400c, 0x0, true, 0x1986c61ec6da85c4)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EvictResource@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x640c0, 0x0, true, 0x1f288f637e2a3c5f)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x8d4d0, 0x0, true, 0xc4f04771ce8e372e)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockAllocationRange@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x87fe0, 0x0, true, 0x8ddfabe4ad6bec52)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapPagingBuffer@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x86650, 0x0, true, 0x8a1eb093cc18c816)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x87480, 0x0, true, 0xd462dd5ce76da434)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReserveTemporaryResource@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x88890, 0x0, true, 0x58029571e15545c)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RestoreFromPurge@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x73b10, 0x0, true, 0x7571727c907c26a8)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x884b0, 0x0, true, 0x635785b01a8dc17)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapPagingBuffer@VIDMM_SYSMEM_SEGMENT$dxgmms2.sys", 0x86660, 0x0, true, 0x497254dcc9be0f58)
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
#endif