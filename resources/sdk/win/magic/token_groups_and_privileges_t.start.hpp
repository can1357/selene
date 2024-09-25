#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_GROUPS_AND_PRIVILEGES.SidCount", sid_count, 0x0, 0x20, true, 0x5d108d9faa90aa05)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_GROUPS_AND_PRIVILEGES.SidLength", sid_length, 0x20, 0x20, true, 0xa83aca9841a96c1d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_TOKEN_GROUPS_AND_PRIVILEGES.Sids", sids, 0x40, 0x40, true, 0x2d4ba8e077445feb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_GROUPS_AND_PRIVILEGES.RestrictedSidCount", restricted_sid_count, 0x80, 0x20, true, 0x29fcefbd90fbe20f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_GROUPS_AND_PRIVILEGES.RestrictedSidLength", restricted_sid_length, 0xa0, 0x20, true, 0x2098a5e4fed0f294)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_TOKEN_GROUPS_AND_PRIVILEGES.RestrictedSids", restricted_sids, 0xc0, 0x40, true, 0x98ba057a37dc56c2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_GROUPS_AND_PRIVILEGES.PrivilegeCount", privilege_count, 0x100, 0x20, true, 0x240096268f2eef11)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_GROUPS_AND_PRIVILEGES.PrivilegeLength", privilege_length, 0x120, 0x20, true, 0xddde24aeb09679d4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_and_attributes_t*), "_TOKEN_GROUPS_AND_PRIVILEGES.Privileges", privileges, 0x140, 0x40, true, 0x68634e4c77844ff9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_GROUPS_AND_PRIVILEGES.AuthenticationId", authentication_id, 0x180, 0x40, true, 0x47a912529b177079)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif