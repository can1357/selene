#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_KEY_ACCESS_POLICY_BLOB.dwVersion", dw_version, 0x0, 0x20, true, 0xdae6bffb7c19f889)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_KEY_ACCESS_POLICY_BLOB.dwPolicyFlags", dw_policy_flags, 0x20, 0x20, true, 0xeaba951b13ed265c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_KEY_ACCESS_POLICY_BLOB.cbUserSid", cb_user_sid, 0x40, 0x20, true, 0x137d78f9eca70c1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_KEY_ACCESS_POLICY_BLOB.cbApplicationSid", cb_application_sid, 0x60, 0x20, true, 0x2a5018d11b3ef672)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif