#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_SET_CONTEXT_STATE.ConnectionId", connection_id, 0x0, 0x20, true, 0xd9265e8dbe2a5686)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::activation_command_t), "_WWAN_SET_CONTEXT_STATE.ActivationCommand", activation_command, 0x20, 0x20, true, 0xf39302acfbced516)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 101>), "_WWAN_SET_CONTEXT_STATE.AccessString", access_string, 0x40, 0x50, true, 0x29ca518c1af41558)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_WWAN_SET_CONTEXT_STATE.UserName", user_name, 0x690, 0x0, true, 0x3c1bd90e3e3f04b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_WWAN_SET_CONTEXT_STATE.Password", password, 0x1690, 0x0, true, 0x7b5cee0d75099d3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::compression_t), "_WWAN_SET_CONTEXT_STATE.Compression", compression, 0x26a0, 0x20, true, 0xd42d9383f565589e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::auth_protocol_t), "_WWAN_SET_CONTEXT_STATE.AuthType", auth_type, 0x26c0, 0x20, true, 0xdca1983552801450)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::ip_type_t), "_WWAN_SET_CONTEXT_STATE.IPType", ip_type, 0x26e0, 0x20, true, 0x5171984d489597c6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::psmedia_preference_t), "_WWAN_SET_CONTEXT_STATE.MediaPreference", media_preference, 0x2700, 0x20, true, 0xd5fb4164584edfd2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::configuration_source_t), "_WWAN_SET_CONTEXT_STATE.ConnectionMediaSource", connection_media_source, 0x2720, 0x20, true, 0x1c38cd844c8c1445)
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
#endif