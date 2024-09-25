#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LDR_RESLOADER_RET.Module", module, 0x0, 0x40, true, 0xd65879d6fab8dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LDR_RESLOADER_RET.DataEntry", data_entry, 0x40, 0x40, true, 0xf412820c8422b012)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LDR_RESLOADER_RET.TargetModule", target_module, 0x80, 0x40, true, 0xd67461af590040e7)
#else
#define _m00
#define _m01
#define _m02
#endif