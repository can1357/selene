#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HP_HEAP_GLOBALS.HeapKey", heap_key, 0x0, 0x40, true, 0x3f7221ebfa0f02db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HP_HEAP_GLOBALS.LfhKey", lfh_key, 0x40, 0x40, true, 0x17c16981527fdac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::failure_information_t*), "_RTLP_HP_HEAP_GLOBALS.FailureInfo", failure_info, 0x80, 0x40, true, 0xebebced1c7e29923)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::heap_memory_limit_data_t), "_RTLP_HP_HEAP_GLOBALS.CommitLimitData", commit_limit_data, 0xc0, 0x0, true, 0xfb919ca5ddaf046f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTLP_HP_HEAP_GLOBALS.Flags", flags, 0x0, 0x0, false, 0xa0f77f421abf1864)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTLP_HP_HEAP_GLOBALS.FlagsBits.ErmsSupported", erms_supported, 0x0, 0x0, false, 0xd5cdfff717996bb1, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTLP_HP_HEAP_GLOBALS.FlagsBits.ErmsChecked", erms_checked, 0x0, 0x0, false, 0x1a85d393ed1894b5, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_bits_t), "_RTLP_HP_HEAP_GLOBALS.FlagsBits", flags_bits, 0x0, 0x0, false, 0xceaa160e3785dc04)
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