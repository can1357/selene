#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION.Size", size, 0x0, 0x20, true, 0xfd7890ff20c803a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION.MaximumPacketSize", maximum_packet_size, 0x20, 0x20, true, 0x339f4568b0f91688)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION.EndpointAddress", endpoint_address, 0x40, 0x8, true, 0x875c29805ba3e573)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION.Interval", interval, 0x48, 0x8, true, 0xa773331221f2e3d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_PIPE_INFORMATION.SettingIndex", setting_index, 0x50, 0x8, true, 0xe28b0b516f95ba8d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_pipe_type_t), "_WDF_USB_PIPE_INFORMATION.PipeType", pipe_type, 0x60, 0x20, true, 0xbaf8a9e98a712e34)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_PIPE_INFORMATION.MaximumTransferSize", maximum_transfer_size, 0x80, 0x20, true, 0x77c013590e35c7a0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif