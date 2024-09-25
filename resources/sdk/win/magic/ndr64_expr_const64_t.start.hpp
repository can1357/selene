#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_EXPR_CONST64.ExprType", expr_type, 0x0, 0x8, true, 0x7f21c6c849252169)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDR64_EXPR_CONST64.ConstValue", const_value, 0x40, 0x40, true, 0x1576bb167fd1caee)
#else
#define _m00
#define _m01
#endif