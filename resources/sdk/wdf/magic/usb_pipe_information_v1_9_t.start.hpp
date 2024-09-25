#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_9.Size", size, 0x0, 0x0, false, 0x33dbc7ee04d6518a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_9.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0x2c95f0915882ece3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_9.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0x1d1a852c60aa1c1d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_9.Interval", interval, 0x0, 0x0, false, 0x595e055f28911867)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_9.SettingIndex", setting_index, 0x0, 0x0, false, 0xb3823f9f7c028078)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_9.PipeType", pipe_type, 0x0, 0x0, false, 0xf2c0708ad002c24d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_9.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0xd14b7e48a9ca1a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif