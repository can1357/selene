#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0x56732a8e0809e614)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_1.EvtTimerFunc", evt_timer_func, 0x0, 0x0, false, 0x92c5d533e1bbac03)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_TIMER_CONFIG_V1_1.Period", period, 0x0, 0x0, false, 0xd70054c24e96292a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_1.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x88463c3ade51720b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif