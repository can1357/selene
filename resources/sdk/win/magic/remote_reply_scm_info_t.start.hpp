#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REMOTE_REPLY_SCM_INFO.Oxid", oxid, 0x0, 0x40, true, 0xa0fe7f5365fa4233)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t*), "_REMOTE_REPLY_SCM_INFO.pdsaOxidBindings", pdsa_oxid_bindings, 0x40, 0x40, true, 0x98d9389d82956ab6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_REMOTE_REPLY_SCM_INFO.ipidRemUnknown", ipid_rem_unknown, 0x80, 0x80, true, 0x138c68785fc29ff7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMOTE_REPLY_SCM_INFO.authnHint", authn_hint, 0x100, 0x20, true, 0xe40c9613cab64586)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "_REMOTE_REPLY_SCM_INFO.serverVersion", server_version, 0x120, 0x20, true, 0xcf9b3dbc26f7327d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif