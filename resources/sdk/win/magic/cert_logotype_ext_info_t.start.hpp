#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_EXT_INFO.cCommunityLogo", c_community_logo, 0x0, 0x20, true, 0x737550468c65d523)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_info_t*), "_CERT_LOGOTYPE_EXT_INFO.rgCommunityLogo", rg_community_logo, 0x40, 0x40, true, 0x5bda681720ee735e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_info_t*), "_CERT_LOGOTYPE_EXT_INFO.pIssuerLogo", p_issuer_logo, 0x80, 0x40, true, 0x4207809cd1991cad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_info_t*), "_CERT_LOGOTYPE_EXT_INFO.pSubjectLogo", p_subject_logo, 0xc0, 0x40, true, 0xe29f559dd5aa965f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_EXT_INFO.cOtherLogo", c_other_logo, 0x100, 0x20, true, 0x3e9afc59a7b52556)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_other_logotype_info_t*), "_CERT_LOGOTYPE_EXT_INFO.rgOtherLogo", rg_other_logo, 0x140, 0x40, true, 0x7e72e3b81c54542d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif