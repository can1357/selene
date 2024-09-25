#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TYPE_CONFIG.Size", size, 0x0, 0x20, true, 0xd7d7f6ac00a70583)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "_WDF_IO_TYPE_CONFIG.ReadWriteIoType", read_write_io_type, 0x20, 0x20, true, 0xe8c476e27537e6be)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "_WDF_IO_TYPE_CONFIG.DeviceControlIoType", device_control_io_type, 0x40, 0x20, true, 0x48d7d51f9bd899d0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TYPE_CONFIG.DirectTransferThreshold", direct_transfer_threshold, 0x60, 0x20, true, 0x72e6cefe629d0011)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif