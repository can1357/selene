#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_PORT_STATUS.AsUshort16", as_ushort16, 0x0, 0x10, true, 0x387662049fe4d9f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_20_port_status_t), "_USB_PORT_STATUS.Usb20PortStatus", usb20_port_status, 0x0, 0x10, true, 0xee422a9634dee7a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_30_port_status_t), "_USB_PORT_STATUS.Usb30PortStatus", usb30_port_status, 0x0, 0x10, true, 0x8c87c966951e4df3)
#else
#define _m00
#define _m01
#define _m02
#endif