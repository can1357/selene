#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_hash_t*), "_TOKEN_ACCESS_INFORMATION.SidHash", sid_hash, 0x0, 0x40, true, 0xbe02784ea96b5c99)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_hash_t*), "_TOKEN_ACCESS_INFORMATION.RestrictedSidHash", restricted_sid_hash, 0x40, 0x40, true, 0x16c1bca39eda75a5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::token_privileges_t*), "_TOKEN_ACCESS_INFORMATION.Privileges", privileges, 0x80, 0x40, true, 0x8aff97a67317840b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_ACCESS_INFORMATION.AuthenticationId", authentication_id, 0xc0, 0x40, true, 0x96eaae8c0c5ed512)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::token_type_t), "_TOKEN_ACCESS_INFORMATION.TokenType", token_type, 0x100, 0x20, true, 0x5acc7bd23195131c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum sec::impersonation_level_t), "_TOKEN_ACCESS_INFORMATION.ImpersonationLevel", impersonation_level, 0x120, 0x20, true, 0xac3ccdd82d858b79)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::token_mandatory_policy_t), "_TOKEN_ACCESS_INFORMATION.MandatoryPolicy", mandatory_policy, 0x140, 0x20, true, 0x6056607c74dc67cf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_ACCESS_INFORMATION.Flags", flags, 0x160, 0x20, true, 0xdf14cd7f5b9297b9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_ACCESS_INFORMATION.AppContainerNumber", app_container_number, 0x180, 0x20, true, 0x43b8975229a3a80d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN_ACCESS_INFORMATION.PackageSid", package_sid, 0x1c0, 0x40, true, 0xa7c2b97da39a90cd)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_hash_t*), "_TOKEN_ACCESS_INFORMATION.CapabilitiesHash", capabilities_hash, 0x200, 0x40, true, 0xab0cb8c52a28a179)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN_ACCESS_INFORMATION.TrustLevelSid", trust_level_sid, 0x240, 0x40, true, 0x422c365b793fc78e)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN_ACCESS_INFORMATION.SecurityAttributes", security_attributes, 0x280, 0x40, true, 0xd96b1c05397d6307)
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
#define _m10
#define _m11
#define _m12
#endif