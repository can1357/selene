#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_EVENT_STATUS_NOTIFICATION.OperationCode", operation_code, 0x0, 0x8, true, 0xe28f1e4deb286545)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_GET_EVENT_STATUS_NOTIFICATION.Immediate", immediate, 0x8, 0x1, true, 0x36a5d55218a20e80, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_GET_EVENT_STATUS_NOTIFICATION.Lun", lun, 0xd, 0x3, true, 0xb858d21954d5c8cc, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_EVENT_STATUS_NOTIFICATION.NotificationClassRequest", notification_class_request, 0x20, 0x8, true, 0xbdbbd6b0c11135c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_GET_EVENT_STATUS_NOTIFICATION.EventListLength", event_list_length, 0x38, 0x10, true, 0xd19d01f7c4f466b4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_EVENT_STATUS_NOTIFICATION.Control", control, 0x48, 0x8, true, 0x47e886cbd6795bc4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif