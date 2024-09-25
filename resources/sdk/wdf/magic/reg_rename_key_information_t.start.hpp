#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_RENAME_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x9bc82a5e5232607c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_RENAME_KEY_INFORMATION.NewName", new_name, 0x40, 0x40, true, 0x11fb71b764978273)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_RENAME_KEY_INFORMATION.CallContext", call_context, 0x80, 0x40, true, 0x939565fc4589aff)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_RENAME_KEY_INFORMATION.ObjectContext", object_context, 0xc0, 0x40, true, 0xd184a9e645c7f098)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif