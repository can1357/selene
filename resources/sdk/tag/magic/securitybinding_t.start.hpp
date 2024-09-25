#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSECURITYBINDING.wAuthnSvc", w_authn_svc, 0x0, 0x10, true, 0xfca695ec816d042b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSECURITYBINDING.wAuthzSvc", w_authz_svc, 0x10, 0x10, true, 0xb32d811f452944c5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSECURITYBINDING.aPrincName", a_princ_name, 0x20, 0x10, true, 0x88e8ccc81c85111)
#else
#define _m00
#define _m01
#define _m02
#endif