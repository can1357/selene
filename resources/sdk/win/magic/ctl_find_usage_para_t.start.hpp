#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_FIND_USAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x7d50367f0665f2c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_usage_t), "_CTL_FIND_USAGE_PARA.SubjectUsage", subject_usage, 0x40, 0x80, true, 0xfa307f47f98d9be2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CTL_FIND_USAGE_PARA.ListIdentifier", list_identifier, 0xc0, 0x80, true, 0xbaa74c2bdd444485)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_info_t*), "_CTL_FIND_USAGE_PARA.pSigner", p_signer, 0x140, 0x40, true, 0xdc59d865cea24bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif