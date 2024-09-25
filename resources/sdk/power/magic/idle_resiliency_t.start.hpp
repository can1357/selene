#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_IDLE_RESILIENCY.CoalescingTimeout", coalescing_timeout, 0x0, 0x20, true, 0x8708ff285899757)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_IDLE_RESILIENCY.IdleResiliencyPeriod", idle_resiliency_period, 0x20, 0x20, true, 0x1492a4120b227995)
#else
#define _m00
#define _m01
#endif