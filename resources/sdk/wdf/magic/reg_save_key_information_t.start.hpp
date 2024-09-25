#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SAVE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x7a512a65caa7cefa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SAVE_KEY_INFORMATION.FileHandle", file_handle, 0x40, 0x40, true, 0x5c59485c2c48d6d4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_SAVE_KEY_INFORMATION.Format", format, 0x80, 0x20, true, 0x1bcb55cae72718cf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SAVE_KEY_INFORMATION.CallContext", call_context, 0xc0, 0x40, true, 0x7ee497a2403d7a8d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SAVE_KEY_INFORMATION.ObjectContext", object_context, 0x100, 0x40, true, 0xdf1c1d24f4f5f765)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif