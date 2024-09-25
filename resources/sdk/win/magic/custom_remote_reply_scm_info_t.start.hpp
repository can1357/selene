#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_customREMOTE_REPLY_SCM_INFO.Oxid", oxid, 0x0, 0x40, true, 0x6bc32efbef74c157)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t*), "_customREMOTE_REPLY_SCM_INFO.pdsaOxidBindings", pdsa_oxid_bindings, 0x40, 0x40, true, 0xbf7b700f2056a1f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_customREMOTE_REPLY_SCM_INFO.ipidRemUnknown", ipid_rem_unknown, 0x80, 0x80, true, 0x670b8951e7542ee8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_customREMOTE_REPLY_SCM_INFO.authnHint", authn_hint, 0x100, 0x20, true, 0x909bdbbc0999bdd6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "_customREMOTE_REPLY_SCM_INFO.serverVersion", server_version, 0x120, 0x20, true, 0xf6c2c40ac30f5c8f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif