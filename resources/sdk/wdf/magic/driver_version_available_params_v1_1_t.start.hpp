#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_1.Size", size, 0x0, 0x0, false, 0x82379f81e0fdc989)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_1.MajorVersion", major_version, 0x0, 0x0, false, 0xab785bf82d9b3e45)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_1.MinorVersion", minor_version, 0x0, 0x0, false, 0xc6e31a0992d89edd)
#else
#define _m00
#define _m01
#define _m02
#endif