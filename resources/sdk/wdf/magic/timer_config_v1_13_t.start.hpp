#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x2e3565e8e78693ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_13.EvtTimerFunc", evt_timer_func, 0x0, 0x0, false, 0x7efbd60c061a1eca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_13.Period", period, 0x0, 0x0, false, 0xa391fc82aecb26e3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_13.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x287889fb12ad9ca5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_13.TolerableDelay", tolerable_delay, 0x0, 0x0, false, 0xd7d7e2ae0cce988b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_13.UseHighResolutionTimer", use_high_resolution_timer, 0x0, 0x0, false, 0x9c0ba911934882d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif