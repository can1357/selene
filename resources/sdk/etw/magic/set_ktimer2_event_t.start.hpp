#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SET_KTIMER2_EVENT.DueTime", due_time, 0x0, 0x40, true, 0x6378265d58dff322)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SET_KTIMER2_EVENT.MaximumDueTime", maximum_due_time, 0x40, 0x40, true, 0x21f8833129088eda)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SET_KTIMER2_EVENT.Period", period, 0x80, 0x40, true, 0xf1735061eb941234)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SET_KTIMER2_EVENT.TimerKey", timer_key, 0xc0, 0x40, true, 0xc9df6f895afafc9a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SET_KTIMER2_EVENT.Callback", callback, 0x100, 0x40, true, 0xaf5c8fccf505d197)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SET_KTIMER2_EVENT.CallbackContextKey", callback_context_key, 0x140, 0x40, true, 0x2dfa63ad89dfa6bb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_SET_KTIMER2_EVENT.Flags", flags, 0x180, 0x8, true, 0xeb8ed2d3b3177c88)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif