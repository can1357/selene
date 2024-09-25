#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ArbpBuildAllocationStack$ntoskrnl.exe", 0x749144, 0x0, true, 0xf587fb4bed3721ad)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ArbpBuildAlternative$ntoskrnl.exe", 0x79b350, 0x0, true, 0x3cd5f297a069a103)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ArbpGetRegistryValue$ntoskrnl.exe", 0x789750, 0x0, true, 0x4ed591f8ffd71e76)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ArbpQueryConflictCallback$ntoskrnl.exe", 0x711850, 0x0, true, 0xec0dd90561edfc75)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ArbpUpdatePriority$ntoskrnl.exe", 0x7992ac, 0x0, true, 0xf38e37d9ac70ac7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif