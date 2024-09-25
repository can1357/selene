#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_PERIODIC_CAPTURE_STATE_INFO.CaptureStateFrequencyInSeconds", capture_state_frequency_in_seconds, 0x0, 0x20, true, 0x2ca868139391beed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRACE_PERIODIC_CAPTURE_STATE_INFO.ProviderCount", provider_count, 0x20, 0x10, true, 0x93e1b3f9a81189bb)
#else
#define _m00
#define _m01
#endif