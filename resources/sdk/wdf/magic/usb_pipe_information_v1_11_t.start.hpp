#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_11.Size", size, 0x0, 0x0, false, 0x24c3827a9bb23dd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_11.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0x4f193d93c5c0bb67)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_11.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0x5795164f0315a48e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_11.Interval", interval, 0x0, 0x0, false, 0x4052deeca235410f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_11.SettingIndex", setting_index, 0x0, 0x0, false, 0x6489c7e67cc0e1b0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_11.PipeType", pipe_type, 0x0, 0x0, false, 0xb45975dad203bbe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_11.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0xc4bd1eba47fabb29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif