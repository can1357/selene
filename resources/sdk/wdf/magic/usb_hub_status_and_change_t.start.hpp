#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_HUB_STATUS_AND_CHANGE.AsUlong32", as_ulong32, 0x0, 0x20, true, 0xedc9ce9041611209)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_hub_status_t), "_USB_HUB_STATUS_AND_CHANGE.HubStatus", hub_status, 0x0, 0x10, true, 0x331e5ad6350b0c93)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wdf::usb_hub_change_t), "_USB_HUB_STATUS_AND_CHANGE.HubChange", hub_change, 0x10, 0x10, true, 0xed5cf0da124decb8)
#else
#define _m00
#define _m01
#define _m02
#endif