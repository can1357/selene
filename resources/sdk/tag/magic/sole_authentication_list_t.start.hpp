#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOLE_AUTHENTICATION_LIST.cAuthInfo", c_auth_info, 0x0, 0x20, true, 0xb17010540d9c1735)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sole_authentication_info_t*), "tagSOLE_AUTHENTICATION_LIST.aAuthInfo", a_auth_info, 0x40, 0x40, true, 0x26b30cb98f9e612a)
#else
#define _m00
#define _m01
#endif