#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagVARDESC.memid", memid, 0x0, 0x20, true, 0xc846407867cd0ff9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagVARDESC.lpstrSchema", lpstr_schema, 0x40, 0x40, true, 0xdd9c72a828d316e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVARDESC.oInst", o_inst, 0x80, 0x20, true, 0x7669c0be1b3d2ca1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::variant_t*), "tagVARDESC.lpvarValue", lpvar_value, 0x80, 0x40, true, 0x137715db9cfba7ca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::elemdesc_t), "tagVARDESC.elemdescVar", elemdesc_var, 0xc0, 0x0, true, 0x173e9588d129fa48)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagVARDESC.wVarFlags", w_var_flags, 0x1c0, 0x10, true, 0x194f8fde8a404a18)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::varkind_t), "tagVARDESC.varkind", varkind, 0x1e0, 0x20, true, 0x4e53da4de153b0d3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif