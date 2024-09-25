#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x8176c, 0x0, true, 0x43df5eaf2cf70d77)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x86094, 0x0, true, 0x66b3a86874eca0c7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0xbd098, 0x0, true, 0x7b7fdcb720e15391)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x81b5c, 0x0, true, 0x3dd6513ca3e385fc)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x12288, 0x0, true, 0x9d79bf14635daa8e)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z$dxgmms2.sys", 0x80804, 0x0, true, 0x9d4444a62b1156d6)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_FENCE_STORAGE_PAGE@@QEAA@XZ$dxgmms2.sys", 0x85ff0, 0x0, true, 0xc48671d70605a3e9)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeStorage@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x86008, 0x0, true, 0x857083da71070d7f)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x5ea74, 0x0, true, 0xe9463f010f231996)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapCpuVA@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x854c0, 0x0, true, 0xec59ff7df2aedb90)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapGpuVA@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x80fbc, 0x0, true, 0xfd455e4383c1fa3e)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapCpuVA@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x8577c, 0x0, true, 0x236fcb7b7ba21de8)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE$dxgmms2.sys", 0x818f8, 0x0, true, 0xda71fa9f70c9cbb0)
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
#endif