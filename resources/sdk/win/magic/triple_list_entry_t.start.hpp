#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::triple_list_entry_t*, 3>), "_TRIPLE_LIST_ENTRY.Flink", flink, 0x0, 0x0, false, 0xc5095304ab262703)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::triple_list_entry_t*), "_TRIPLE_LIST_ENTRY.Blink", blink, 0x0, 0x0, false, 0x207fac09e5df6a8f)
#else
#define _m00
#define _m01
#endif