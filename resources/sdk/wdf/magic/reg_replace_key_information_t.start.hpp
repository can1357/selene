#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_REPLACE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x5ae2f0bd4f076b6d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_REPLACE_KEY_INFORMATION.OldFileName", old_file_name, 0x40, 0x40, true, 0x71683b97490d942c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_REPLACE_KEY_INFORMATION.NewFileName", new_file_name, 0x80, 0x40, true, 0x6a10aec751765c09)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_REPLACE_KEY_INFORMATION.CallContext", call_context, 0xc0, 0x40, true, 0x82c0661bb8e66cd3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_REPLACE_KEY_INFORMATION.ObjectContext", object_context, 0x100, 0x40, true, 0x2fc3cf8b47d2d37e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif