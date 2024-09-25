#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_7.Size", size, 0x0, 0x0, false, 0xef90cf379d40b7fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_7.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0xbaa86af3edcc8e04)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_7.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0x111276a7b8c013d1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_7.Interval", interval, 0x0, 0x0, false, 0xce6ce723b48fb254)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_7.SettingIndex", setting_index, 0x0, 0x0, false, 0x886a9d276c6f6621)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_7.PipeType", pipe_type, 0x0, 0x0, false, 0xca29e7f8873a2cab)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_7.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0x999e553d7068ff5c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif