#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_13.Size", size, 0x0, 0x0, false, 0xe640a3f08dadcaf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_13.MajorVersion", major_version, 0x0, 0x0, false, 0x2ce3442b68d4b1d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_13.MinorVersion", minor_version, 0x0, 0x0, false, 0xe54eb59d25056784)
#else
#define _m00
#define _m01
#define _m02
#endif