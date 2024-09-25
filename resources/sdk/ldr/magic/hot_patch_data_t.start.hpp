#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_HOT_PATCH_DATA.Version", version, 0x0, 0x0, false, 0x5a1d8797d70129b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const wchar_t*, uint32_t*, const nt::unicode_view*, void**)>*), "_LDR_HOT_PATCH_DATA.PatchLoadLibrary", patch_load_library, 0x0, 0x0, false, 0xbc47196ea3112a97)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, const nt::ascii_view*, uint32_t, void**)>*), "_LDR_HOT_PATCH_DATA.PatchGetProcAddress", patch_get_proc_address, 0x0, 0x0, false, 0x6830e0b43fe99e26)
#else
#define _m00
#define _m01
#define _m02
#endif