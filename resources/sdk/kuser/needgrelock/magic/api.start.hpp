#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NEEDGRELOCK@@QEAA@XZ$win32kfull.sys", 0x26d970, 0x0, true, 0x660baa0c1e5416dc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLock@NEEDGRELOCK$win32kbase.sys", 0x46f70, 0x0, true, 0x366a8f6c40697958)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@NEEDGRELOCK$win32kbase.sys", 0x46fe0, 0x0, true, 0xe2f49d996281e872)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif