#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_POWER_STATUS.PowerEvent", power_event, 0x0, 0x4, true, 0xb685f438b0bac0a1, 4, uint8_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NOTIFICATION_POWER_STATUS.PowerStatus", power_status, 0x8, 0x8, true, 0x7c62fc35fbbe4837)
#else
#define _m00
#define _m01
#endif