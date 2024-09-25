#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_KTIMER_TABLE_STATE.LastTimerExpiration", last_timer_expiration, 0x0, 0x80, true, 0x8eb6524c01361ade)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_KTIMER_TABLE_STATE.LastTimerHand", last_timer_hand, 0x80, 0x40, true, 0x5d6b2b6686a000b1)
#else
#define _m00
#define _m01
#endif