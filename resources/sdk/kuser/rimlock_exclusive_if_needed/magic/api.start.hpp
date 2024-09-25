#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z$win32kfull.sys", 0xfee8c, 0x0, true, 0x7067cda2055831ba)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ$win32kfull.sys", 0xfee5c, 0x0, true, 0x7c0e0ab6d7c5c7da)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif