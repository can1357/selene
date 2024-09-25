#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NOTIFICATION_MEDIA_STATUS.MediaEvent", media_event, 0x0, 0x4, true, 0xebcf0e4f00b23de7, 4, uint8_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NOTIFICATION_MEDIA_STATUS.PowerStatus", power_status, 0x8, 0x8, true, 0xb0aeab68455cbb44)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NOTIFICATION_MEDIA_STATUS.MediaStatus", media_status, 0x8, 0x8, true, 0xfbd9c039659ba476)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NOTIFICATION_MEDIA_STATUS.DoorTrayOpen", door_tray_open, 0x8, 0x1, true, 0x8b1a652f84cce26a, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NOTIFICATION_MEDIA_STATUS.MediaPresent", media_present, 0x9, 0x1, true, 0xae3f1392a982a477, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_NOTIFICATION_MEDIA_STATUS.ReservedX", reserved_x, 0xa, 0x6, true, 0x5d2c67cf79e6f886, 6, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NOTIFICATION_MEDIA_STATUS.StartSlot", start_slot, 0x10, 0x8, true, 0xb7e90e8270bb342d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NOTIFICATION_MEDIA_STATUS.EndSlot", end_slot, 0x18, 0x8, true, 0x591535944d75d0bf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif