#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::param_attributes_t), "PARAM_DESCRIPTION.ParamAttr", param_attr, 0x0, 0x10, true, 0x75f5dc752a779965)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PARAM_DESCRIPTION.StackOffset", stack_offset, 0x10, 0x10, true, 0xd6d60408958f5a3e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PARAM_DESCRIPTION.TypeOffset", type_offset, 0x20, 0x10, true, 0xf10948562c334ebb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PARAM_DESCRIPTION.SimpleType.Type", type, 0x0, 0x8, true, 0xc8e8488112f33812)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_simple_type_t), "PARAM_DESCRIPTION.SimpleType", simple_type, 0x20, 0x10, true, 0xdf7f77b813ede765)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif