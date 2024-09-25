#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INITIAL_PRIVILEGE_SET.PrivilegeCount", privilege_count, 0x0, 0x20, true, 0x15113a8f4c7c2bf1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INITIAL_PRIVILEGE_SET.Control", control, 0x20, 0x20, true, 0xcfc8039659cad897)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::luid_and_attributes_t, 3>), "_INITIAL_PRIVILEGE_SET.Privilege", privilege, 0x40, 0x20, true, 0xb86f46cb165a917b)
#else
#define _m00
#define _m01
#define _m02
#endif