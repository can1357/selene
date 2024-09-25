#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0x6f8039860c16890e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_5.EvtTimerFunc", evt_timer_func, 0x0, 0x0, false, 0x7f9b446919282619)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_TIMER_CONFIG_V1_5.Period", period, 0x0, 0x0, false, 0xd748ce645e5781e6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_5.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x4f8656662c924c24)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif