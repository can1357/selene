#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_KEEPALIVE_COUNT_INFORMATION.WakeCount", wake_count, 0x0, 0x20, true, 0xacab4eaef622f86c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_KEEPALIVE_COUNT_INFORMATION.NoWakeCount", no_wake_count, 0x20, 0x20, true, 0x471f4e92c2ce9077)
#else
#define _m00
#define _m01
#endif