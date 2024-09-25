#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_PORT_CHANGE.AsUshort16", as_ushort16, 0x0, 0x10, true, 0xac67934eea9cc269)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_20_port_change_t), "_USB_PORT_CHANGE.Usb20PortChange", usb20_port_change, 0x0, 0x10, true, 0x33833371049046f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_30_port_change_t), "_USB_PORT_CHANGE.Usb30PortChange", usb30_port_change, 0x0, 0x10, true, 0x3eac62a4fded1429)
#else
#define _m00
#define _m01
#define _m02
#endif