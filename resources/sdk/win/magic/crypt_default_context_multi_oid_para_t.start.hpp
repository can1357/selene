#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_DEFAULT_CONTEXT_MULTI_OID_PARA.cOID", c_oid, 0x0, 0x20, true, 0x156cae3c8c3f6b03)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char**), "_CRYPT_DEFAULT_CONTEXT_MULTI_OID_PARA.rgpszOID", rgpsz_oid, 0x40, 0x40, true, 0x43279b25e25e2656)
#else
#define _m00
#define _m01
#endif