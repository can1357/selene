#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AsiAddDataToSchema$ntoskrnl.exe", 0x5b8a24, 0x0, true, 0x8ff580810664cf62)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AsiPopulateHashes$ntoskrnl.exe", 0x5b8abc, 0x0, true, 0x15afdcaac2110a4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AsiSortHashTableHelper$ntoskrnl.exe", 0x5b8bf0, 0x0, true, 0x1ac5e1315c5359eb)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AsiSortValueList$ntoskrnl.exe", 0x5b8c10, 0x0, true, 0x9a5d35ac33a64940)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif