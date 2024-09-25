#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_PORT_STATUS_AND_CHANGE.AsUlong32", as_ulong32, 0x0, 0x20, true, 0x34734ed24222b7ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_port_status_t), "_USB_PORT_STATUS_AND_CHANGE.PortStatus", port_status, 0x0, 0x10, true, 0x45ef13d9fb5650ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_port_change_t), "_USB_PORT_STATUS_AND_CHANGE.PortChange", port_change, 0x10, 0x10, true, 0x398c508ab7c6f02b)
#else
#define _m00
#define _m01
#define _m02
#endif