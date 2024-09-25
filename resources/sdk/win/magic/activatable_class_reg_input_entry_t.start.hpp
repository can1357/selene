#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "ActivatableClassRegInputEntry.activatableClassId", activatable_class_id, 0x0, 0x40, true, 0x17aa3b9dbaa8d33c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "ActivatableClassRegInputEntry.packageFullName", package_full_name, 0x40, 0x40, true, 0x75590bccb651e05a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ActivatableClassRegInputEntry.oxid", oxid, 0x80, 0x40, true, 0x38b9d55081c4b8e4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ActivatableClassRegInputEntry.ipid", ipid, 0xc0, 0x80, true, 0xa2ce6190a7ca4f18)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivatableClassRegInputEntry.dwFlags", dw_flags, 0x140, 0x20, true, 0x690cfb657c1bab84)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivatableClassRegInputEntry.ulServiceId", ul_service_id, 0x160, 0x20, true, 0xaa8e57721cb2e514)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif