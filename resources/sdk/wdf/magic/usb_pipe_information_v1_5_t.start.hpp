#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_5.Size", size, 0x0, 0x0, false, 0xce9d099b5b9aa156)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_5.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0xb554699763cb0f36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_5.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0x48b8078894fc10e1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_5.Interval", interval, 0x0, 0x0, false, 0x9db8f6e6fe573df6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_5.SettingIndex", setting_index, 0x0, 0x0, false, 0x892ff5b438755ae3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_5.PipeType", pipe_type, 0x0, 0x0, false, 0x1d08f39f6420431c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_5.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0x65c4b1b87d3d7600)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif