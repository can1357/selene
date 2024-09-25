#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::trustee_w_t), "_ACTRL_ACCESS_ENTRYW.Trustee", trustee, 0x0, 0x0, true, 0x6a44122e0341a407)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTRL_ACCESS_ENTRYW.fAccessFlags", f_access_flags, 0x100, 0x20, true, 0xed5b19822bb7677e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTRL_ACCESS_ENTRYW.Access", access, 0x120, 0x20, true, 0x1eeb269a47aba8ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTRL_ACCESS_ENTRYW.ProvSpecificAccess", prov_specific_access, 0x140, 0x20, true, 0xf414f2afb5478542)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTRL_ACCESS_ENTRYW.Inheritance", inheritance, 0x160, 0x20, true, 0xe248395f02d3c701)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ACTRL_ACCESS_ENTRYW.lpInheritProperty", lp_inherit_property, 0x180, 0x40, true, 0x2520a3a3174cf667)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif