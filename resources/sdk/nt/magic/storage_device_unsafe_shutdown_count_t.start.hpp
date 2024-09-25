#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_UNSAFE_SHUTDOWN_COUNT.Version", version, 0x0, 0x20, true, 0x10cfcf8efaada1d4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_UNSAFE_SHUTDOWN_COUNT.Size", size, 0x20, 0x20, true, 0x60109a83995c6469)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_UNSAFE_SHUTDOWN_COUNT.UnsafeShutdownCount", unsafe_shutdown_count, 0x40, 0x20, true, 0xfa7a467e759a787e)
#else
#define _m00
#define _m01
#define _m02
#endif