#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_CLOCK_STATE_CHANGE_EVENT.NewState", new_state, 0x0, 0x8, true, 0x4b2fab6f2b96dc4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_CLOCK_STATE_CHANGE_EVENT.PrevState", prev_state, 0x8, 0x8, true, 0xd4931495d4b1e35f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_CLOCK_STATE_CHANGE_EVENT.DeliveredIncrement", delivered_increment, 0x40, 0x40, true, 0xb2b4537e7e1a9e90)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_CLOCK_STATE_CHANGE_EVENT.RequestedIncrement", requested_increment, 0x80, 0x40, true, 0xad25af073c4f54d2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_CLOCK_STATE_CHANGE_EVENT.NextClockUpdateTime", next_clock_update_time, 0x40, 0x40, true, 0x824d8b4a2efe72fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif