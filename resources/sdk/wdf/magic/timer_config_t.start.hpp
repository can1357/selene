#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG.Size", size, 0x0, 0x20, true, 0x40a2a48cd5820681)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG.EvtTimerFunc", evt_timer_func, 0x40, 0x40, true, 0xf93a2f3474679fff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG.Period", period, 0x80, 0x20, true, 0xf302e4221a2d066a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG.AutomaticSerialization", automatic_serialization, 0xa0, 0x8, true, 0xe279136f59947a7e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG.TolerableDelay", tolerable_delay, 0xc0, 0x20, true, 0x4d44b01c8fa3e49d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG.UseHighResolutionTimer", use_high_resolution_timer, 0x100, 0x8, true, 0x6761fbf1d0e98346)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif