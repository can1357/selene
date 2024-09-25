#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_DPI_RECORD.MachineDPI", machine_dpi, 0x0, 0x20, true, 0xab809e94553f7e60)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_DPI_RECORD.UserDPI", user_dpi, 0x20, 0x20, true, 0x52a8904d44b31f22)
#else
#define _m00
#define _m01
#endif