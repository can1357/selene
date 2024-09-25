#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_OBJECT_DIRECTORY_INFORMATION.Name", name, 0x0, 0x80, true, 0x44135d56b2e7adb5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_OBJECT_DIRECTORY_INFORMATION.TypeName", type_name, 0x80, 0x80, true, 0x10f713a059ae0ff0)
#else
#define _m00
#define _m01
#endif