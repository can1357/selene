#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_DELETE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x8ca5f0be502d4eb7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_DELETE_KEY_INFORMATION.CallContext", call_context, 0x40, 0x40, true, 0xcbbeb9b7f00ee91d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_DELETE_KEY_INFORMATION.ObjectContext", object_context, 0x80, 0x40, true, 0x691dd613aaece5cd)
#else
#define _m00
#define _m01
#define _m02
#endif