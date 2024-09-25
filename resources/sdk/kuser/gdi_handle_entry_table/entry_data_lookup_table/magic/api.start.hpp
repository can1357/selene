#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@EntryDataLookupTable@GdiHandleEntryTable$win32kbase.sys", 0x78c10, 0x0, true, 0xb19796dc24d70fde)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@EntryDataLookupTable@GdiHandleEntryTable$win32kbase.sys", 0x9e3a0, 0x0, true, 0x620ad557853868ab)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif