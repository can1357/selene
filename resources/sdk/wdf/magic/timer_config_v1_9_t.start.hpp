#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0x43a05b99ca0bf51e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_9.EvtTimerFunc", evt_timer_func, 0x0, 0x0, false, 0x5e873e6ac7820a27)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_9.Period", period, 0x0, 0x0, false, 0x8fce7067158f4819)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_9.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xababa81b290d16d4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_9.TolerableDelay", tolerable_delay, 0x0, 0x0, false, 0xbcd8dcf80651e278)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif