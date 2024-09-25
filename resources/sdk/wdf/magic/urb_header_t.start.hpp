#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_HEADER.Length", length, 0x0, 0x10, true, 0x2bfedb33e1e68254)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_HEADER.Function", function, 0x10, 0x10, true, 0x7e820b8a2fc1474b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_URB_HEADER.Status", status, 0x20, 0x20, true, 0x289e51ece8c4c24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_HEADER.UsbdDeviceHandle", usbd_device_handle, 0x40, 0x40, true, 0x73c4213637f0942b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_HEADER.UsbdFlags", usbd_flags, 0x80, 0x20, true, 0xe794ad0491135180)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif