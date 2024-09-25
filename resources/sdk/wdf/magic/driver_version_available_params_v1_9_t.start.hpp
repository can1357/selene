#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_9.Size", size, 0x0, 0x0, false, 0xd443af159d2b0b40)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_9.MajorVersion", major_version, 0x0, 0x0, false, 0xf2b971208064a25b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_9.MinorVersion", minor_version, 0x0, 0x0, false, 0xf981fdcef7a15b90)
#else
#define _m00
#define _m01
#define _m02
#endif