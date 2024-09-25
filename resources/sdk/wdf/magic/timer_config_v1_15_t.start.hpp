#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0xdc01af4cc027877b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_15.EvtTimerFunc", evt_timer_func, 0x0, 0x0, false, 0xf28ee19d0dd86366)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_15.Period", period, 0x0, 0x0, false, 0x65bda7f5794d92b5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_15.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xa62d09a574d4b759)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_15.TolerableDelay", tolerable_delay, 0x0, 0x0, false, 0xdde10ff7322575f9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_15.UseHighResolutionTimer", use_high_resolution_timer, 0x0, 0x0, false, 0xd99adf2a138ffa0e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif