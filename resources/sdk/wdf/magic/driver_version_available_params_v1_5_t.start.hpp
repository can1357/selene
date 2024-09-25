#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_5.Size", size, 0x0, 0x0, false, 0xf663774de6903cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_5.MajorVersion", major_version, 0x0, 0x0, false, 0x68c1b8694ff6583f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_5.MinorVersion", minor_version, 0x0, 0x0, false, 0x2014017f8230f9fd)
#else
#define _m00
#define _m01
#define _m02
#endif