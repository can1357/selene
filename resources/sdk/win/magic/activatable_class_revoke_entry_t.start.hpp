#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "ActivatableClassRevokeEntry.activatableClassId", activatable_class_id, 0x0, 0x40, true, 0x331506ea363eac5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "ActivatableClassRevokeEntry.packageFullName", package_full_name, 0x40, 0x40, true, 0x4436ae65541ebb47)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivatableClassRevokeEntry.dwReg", dw_reg, 0x80, 0x20, true, 0x1d9d56787b7b379c)
#else
#define _m00
#define _m01
#define _m02
#endif