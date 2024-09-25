#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVILEGE_SET.PrivilegeCount", privilege_count, 0x0, 0x20, true, 0x859d2aad0fa9cff8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVILEGE_SET.Control", control, 0x20, 0x20, true, 0x7491d70824ee2301)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::luid_and_attributes_t, 1>), "_PRIVILEGE_SET.Privilege", privilege, 0x40, 0x60, true, 0x6c13553a761f49f9)
#else
#define _m00
#define _m01
#define _m02
#endif