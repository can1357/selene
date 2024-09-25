#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM64_DBGKD_CONTROL_SET.Continue", _continue, 0x0, 0x20, true, 0xc47cdd8e9c18c80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM64_DBGKD_CONTROL_SET.TraceFlag", trace_flag, 0x20, 0x20, true, 0x6006187d2089bfc2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_DBGKD_CONTROL_SET.CurrentSymbolStart", current_symbol_start, 0x40, 0x40, true, 0x6500380d530a6745)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_DBGKD_CONTROL_SET.CurrentSymbolEnd", current_symbol_end, 0x80, 0x40, true, 0xa67fdacdad633e49)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif