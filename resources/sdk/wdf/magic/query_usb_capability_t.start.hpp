#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_QUERY_USB_CAPABILITY.Version", version, 0x0, 0x10, true, 0x8e377e0dc75a8e1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_QUERY_USB_CAPABILITY.Size", size, 0x10, 0x10, true, 0x5c5c4da30d27e4ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbdi_handle_t*), "_QUERY_USB_CAPABILITY.USBDIHandle", usbdi_handle, 0x40, 0x40, true, 0xc733c8bb6a5caede)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_QUERY_USB_CAPABILITY.CapabilityType", capability_type, 0x80, 0x80, true, 0x863fdfabb9418141)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_USB_CAPABILITY.OutputBufferLength", output_buffer_length, 0x100, 0x20, true, 0x67b4b2dbe075e1f5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_USB_CAPABILITY.ResultLength", result_length, 0x120, 0x20, true, 0x94baf3af2a5d932e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif