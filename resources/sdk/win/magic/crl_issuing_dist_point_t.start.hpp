#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crl_dist_point_name_t), "_CRL_ISSUING_DIST_POINT.DistPointName", dist_point_name, 0x0, 0xc0, true, 0xc666bfc663312e3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRL_ISSUING_DIST_POINT.fOnlyContainsUserCerts", f_only_contains_user_certs, 0xc0, 0x20, true, 0x500aa7fa06c186d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRL_ISSUING_DIST_POINT.fOnlyContainsCACerts", f_only_contains_ca_certs, 0xe0, 0x20, true, 0x4bc05d03d19230ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CRL_ISSUING_DIST_POINT.OnlySomeReasonFlags", only_some_reason_flags, 0x100, 0xc0, true, 0x76342c395fdd5fca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRL_ISSUING_DIST_POINT.fIndirectCRL", f_indirect_crl, 0x1c0, 0x20, true, 0xf1590a5fc269a8f1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif