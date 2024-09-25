#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_IDLE_INFORMATION.IdleTime", idle_time, 0x0, 0x40, true, 0xbcaa410bbbe053db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_IDLE_INFORMATION.C1Time", c1_time, 0x40, 0x40, true, 0xfadff07b362df3b5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_IDLE_INFORMATION.C2Time", c2_time, 0x80, 0x40, true, 0x2423e98ba27d15c9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_IDLE_INFORMATION.C3Time", c3_time, 0xc0, 0x40, true, 0xa8c039435cf101c8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_IDLE_INFORMATION.C1Transitions", c1_transitions, 0x100, 0x20, true, 0xe405f011598c5bd9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_IDLE_INFORMATION.C2Transitions", c2_transitions, 0x120, 0x20, true, 0x6e5f19b1b2ecbce)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_IDLE_INFORMATION.C3Transitions", c3_transitions, 0x140, 0x20, true, 0x374c00d2259933c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif