#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivatableClassRevokeClasses.dwSize", dw_size, 0x0, 0x20, true, 0x5f50c32f5f7ec28c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::activatable_class_revoke_entry_t, 1>), "ActivatableClassRevokeClasses.revent", revent, 0x40, 0xc0, true, 0xb7bd09145f91def6)
#else
#define _m00
#define _m01
#endif