#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_MANUFACTURING_INFORMATION.Options", options, 0x0, 0x20, true, 0x749d07328fa86ba4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_MANUFACTURING_INFORMATION.ProfileName", profile_name, 0x40, 0x80, true, 0x13938c3f52d34feb)
#else
#define _m00
#define _m01
#endif