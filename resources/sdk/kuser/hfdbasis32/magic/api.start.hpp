#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$lError@HFDBASIS32$win32kbase.sys", 0x0, 0x0, false, 0xb8d1c38c21d6d249)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$lParentErrorDividedBy4@HFDBASIS32$win32kbase.sys", 0x0, 0x0, false, 0x69e1a23de4c54e2e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vSteadyState@HFDBASIS32$win32kbase.sys", 0x8f170, 0x0, true, 0xba4aeee08bac0d8b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif