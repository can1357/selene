#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISABLE_KTIMER2_EVENT.TimerKey", timer_key, 0x0, 0x40, true, 0xfd5ce44253570dd4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISABLE_KTIMER2_EVENT.DisableCallback", disable_callback, 0x40, 0x40, true, 0x1516a1b74622dd81)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DISABLE_KTIMER2_EVENT.DisableContextKey", disable_context_key, 0x80, 0x40, true, 0xb3d691c8ffd8d300)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_DISABLE_KTIMER2_EVENT.Flags", flags, 0xc0, 0x8, true, 0xe22784e0b98327c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif