#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crl_dist_point_name_t), "_CRL_DIST_POINT.DistPointName", dist_point_name, 0x0, 0xc0, true, 0x223d20a930966aba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CRL_DIST_POINT.ReasonFlags", reason_flags, 0xc0, 0xc0, true, 0x67308d1912fd3242)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_alt_name_info_t), "_CRL_DIST_POINT.CRLIssuer", crl_issuer, 0x180, 0x80, true, 0x2c1f025e86525b54)
#else
#define _m00
#define _m01
#define _m02
#endif