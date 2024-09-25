#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_BUSY_STATUS.DeviceBusyEvent", device_busy_event, 0x0, 0x4, true, 0xfd72a1b8ace48a35, 4, uint8_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NOTIFICATION_BUSY_STATUS.DeviceBusyStatus", device_busy_status, 0x8, 0x8, true, 0x42053063ba7750c9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_NOTIFICATION_BUSY_STATUS.Time", time, 0x10, 0x10, true, 0xbc093fcdb8307931)
#else
#define _m00
#define _m01
#define _m02
#endif