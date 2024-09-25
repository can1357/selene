#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPC_DBGKD_CONTROL_SET.Continue", _continue, 0x0, 0x20, true, 0x2e4e07763a552ffa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPC_DBGKD_CONTROL_SET.CurrentSymbolStart", current_symbol_start, 0x20, 0x20, true, 0xc337a3d622acc7d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPC_DBGKD_CONTROL_SET.CurrentSymbolEnd", current_symbol_end, 0x40, 0x20, true, 0xf411bf25a8e4b2ab)
#else
#define _m00
#define _m01
#define _m02
#endif