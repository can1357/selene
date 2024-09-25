#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_KEY_SECURITY_INFORMATION.Object", object, 0x0, 0x40, true, 0xfc474d1d34573f7c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_SET_KEY_SECURITY_INFORMATION.SecurityInformation", security_information, 0x40, 0x40, true, 0x50c0bb481cf1df0e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_KEY_SECURITY_INFORMATION.SecurityDescriptor", security_descriptor, 0x80, 0x40, true, 0x432fb2976cb3a561)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_KEY_SECURITY_INFORMATION.CallContext", call_context, 0xc0, 0x40, true, 0x104cf001165d0be1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_KEY_SECURITY_INFORMATION.ObjectContext", object_context, 0x100, 0x40, true, 0x7dcd25e8208e9b39)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif