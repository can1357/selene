#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IA64_DBGKD_CONTROL_SET.Continue", _continue, 0x0, 0x20, true, 0x4c92e6812e8c3d9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IA64_DBGKD_CONTROL_SET.CurrentSymbolStart", current_symbol_start, 0x20, 0x40, true, 0x8a2aa157ea7dc09)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IA64_DBGKD_CONTROL_SET.CurrentSymbolEnd", current_symbol_end, 0x60, 0x40, true, 0xf953a66ecc4a12f1)
#else
#define _m00
#define _m01
#define _m02
#endif