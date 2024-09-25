#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_GROUPS.GroupCount", group_count, 0x0, 0x20, true, 0xb5257353205ef6d7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::sid_and_attributes_t, 1>), "_TOKEN_GROUPS.Groups", groups, 0x40, 0x80, true, 0x452540876d8d7c0a)
#else
#define _m00
#define _m01
#endif