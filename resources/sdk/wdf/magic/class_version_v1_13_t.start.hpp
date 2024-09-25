#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_13.Major", major, 0x0, 0x0, false, 0xb7cb696ef7a5eca2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_13.Minor", minor, 0x0, 0x0, false, 0x7a24761dd2e373fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_13.Build", build, 0x0, 0x0, false, 0x3715edb8e43ce7ea)
#else
#define _m00
#define _m01
#define _m02
#endif