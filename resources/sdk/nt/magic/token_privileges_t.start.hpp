#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_PRIVILEGES.PrivilegeCount", privilege_count, 0x0, 0x20, true, 0xb8f7a25e9af4d48c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::luid_and_attributes_t, 1>), "_TOKEN_PRIVILEGES.Privileges", privileges, 0x20, 0x60, true, 0xeca23c20c30e3193)
#else
#define _m00
#define _m01
#endif