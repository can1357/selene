#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_11.Size", size, 0x0, 0x0, false, 0x5471430cb9bb852b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_11.MajorVersion", major_version, 0x0, 0x0, false, 0x71b71619d37857c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_11.MinorVersion", minor_version, 0x0, 0x0, false, 0xd1db5b456b0f697c)
#else
#define _m00
#define _m01
#define _m02
#endif