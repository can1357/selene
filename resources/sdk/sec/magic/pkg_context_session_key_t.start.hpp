#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_SessionKey.SessionKeyLength", session_key_length, 0x0, 0x20, true, 0xa686e9388d8bc25a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SecPkgContext_SessionKey.SessionKey", session_key, 0x40, 0x40, true, 0xd236716c23fbcc19)
#else
#define _m00
#define _m01
#endif