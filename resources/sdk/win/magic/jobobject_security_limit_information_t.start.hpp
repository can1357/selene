#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_SECURITY_LIMIT_INFORMATION.SecurityLimitFlags", security_limit_flags, 0x0, 0x20, true, 0xfd7493c9a48b921c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOBOBJECT_SECURITY_LIMIT_INFORMATION.JobToken", job_token, 0x40, 0x40, true, 0xb55aad50f8894828)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::token_groups_t*), "_JOBOBJECT_SECURITY_LIMIT_INFORMATION.SidsToDisable", sids_to_disable, 0x80, 0x40, true, 0xc7f8d371b007e62e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::token_privileges_t*), "_JOBOBJECT_SECURITY_LIMIT_INFORMATION.PrivilegesToDelete", privileges_to_delete, 0xc0, 0x40, true, 0x6da296f94e3d2de3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::token_groups_t*), "_JOBOBJECT_SECURITY_LIMIT_INFORMATION.RestrictedSids", restricted_sids, 0x100, 0x40, true, 0x1ce7d2f7e3ad2226)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif