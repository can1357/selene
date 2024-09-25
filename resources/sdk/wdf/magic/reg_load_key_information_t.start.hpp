#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0xcb759adda02b914b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_LOAD_KEY_INFORMATION.KeyName", key_name, 0x40, 0x40, true, 0xf3bd5d85ce73111)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_LOAD_KEY_INFORMATION.SourceFile", source_file, 0x80, 0x40, true, 0xea9b40533628a00e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_LOAD_KEY_INFORMATION.Flags", flags, 0xc0, 0x20, true, 0x22e7f75b441f2a47)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION.TrustClassObject", trust_class_object, 0x100, 0x40, true, 0xf14db8df0f15b47f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION.UserEvent", user_event, 0x140, 0x40, true, 0x7992c23fe0213876)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_LOAD_KEY_INFORMATION.DesiredAccess", desired_access, 0x180, 0x20, true, 0x4ab2474131765504)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_REG_LOAD_KEY_INFORMATION.RootHandle", root_handle, 0x1c0, 0x40, true, 0x8d70fa1ae75b13a4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION.CallContext", call_context, 0x200, 0x40, true, 0x5186e13e4f5ccc2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION.ObjectContext", object_context, 0x240, 0x40, true, 0xedb492c008bb9508)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif