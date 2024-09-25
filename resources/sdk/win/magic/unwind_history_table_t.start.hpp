#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UNWIND_HISTORY_TABLE.Count", count, 0x0, 0x20, true, 0x83d5d61b214abd4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNWIND_HISTORY_TABLE.LocalHint", local_hint, 0x20, 0x8, true, 0xcea555f939f18d9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNWIND_HISTORY_TABLE.GlobalHint", global_hint, 0x28, 0x8, true, 0xbaeccb4b30f5de64)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNWIND_HISTORY_TABLE.Search", search, 0x30, 0x8, true, 0xe3a73dacaad7cbfb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNWIND_HISTORY_TABLE.Once", once, 0x38, 0x8, true, 0xf7cb175118767e93)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_UNWIND_HISTORY_TABLE.LowAddress", low_address, 0x40, 0x40, true, 0x27a3ebd7ac9d8f24)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_UNWIND_HISTORY_TABLE.HighAddress", high_address, 0x80, 0x40, true, 0x4f7feac22cc00dbd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::unwind_history_table_entry_t, 12>), "_UNWIND_HISTORY_TABLE.Entry", entry, 0xc0, 0x0, true, 0x8501f30ec6ef95db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif