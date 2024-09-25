#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0xba9e1d9afb4e6d4d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_0.EvtTimerFunc", evt_timer_func, 0x0, 0x0, false, 0x8d69a6526e616339)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_TIMER_CONFIG_V1_0.Period", period, 0x0, 0x0, false, 0xad259efeff89913c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_0.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xc000ec488ad2eb55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif