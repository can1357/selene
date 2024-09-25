#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_USB_PORT_EXT_STATUS_AND_CHANGE.AsUlong64", as_ulong64, 0x0, 0x40, true, 0x7c8af2112bcc52da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_port_status_and_change_t), "_USB_PORT_EXT_STATUS_AND_CHANGE.PortStatusChange", port_status_change, 0x0, 0x20, true, 0x537a7f95b1a88f11)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_port_ext_status_t), "_USB_PORT_EXT_STATUS_AND_CHANGE.PortExtStatus", port_ext_status, 0x20, 0x20, true, 0x5fec386b5f26d968)
#else
#define _m00
#define _m01
#define _m02
#endif