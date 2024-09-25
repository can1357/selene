#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetElapsed@TimeInterval@DripsBlockerTrackingHelper$dxgkrnl.sys", 0x2be384, 0x0, true, 0x690cf79397d0622d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Start@TimeInterval@DripsBlockerTrackingHelper$dxgkrnl.sys", 0x2be8b8, 0x0, true, 0x1bcce93fb6fae457)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Stop@TimeInterval@DripsBlockerTrackingHelper$dxgkrnl.sys", 0x2be8e8, 0x0, true, 0x1e104eb7e45a2d0a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif