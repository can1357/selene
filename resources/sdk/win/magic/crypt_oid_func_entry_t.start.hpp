#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_CRYPT_OID_FUNC_ENTRY.pszOID", psz_oid, 0x0, 0x40, true, 0x2d0524754b9c72fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_OID_FUNC_ENTRY.pvFuncAddr", pv_func_addr, 0x40, 0x40, true, 0xcbe7a1e0ea7fdcc)
#else
#define _m00
#define _m01
#endif