#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_DEVICE_INFO.displayOrientation", display_orientation, 0x0, 0x20, true, 0xa660bd6977f55ec2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagPOINTER_DEVICE_INFO.device", device, 0x40, 0x40, true, 0x4e67335c6428d66f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::pointer_device_type_t), "tagPOINTER_DEVICE_INFO.pointerDeviceType", pointer_device_type, 0x80, 0x20, true, 0xa246b5f41160d03c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmonitor_t*), "tagPOINTER_DEVICE_INFO.monitor", monitor, 0xc0, 0x40, true, 0xbdd24271a8932f7c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_DEVICE_INFO.startingCursorId", starting_cursor_id, 0x100, 0x20, true, 0xa2ede08578a167f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPOINTER_DEVICE_INFO.maxActiveContacts", max_active_contacts, 0x120, 0x10, true, 0xe4600068713a0537)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 520>), "tagPOINTER_DEVICE_INFO.productString", product_string, 0x130, 0x80, true, 0xf267ce7f2010f797)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif