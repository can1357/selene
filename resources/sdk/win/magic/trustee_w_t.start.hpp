#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::trustee_w_t*), "_TRUSTEE_W.pMultipleTrustee", p_multiple_trustee, 0x0, 0x40, true, 0x94431d52da5d850c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::multiple_trustee_operation_t), "_TRUSTEE_W.MultipleTrusteeOperation", multiple_trustee_operation, 0x40, 0x20, true, 0x7baae3d0c56d56eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::trustee_form_t), "_TRUSTEE_W.TrusteeForm", trustee_form, 0x60, 0x20, true, 0x3d761bbbf7c997ba)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::trustee_type_t), "_TRUSTEE_W.TrusteeType", trustee_type, 0x80, 0x20, true, 0xeb8903b80a68b867)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_TRUSTEE_W.ptstrName", ptstr_name, 0xc0, 0x40, true, 0xd5c5198f5da88c3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif