#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AMD64_DBGKD_CONTROL_SET.TraceFlag", trace_flag, 0x0, 0x20, true, 0x7eb2fc69e6dab64e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AMD64_DBGKD_CONTROL_SET.Dr7", dr7, 0x20, 0x40, true, 0x2796f8eef71cd3a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AMD64_DBGKD_CONTROL_SET.CurrentSymbolStart", current_symbol_start, 0x60, 0x40, true, 0xc7857e4d80de878d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AMD64_DBGKD_CONTROL_SET.CurrentSymbolEnd", current_symbol_end, 0xa0, 0x40, true, 0xd3fd7ec9922cfa9a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif