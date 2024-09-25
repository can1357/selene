#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_RESTORE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0xa7a8ab74364bddf2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_RESTORE_KEY_INFORMATION.FileHandle", file_handle, 0x40, 0x40, true, 0xab84e4f46d96c305)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_RESTORE_KEY_INFORMATION.Flags", flags, 0x80, 0x20, true, 0x5471afaaec809541)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_RESTORE_KEY_INFORMATION.CallContext", call_context, 0xc0, 0x40, true, 0x117451ed17654747)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_RESTORE_KEY_INFORMATION.ObjectContext", object_context, 0x100, 0x40, true, 0x94aeb8df35692282)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif