#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_OID_LIST.dwOIDCount", dw_oid_count, 0x0, 0x20, true, 0x145f5ed3aa23e101)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::bcrypt_oid_t*), "_BCRYPT_OID_LIST.pOIDs", p_oi_ds, 0x40, 0x40, true, 0x4d11243be68642ce)
#else
#define _m00
#define _m01
#endif