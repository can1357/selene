#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_DELETE_VALUE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x7d556db286b20a2d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_DELETE_VALUE_KEY_INFORMATION.ValueName", value_name, 0x40, 0x40, true, 0x9296880226e81a77)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_DELETE_VALUE_KEY_INFORMATION.CallContext", call_context, 0x80, 0x40, true, 0x4b48cb0df54d8358)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_DELETE_VALUE_KEY_INFORMATION.ObjectContext", object_context, 0xc0, 0x40, true, 0xfef03d9306e3b422)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif