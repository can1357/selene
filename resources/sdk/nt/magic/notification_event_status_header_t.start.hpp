#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_NOTIFICATION_EVENT_STATUS_HEADER.EventDataLength", event_data_length, 0x0, 0x10, true, 0x6b410332480c8a06)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_NOTIFICATION_EVENT_STATUS_HEADER.NotificationClass", notification_class, 0x10, 0x3, true, 0xa1443e0487c53fdd, 3, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NOTIFICATION_EVENT_STATUS_HEADER.NEA", nea, 0x17, 0x1, true, 0x353f9b0636e069e8, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NOTIFICATION_EVENT_STATUS_HEADER.SupportedEventClasses", supported_event_classes, 0x18, 0x8, true, 0x371905f939449dd6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_NOTIFICATION_EVENT_STATUS_HEADER.ClassEventData", class_event_data, 0x20, 0x0, true, 0x5475c15e4f97ac8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif