#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlxRemoveInvertedFunctionTable$ntoskrnl.exe", 0x36f8ac, 0x0, true, 0x495ec920d752d8aa)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(nt::ascii_view*)>*), "$RtlxAnsiStringToUnicodeSize$ntoskrnl.exe", 0x68a1f0, 0x0, true, 0x150ea4d593ec805d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const nt::ascii_view*)>*), "$RtlxOemStringToUnicodeSize$ntoskrnl.exe", 0x748fb0, 0x0, true, 0xe41cb08a9f357295)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const nt::unicode_view*)>*), "$RtlxUnicodeStringToAnsiSize$ntoskrnl.exe", 0x745cc0, 0x0, true, 0x442c3f83b6a3798c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const nt::unicode_view*)>*), "$RtlxUnicodeStringToOemSize$ntoskrnl.exe", 0x6c4610, 0x0, true, 0xf84fdc41fcf0ce0a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif