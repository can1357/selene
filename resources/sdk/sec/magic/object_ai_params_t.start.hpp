#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_OBJECT_AI_PARAMS.Size", size, 0x0, 0x20, true, 0x3f2ec9f1e221b6d1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_OBJECT_AI_PARAMS.ConstraintMask", constraint_mask, 0x20, 0x20, true, 0x861f97f06cd384ab)
#else
#define _m00
#define _m01
#endif