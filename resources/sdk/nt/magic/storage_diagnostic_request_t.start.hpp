#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DIAGNOSTIC_REQUEST.Version", version, 0x0, 0x20, true, 0xd2e4fcf70424ad28)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DIAGNOSTIC_REQUEST.Size", size, 0x20, 0x20, true, 0x935a600e7544503e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_diagnostic_target_type_t), "_STORAGE_DIAGNOSTIC_REQUEST.TargetType", target_type, 0x60, 0x20, true, 0xe48a64c910c583ad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_diagnostic_level_t), "_STORAGE_DIAGNOSTIC_REQUEST.Level", level, 0x80, 0x20, true, 0xc4f23f1f00a59da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif