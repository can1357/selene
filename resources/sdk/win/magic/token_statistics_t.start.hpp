#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_STATISTICS.TokenId", token_id, 0x0, 0x40, true, 0xf78358dbe24afa21)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_STATISTICS.AuthenticationId", authentication_id, 0x40, 0x40, true, 0xeefa15681b2c497d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TOKEN_STATISTICS.ExpirationTime", expiration_time, 0x80, 0x40, true, 0xb1d68002267780a7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::token_type_t), "_TOKEN_STATISTICS.TokenType", token_type, 0xc0, 0x20, true, 0xee2f040609f09809)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum sec::impersonation_level_t), "_TOKEN_STATISTICS.ImpersonationLevel", impersonation_level, 0xe0, 0x20, true, 0xeb7484c54cd8e185)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_STATISTICS.DynamicCharged", dynamic_charged, 0x100, 0x20, true, 0x606175ae4c3a570a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_STATISTICS.DynamicAvailable", dynamic_available, 0x120, 0x20, true, 0xba99f459e7516ba3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_STATISTICS.GroupCount", group_count, 0x140, 0x20, true, 0x61237656b396ebbb)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_STATISTICS.PrivilegeCount", privilege_count, 0x160, 0x20, true, 0x4b009a2108c030da)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_STATISTICS.ModifiedId", modified_id, 0x180, 0x40, true, 0xe87e84a2ef21d802)
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