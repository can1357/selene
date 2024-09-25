#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_DBGKD_CONTROL_SET.TraceFlag", trace_flag, 0x0, 0x20, true, 0x5fb4c0770b4ff75a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_DBGKD_CONTROL_SET.Dr7", dr7, 0x20, 0x20, true, 0x2d15120da14201f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_DBGKD_CONTROL_SET.CurrentSymbolStart", current_symbol_start, 0x40, 0x20, true, 0x74f3ab9b4d0415e1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_DBGKD_CONTROL_SET.CurrentSymbolEnd", current_symbol_end, 0x60, 0x20, true, 0x4e5459c8e2f8d13f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif