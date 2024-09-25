#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_exw_t), "_SEC_WINNT_AUTH_IDENTITY_INFO.AuthIdExw", auth_id_exw, 0x0, 0x40, true, 0x438b7d077477e3ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_exa_t), "_SEC_WINNT_AUTH_IDENTITY_INFO.AuthIdExa", auth_id_exa, 0x0, 0x40, true, 0x2f0637f1721c948a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_a_t), "_SEC_WINNT_AUTH_IDENTITY_INFO.AuthId_a", auth_id_a, 0x0, 0x80, true, 0xc968b852d9af6546)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_w_t), "_SEC_WINNT_AUTH_IDENTITY_INFO.AuthId_w", auth_id_w, 0x0, 0x80, true, 0x517e05195583b58a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_ex2_t), "_SEC_WINNT_AUTH_IDENTITY_INFO.AuthIdEx2", auth_id_ex2, 0x0, 0x80, true, 0x38cfa7b924dd2434)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif