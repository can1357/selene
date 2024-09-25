#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PROCESSOR_IDLESTATE_INFO.TimeCheck", time_check, 0x0, 0x20, true, 0xfe8aa5ab73fda6d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PROCESSOR_IDLESTATE_INFO.DemotePercent", demote_percent, 0x20, 0x8, true, 0xb4932ed49c2cf5cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PROCESSOR_IDLESTATE_INFO.PromotePercent", promote_percent, 0x28, 0x8, true, 0x69f09d1bf72d733b)
#else
#define _m00
#define _m01
#define _m02
#endif