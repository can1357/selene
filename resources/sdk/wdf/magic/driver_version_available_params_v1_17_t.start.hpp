#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_17.Size", size, 0x0, 0x0, false, 0xb64a939e4390e640)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_17.MajorVersion", major_version, 0x0, 0x0, false, 0x4846681110e56353)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_17.MinorVersion", minor_version, 0x0, 0x0, false, 0x9311ed72e4b0508d)
#else
#define _m00
#define _m01
#define _m02
#endif