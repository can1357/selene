#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECPKG_APP_MODE_INFO.UserFunction", user_function, 0x0, 0x20, true, 0x974a0befaa08d976)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECPKG_APP_MODE_INFO.Argument1", argument1, 0x40, 0x40, true, 0xfcec7e27e65c06bb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SECPKG_APP_MODE_INFO.Argument2", argument2, 0x80, 0x40, true, 0xfcab05cc1309cd9f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::buffer_t), "_SECPKG_APP_MODE_INFO.UserData", user_data, 0xc0, 0x80, true, 0xd5f732a8359765d4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECPKG_APP_MODE_INFO.ReturnToLsa", return_to_lsa, 0x140, 0x8, true, 0xc22e733a8e475671)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif