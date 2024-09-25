#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARMCE_DBGKD_CONTROL_SET.Continue", _continue, 0x0, 0x20, true, 0x2f6d26bca2c9673)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARMCE_DBGKD_CONTROL_SET.CurrentSymbolStart", current_symbol_start, 0x20, 0x20, true, 0x7c1c60c73efe4d79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARMCE_DBGKD_CONTROL_SET.CurrentSymbolEnd", current_symbol_end, 0x40, 0x20, true, 0x451b855fff14a923)
#else
#define _m00
#define _m01
#define _m02
#endif