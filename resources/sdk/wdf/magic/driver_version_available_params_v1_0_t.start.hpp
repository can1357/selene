#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_0.Size", size, 0x0, 0x0, false, 0x64e7393c1b949736)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_0.MajorVersion", major_version, 0x0, 0x0, false, 0x14367852e7bcd499)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_0.MinorVersion", minor_version, 0x0, 0x0, false, 0x90d3911a6857948e)
#else
#define _m00
#define _m01
#define _m02
#endif