#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CERT_PRIVATE_KEY_VALIDITY.NotBefore", not_before, 0x0, 0x40, true, 0xbfa2eb2b6919f963)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CERT_PRIVATE_KEY_VALIDITY.NotAfter", not_after, 0x40, 0x40, true, 0xad757b4d761b56f)
#else
#define _m00
#define _m01
#endif