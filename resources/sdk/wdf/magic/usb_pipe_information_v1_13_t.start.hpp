#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_13.Size", size, 0x0, 0x0, false, 0x2ad497127700701)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_13.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0xe826f1a974fd475f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_13.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0xc5e9d694123ca661)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_13.Interval", interval, 0x0, 0x0, false, 0x9e23483ff2457d79)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_13.SettingIndex", setting_index, 0x0, 0x0, false, 0xe1cb5371eb6efadb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_13.PipeType", pipe_type, 0x0, 0x0, false, 0xb8a1d7e53d6457e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_13.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0x6370447c5028b7a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif