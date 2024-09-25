#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TYPE_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x9f9f1b3666fde33a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "_WDF_IO_TYPE_CONFIG_V1_15.ReadWriteIoType", read_write_io_type, 0x0, 0x0, false, 0xfb758de04a46c884)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "_WDF_IO_TYPE_CONFIG_V1_15.DeviceControlIoType", device_control_io_type, 0x0, 0x0, false, 0xf9f8425693e5d3dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TYPE_CONFIG_V1_15.DirectTransferThreshold", direct_transfer_threshold, 0x0, 0x0, false, 0x6fa9d85cbcbfe697)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif