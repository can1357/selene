#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_11.Size", size, 0x0, 0x20, true, 0x41ace1d15b1fd9b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_11.EvtTimerFunc", evt_timer_func, 0x40, 0x40, true, 0x399ece475f58a4ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_11.Period", period, 0x80, 0x20, true, 0x6d357901256f52dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_11.AutomaticSerialization", automatic_serialization, 0xa0, 0x8, true, 0x3526e469d21eb554)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_11.TolerableDelay", tolerable_delay, 0xc0, 0x20, true, 0xcbb9454cd3cfbb3d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif