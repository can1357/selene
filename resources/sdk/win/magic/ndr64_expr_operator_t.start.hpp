#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_EXPR_OPERATOR.ExprType", expr_type, 0x0, 0x8, true, 0x62e25472f97540f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_EXPR_OPERATOR.Operator", _operator, 0x8, 0x8, true, 0xcd52d78e8711f3e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_EXPR_OPERATOR.CastType", cast_type, 0x10, 0x8, true, 0xbbb5f5e43b45e014)
#else
#define _m00
#define _m01
#define _m02
#endif