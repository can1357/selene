#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_EXPR_VAR.ExprType", expr_type, 0x0, 0x8, true, 0x1b0f0b2ab145ac3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_EXPR_VAR.VarType", var_type, 0x8, 0x8, true, 0x3a3197ca5d3e7fe9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_EXPR_VAR.Offset", offset, 0x20, 0x20, true, 0x51d00fdccc6c8c8d)
#else
#define _m00
#define _m01
#define _m02
#endif