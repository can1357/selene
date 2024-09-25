#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct nt::prefix_table_entry_t*(struct nt::prefix_table_t*, nt::ascii_view*)>*), "$PfxFindPrefix$ntoskrnl.exe", 0x90d580, 0x0, true, 0x6b6d37049a4f8a7e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::prefix_table_t*)>*), "$PfxInitialize$ntoskrnl.exe", 0x90d660, 0x0, true, 0x1722dd01076b6041)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::prefix_table_t*, nt::ascii_view*, struct nt::prefix_table_entry_t*)>*), "$PfxInsertPrefix$ntoskrnl.exe", 0x90d680, 0x0, true, 0x83553298d20721d0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::prefix_table_t*, struct nt::prefix_table_entry_t*)>*), "$PfxRemovePrefix$ntoskrnl.exe", 0x90d7a0, 0x0, true, 0x2a2a1ef314ad174d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif