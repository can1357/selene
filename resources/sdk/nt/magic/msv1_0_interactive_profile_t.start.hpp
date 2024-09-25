#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_profile_buffer_type_t), "_MSV1_0_INTERACTIVE_PROFILE.MessageType", message_type, 0x0, 0x20, true, 0x8ec68516b25a4f8d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MSV1_0_INTERACTIVE_PROFILE.LogonCount", logon_count, 0x20, 0x10, true, 0x150bdac0c0062d02)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MSV1_0_INTERACTIVE_PROFILE.BadPasswordCount", bad_password_count, 0x30, 0x10, true, 0x3c1d8f31f377a47b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MSV1_0_INTERACTIVE_PROFILE.LogonTime", logon_time, 0x40, 0x40, true, 0xfacddd935d7b44cf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MSV1_0_INTERACTIVE_PROFILE.LogoffTime", logoff_time, 0x80, 0x40, true, 0x658716562d52848b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MSV1_0_INTERACTIVE_PROFILE.KickOffTime", kick_off_time, 0xc0, 0x40, true, 0x9ab332e589174460)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MSV1_0_INTERACTIVE_PROFILE.PasswordLastSet", password_last_set, 0x100, 0x40, true, 0xc4f6fc40fd1fb47c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MSV1_0_INTERACTIVE_PROFILE.PasswordCanChange", password_can_change, 0x140, 0x40, true, 0x1b7c1dcddd195d1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MSV1_0_INTERACTIVE_PROFILE.PasswordMustChange", password_must_change, 0x180, 0x40, true, 0x4055a9512d0f84da)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_PROFILE.LogonScript", logon_script, 0x1c0, 0x80, true, 0xb1d81fc7bb4fb866)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_PROFILE.HomeDirectory", home_directory, 0x240, 0x80, true, 0xf2c613a46eb60985)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_PROFILE.FullName", full_name, 0x2c0, 0x80, true, 0xc1086a81dbc5c20)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_PROFILE.ProfilePath", profile_path, 0x340, 0x80, true, 0xff0feda9f51c2b97)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_PROFILE.HomeDirectoryDrive", home_directory_drive, 0x3c0, 0x80, true, 0xbf5ec6deb4ec56fb)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_PROFILE.LogonServer", logon_server, 0x440, 0x80, true, 0x57b627a076cd3204)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_INTERACTIVE_PROFILE.UserFlags", user_flags, 0x4c0, 0x20, true, 0xa48d8f82d1c9f7c8)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif