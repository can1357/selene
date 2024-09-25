#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_17.Size", size, 0x0, 0x0, false, 0xf948e68ad74555be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_17.MaximumPacketSize", maximum_packet_size, 0x0, 0x0, false, 0xa41bf9172111f2e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_17.EndpointAddress", endpoint_address, 0x0, 0x0, false, 0x2f9472d3986a3a2f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_17.Interval", interval, 0x0, 0x0, false, 0x6a1c3dafbfcdf42e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION_V1_17.SettingIndex", setting_index, 0x0, 0x0, false, 0x8d3286c0b15bc044)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION_V1_17.PipeType", pipe_type, 0x0, 0x0, false, 0xf20fd5b2af39a207)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION_V1_17.MaximumTransferSize", maximum_transfer_size, 0x0, 0x0, false, 0xcba0199aea1e2c5e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif