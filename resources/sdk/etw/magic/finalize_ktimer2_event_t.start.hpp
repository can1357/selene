#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_FINALIZE_KTIMER2_EVENT.TimerKey", timer_key, 0x0, 0x40, true, 0x32897dbab7815a3a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_FINALIZE_KTIMER2_EVENT.DisableCallback", disable_callback, 0x40, 0x40, true, 0xcb4dc489dac44da5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_FINALIZE_KTIMER2_EVENT.DisableContextKey", disable_context_key, 0x80, 0x40, true, 0xa0e3bc427ced714f)
#else
#define _m00
#define _m01
#define _m02
#endif