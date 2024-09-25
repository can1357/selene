#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x7298306d5649aeed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_17.EvtTimerFunc", evt_timer_func, 0x0, 0x0, false, 0x8c55fb3eb83f8b1d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_17.Period", period, 0x0, 0x0, false, 0xeb0fd5b6071b2fc2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_17.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x25eb3bc25f06dd6c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_17.TolerableDelay", tolerable_delay, 0x0, 0x0, false, 0x3cb0b62ccba5245c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_17.UseHighResolutionTimer", use_high_resolution_timer, 0x0, 0x0, false, 0xa66e450566e422f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif