#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_1.Size", size, 0x0, 0x0, false, 0xb9eba66714e4860f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_1.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0x447f8b417b7a116e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_1.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0x258217dcb8b313c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_1.Interval", interval, 0x0, 0x0, false, 0x24fd013ab5d329a6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_1.SettingIndex", setting_index, 0x0, 0x0, false, 0x8bc8328130f35276)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_1.PipeType", pipe_type, 0x0, 0x0, false, 0x4f41cc4f7ac1d116)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_1.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0x6f5d8db93fd8fc68)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif