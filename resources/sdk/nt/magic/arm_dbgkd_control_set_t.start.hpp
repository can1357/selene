#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM_DBGKD_CONTROL_SET.Continue", _continue, 0x0, 0x20, true, 0x64e685c3c314477f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM_DBGKD_CONTROL_SET.CurrentSymbolStart", current_symbol_start, 0x20, 0x20, true, 0x3d728c1016914c05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM_DBGKD_CONTROL_SET.CurrentSymbolEnd", current_symbol_end, 0x40, 0x20, true, 0xb57ff606685e6d26)
#else
#define _m00
#define _m01
#define _m02
#endif