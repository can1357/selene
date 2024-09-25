#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT.EventAsUlong", event_as_ulong, 0x0, 0x20, true, 0x9c79a7b867862dfa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::hidsm_event_t), "_EVENT.HidsmEvent", hidsm_event, 0x0, 0x20, true, 0xe884648fa118430)
#else
#define _m00
#define _m01
#endif