#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TYPE_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x1480d977fe1b3e94)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "_WDF_IO_TYPE_CONFIG_V1_17.ReadWriteIoType", read_write_io_type, 0x0, 0x0, false, 0x6f62b03c6336463f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "_WDF_IO_TYPE_CONFIG_V1_17.DeviceControlIoType", device_control_io_type, 0x0, 0x0, false, 0x509d7066eef14fd6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TYPE_CONFIG_V1_17.DirectTransferThreshold", direct_transfer_threshold, 0x0, 0x0, false, 0xe4bce674b5279cd7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif