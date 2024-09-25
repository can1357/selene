#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_BASIC_CONSTRAINTS_INFO.SubjectType", subject_type, 0x0, 0xc0, true, 0x15244c580143a784)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_BASIC_CONSTRAINTS_INFO.fPathLenConstraint", f_path_len_constraint, 0xc0, 0x20, true, 0xc8adcd24f0015874)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_BASIC_CONSTRAINTS_INFO.dwPathLenConstraint", dw_path_len_constraint, 0xe0, 0x20, true, 0x7537e030d135245f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_BASIC_CONSTRAINTS_INFO.cSubtreesConstraint", c_subtrees_constraint, 0x100, 0x20, true, 0x5419eda41309e588)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CERT_BASIC_CONSTRAINTS_INFO.rgSubtreesConstraint", rg_subtrees_constraint, 0x140, 0x40, true, 0x6ca157fba30df9b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif