#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENLISTMENT_HISTORY.Notification", notification, 0x0, 0x20, true, 0xe8bbd15c2ea6831e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kenlistment_state_t), "_KENLISTMENT_HISTORY.NewState", new_state, 0x20, 0x20, true, 0x511b5970962deab1)
#else
#define _m00
#define _m01
#endif