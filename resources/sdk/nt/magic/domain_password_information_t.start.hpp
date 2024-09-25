#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOMAIN_PASSWORD_INFORMATION.MinPasswordLength", min_password_length, 0x0, 0x10, true, 0xf4c28c6b2a461da3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOMAIN_PASSWORD_INFORMATION.PasswordHistoryLength", password_history_length, 0x10, 0x10, true, 0x1e35bd3b2e63274)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOMAIN_PASSWORD_INFORMATION.PasswordProperties", password_properties, 0x20, 0x20, true, 0xeb9cb772088083b3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DOMAIN_PASSWORD_INFORMATION.MaxPasswordAge", max_password_age, 0x40, 0x40, true, 0x4eb23ed69a7dc67b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DOMAIN_PASSWORD_INFORMATION.MinPasswordAge", min_password_age, 0x80, 0x40, true, 0x9873ee68d756d01b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif