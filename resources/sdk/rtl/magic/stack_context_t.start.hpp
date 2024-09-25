#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_STACK_CONTEXT.NumberOfEntries", number_of_entries, 0x0, 0x20, true, 0x66d13344af444d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::stack_context_entry_t, 1>), "_RTL_STACK_CONTEXT.Entry", entry, 0x40, 0x80, true, 0xf92c3377ce4f407a)
#else
#define _m00
#define _m01
#endif