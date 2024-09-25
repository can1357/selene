#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_auth_algorithm_t), "DOT11_AUTH_CIPHER_PAIR.AuthAlgoId", auth_algo_id, 0x0, 0x20, true, 0x6d8591bb00b80744)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_cipher_algorithm_t), "DOT11_AUTH_CIPHER_PAIR.CipherAlgoId", cipher_algo_id, 0x20, 0x20, true, 0x711c198c071cd583)
#else
#define _m00
#define _m01
#endif