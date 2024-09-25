#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TYPE_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0xc75e6ee2ad890f09)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "_WDF_IO_TYPE_CONFIG_V1_13.ReadWriteIoType", read_write_io_type, 0x0, 0x0, false, 0x24faf4ea13497bfc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "_WDF_IO_TYPE_CONFIG_V1_13.DeviceControlIoType", device_control_io_type, 0x0, 0x0, false, 0x3086ef10589b69ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TYPE_CONFIG_V1_13.DirectTransferThreshold", direct_transfer_threshold, 0x0, 0x0, false, 0xb92a25aacc567a96)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif