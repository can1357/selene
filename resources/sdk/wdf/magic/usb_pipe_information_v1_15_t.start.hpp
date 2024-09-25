#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_15.Size", size, 0x0, 0x0, false, 0x34e05fcd451d14ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_15.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0xab09ff56535161e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_15.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0x39eaf9d55546ef94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_15.Interval", interval, 0x0, 0x0, false, 0xc6af7de111b57589)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_15.SettingIndex", setting_index, 0x0, 0x0, false, 0x51e86c194e47a73a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_15.PipeType", pipe_type, 0x0, 0x0, false, 0x476a2946ed670bac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_15.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0x282b59c035cad860)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif