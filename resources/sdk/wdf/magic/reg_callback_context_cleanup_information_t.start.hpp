#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION.Object", object, 0x0, 0x40, true, 0x58851efc6fcf4dd4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION.ObjectContext", object_context, 0x40, 0x40, true, 0x7e312b9ac9d37765)
#else
#define _m00
#define _m01
#endif