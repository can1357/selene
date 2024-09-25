#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS.Size", size, 0x0, 0x20, true, 0xd43aa134ca772c06)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS.MajorVersion", major_version, 0x20, 0x20, true, 0x9038f52985eb72dd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS.MinorVersion", minor_version, 0x40, 0x20, true, 0x5cc8c881eeddc5ef)
#else
#define _m00
#define _m01
#define _m02
#endif