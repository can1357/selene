#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_BASIC_CONSTRAINTS2_INFO.fCA", f_ca, 0x0, 0x20, true, 0x8527b3465a5dfe7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_BASIC_CONSTRAINTS2_INFO.fPathLenConstraint", f_path_len_constraint, 0x20, 0x20, true, 0x75ed1472b2d0343d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_BASIC_CONSTRAINTS2_INFO.dwPathLenConstraint", dw_path_len_constraint, 0x40, 0x20, true, 0x7a1beabaf52d4f02)
#else
#define _m00
#define _m01
#define _m02
#endif