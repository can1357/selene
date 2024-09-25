#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_ACTIVITY_MODERATION_INFO.Identifier", identifier, 0x0, 0x80, true, 0xe0a59d7dca99cbc9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::system_activity_moderation_state_t), "_SYSTEM_ACTIVITY_MODERATION_INFO.ModerationState", moderation_state, 0x80, 0x20, true, 0xbd7958693f95e6ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::system_activity_moderation_app_type_t), "_SYSTEM_ACTIVITY_MODERATION_INFO.AppType", app_type, 0xa0, 0x20, true, 0xc67b4eb7bbcc9167)
#else
#define _m00
#define _m01
#define _m02
#endif