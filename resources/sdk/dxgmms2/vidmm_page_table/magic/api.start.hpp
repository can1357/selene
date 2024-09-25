#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UncommitVirtualAddressRange@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x700d0, 0x0, true, 0xf204c32c06a47732)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitPageTable@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x82a1c, 0x0, true, 0x521fae533891796b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitVirtualAddressRange@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x70fc8, 0x0, true, 0xa5d10dbc139362da)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyPageTable@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x82774, 0x0, true, 0x6b507f3095fc5edd)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EvictPageTable@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x82868, 0x0, true, 0x3de6f65947e1c1c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializePageTable@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x82bb4, 0x0, true, 0x686cd60d344636c7)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InvalidatePageTable@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x835d4, 0x0, true, 0xaf462c7c6a9bc939)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ModifyPageTable@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x71300, 0x0, true, 0x432d4deb920042bd)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdatePageTable@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x6f068, 0x0, true, 0xbc0cb18de08bfebf)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdatePageTableInvalidate@VIDMM_PAGE_TABLE$dxgmms2.sys", 0x82cc8, 0x0, true, 0xe87c82b7a8581dfb)
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
#endif