#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_KEYGEN_REQUEST_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xd0bef403a8e8402c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_public_key_info_t), "_CERT_KEYGEN_REQUEST_INFO.SubjectPublicKeyInfo", subject_public_key_info, 0x40, 0x80, true, 0x3cb58d7fd4cc5ee1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_KEYGEN_REQUEST_INFO.pwszChallengeString", pwsz_challenge_string, 0x1c0, 0x40, true, 0x8e0de74aff6489fa)
#else
#define _m00
#define _m01
#define _m02
#endif