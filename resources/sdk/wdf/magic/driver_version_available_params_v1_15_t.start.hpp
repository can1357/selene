#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_15.Size", size, 0x0, 0x0, false, 0x5272d5f9f237cced)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_15.MajorVersion", major_version, 0x0, 0x0, false, 0x3451cb40a1966328)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_15.MinorVersion", minor_version, 0x0, 0x0, false, 0xf684c96924f239d5)
#else
#define _m00
#define _m01
#define _m02
#endif