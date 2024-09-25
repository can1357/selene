#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REQUEST_REMOTE_WAKE_NOTIFICATION.Version", version, 0x0, 0x10, true, 0x45cf18115c40f822)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REQUEST_REMOTE_WAKE_NOTIFICATION.Size", size, 0x10, 0x10, true, 0xb9875bc1e9723b63)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_function_handle_t*), "_REQUEST_REMOTE_WAKE_NOTIFICATION.UsbdFunctionHandle", usbd_function_handle, 0x40, 0x40, true, 0x4ed53ebb77f25990)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REQUEST_REMOTE_WAKE_NOTIFICATION.Interface", interface, 0x80, 0x20, true, 0x6674321a022204ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif