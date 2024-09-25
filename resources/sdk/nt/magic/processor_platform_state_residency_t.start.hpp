#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_PLATFORM_STATE_RESIDENCY.Residency", residency, 0x0, 0x40, true, 0x3c7dca18951abd8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_PLATFORM_STATE_RESIDENCY.TransitionCount", transition_count, 0x40, 0x40, true, 0x465104cb7bcfc3b5)
#else
#define _m00
#define _m01
#endif