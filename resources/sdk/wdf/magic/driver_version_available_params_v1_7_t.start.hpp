#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_7.Size", size, 0x0, 0x0, false, 0xa7ca09513ec17ef8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_7.MajorVersion", major_version, 0x0, 0x0, false, 0xd623ee3314245881)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_7.MinorVersion", minor_version, 0x0, 0x0, false, 0x3e4ed6d89fe89518)
#else
#define _m00
#define _m01
#define _m02
#endif