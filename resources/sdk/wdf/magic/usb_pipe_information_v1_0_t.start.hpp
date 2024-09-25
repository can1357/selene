#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_0.Size", size, 0x0, 0x0, false, 0xec24d1cbefd870bf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_0.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0xa8058a13bef3271a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_0.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0x76695892f07846c9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_0.Interval", interval, 0x0, 0x0, false, 0xc7d4f43cebe46ad1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_0.SettingIndex", setting_index, 0x0, 0x0, false, 0x6d9dbc0bc96399fe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_0.PipeType", pipe_type, 0x0, 0x0, false, 0x3aca4a5d8033c872)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_0.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0x3ba7465fd696caa6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif