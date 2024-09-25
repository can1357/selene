#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TIMER_CONFIG_V1_7.Size", size, 0x0, 0x20, true, 0x6e764c040da4321a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "_WDF_TIMER_CONFIG_V1_7.EvtTimerFunc", evt_timer_func, 0x40, 0x40, true, 0x309966ccc6d8e39a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_TIMER_CONFIG_V1_7.Period", period, 0x80, 0x20, true, 0x316a57a19b090503)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_TIMER_CONFIG_V1_7.AutomaticSerialization", automatic_serialization, 0xa0, 0x8, true, 0xedb3ebc9b58e3b58)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif