#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0x40c30, 0x0, true, 0xea50d56076472d66)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0xa7f44, 0x0, true, 0x95040208ef4b62f5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif