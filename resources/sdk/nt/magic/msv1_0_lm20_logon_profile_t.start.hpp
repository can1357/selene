#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_profile_buffer_type_t), "_MSV1_0_LM20_LOGON_PROFILE.MessageType", message_type, 0x0, 0x20, true, 0xb905dfe20dfd8e78)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MSV1_0_LM20_LOGON_PROFILE.KickOffTime", kick_off_time, 0x40, 0x40, true, 0x4b62f758747f2056)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MSV1_0_LM20_LOGON_PROFILE.LogoffTime", logoff_time, 0x80, 0x40, true, 0x39a29dfc0290e88e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_LM20_LOGON_PROFILE.UserFlags", user_flags, 0xc0, 0x20, true, 0x3e6ef82f41c48e3f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MSV1_0_LM20_LOGON_PROFILE.UserSessionKey", user_session_key, 0xe0, 0x80, true, 0xbb9a8ff9a52e217b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_LM20_LOGON_PROFILE.LogonDomainName", logon_domain_name, 0x180, 0x80, true, 0x9c1e2436fca222d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MSV1_0_LM20_LOGON_PROFILE.LanmanSessionKey", lanman_session_key, 0x200, 0x40, true, 0xba58ff2ca2f795e5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_LM20_LOGON_PROFILE.LogonServer", logon_server, 0x240, 0x80, true, 0x26dea4d1b534a2bc)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_LM20_LOGON_PROFILE.UserParameters", user_parameters, 0x2c0, 0x80, true, 0xf6f6675e6adb2f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif