#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x0, 0x0, false, 0xb88a7f222d943be7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x85080, 0x0, true, 0x9a2fcdec9a09bcb2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportState@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0xc07c4, 0x0, true, 0x41e665b237b89dad)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitPageDirectory@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x8230c, 0x0, true, 0x73d65dfa75d4020e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x6f3b0, 0x0, true, 0x2da4281e4ff406a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z$dxgmms2.sys", 0x83008, 0x0, true, 0x92e075bd7755556a)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyPageDirectory@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x81dd4, 0x0, true, 0x2deaeeac9404632f)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x81dfc, 0x0, true, 0xb83562f9c352de7e)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x826f0, 0x0, true, 0x945d91b82dc8d7c1)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EvictPageDirectory@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x81fbc, 0x0, true, 0x3bd6420ad52600df)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExpandLargePagePte@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0xbe2c8, 0x0, true, 0xcd546f78d16221c)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExpandZeroPte@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0xbe4fc, 0x0, true, 0x3d9448a7e1a2333)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x82604, 0x0, true, 0x4df229204f438d0)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializePageDirectory@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x82478, 0x0, true, 0x6fffa8986de04753)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0xbee20, 0x0, true, 0x7a98481d2230f0d0)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPageTableInPde@VIDMM_PAGE_DIRECTORY$dxgmms2.sys", 0x8588c, 0x0, true, 0x67b638e1a4acc8fe)
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
#endif