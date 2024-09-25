#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::_802_11_authentication_mode_t), "_NDIS_802_11_AUTHENTICATION_ENCRYPTION.AuthModeSupported", auth_mode_supported, 0x0, 0x20, true, 0x6566d920c60d50f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::_802_11_wep_status_t), "_NDIS_802_11_AUTHENTICATION_ENCRYPTION.EncryptStatusSupported", encrypt_status_supported, 0x20, 0x20, true, 0xbbe735847534200)
#else
#define _m00
#define _m01
#endif