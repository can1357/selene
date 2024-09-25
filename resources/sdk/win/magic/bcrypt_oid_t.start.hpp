#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_OID.cbOID", cb_oid, 0x0, 0x20, true, 0x33d5f462a2b48098)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_BCRYPT_OID.pbOID", pb_oid, 0x40, 0x40, true, 0x34cc18e62557d390)
#else
#define _m00
#define _m01
#endif