#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_KEY_HANDLE_CLOSE_INFORMATION.Object", object, 0x0, 0x40, true, 0xf36554586a8c34c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_KEY_HANDLE_CLOSE_INFORMATION.CallContext", call_context, 0x40, 0x40, true, 0x28de63f7919b050)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_KEY_HANDLE_CLOSE_INFORMATION.ObjectContext", object_context, 0x80, 0x40, true, 0xa4097d335e0e7643)
#else
#define _m00
#define _m01
#define _m02
#endif