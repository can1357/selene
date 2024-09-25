#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_SECURITY_INFORMATION.Object", object, 0x0, 0x40, true, 0x41af2586651e23b8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_QUERY_KEY_SECURITY_INFORMATION.SecurityInformation", security_information, 0x40, 0x40, true, 0x47533f77efc15c45)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_SECURITY_INFORMATION.SecurityDescriptor", security_descriptor, 0x80, 0x40, true, 0x55afdb2b3496ea1c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_QUERY_KEY_SECURITY_INFORMATION.Length", length, 0xc0, 0x40, true, 0x4971bd4dc58485b9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_SECURITY_INFORMATION.CallContext", call_context, 0x100, 0x40, true, 0xc3fcfc6154a4ac49)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_SECURITY_INFORMATION.ObjectContext", object_context, 0x140, 0x40, true, 0x91c382c5c3f80753)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif