#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POWER_MONITOR_INVOCATION.Console", console, 0x0, 0x8, true, 0xe5a677a906a68d3c)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_POWER_MONITOR_INVOCATION.RequestReason", request_reason, 0x20, 0x20, true, 0x3646300caa8a2a7, 32, uint32_t)
#else
#define _m00
#define _m01
#endif