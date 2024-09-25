#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_RSAKEY_BLOB.Magic", magic, 0x0, 0x20, true, 0x8b298eb0258dbe82)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_RSAKEY_BLOB.BitLength", bit_length, 0x20, 0x20, true, 0x410c9ee0b8de1646)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_RSAKEY_BLOB.cbPublicExp", cb_public_exp, 0x40, 0x20, true, 0x332d53577f763bca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_RSAKEY_BLOB.cbModulus", cb_modulus, 0x60, 0x20, true, 0xd9a4fe2777c99b5a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_RSAKEY_BLOB.cbPrime1", cb_prime1, 0x80, 0x20, true, 0xfbc330952f15c31f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_RSAKEY_BLOB.cbPrime2", cb_prime2, 0xa0, 0x20, true, 0xb8f500d97e8097a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif