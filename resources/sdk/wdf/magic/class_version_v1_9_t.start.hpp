#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_9.Major", major, 0x0, 0x0, false, 0x88d5e739522ba338)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_9.Minor", minor, 0x0, 0x0, false, 0x1c235616f4d30821)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_9.Build", build, 0x0, 0x0, false, 0x7d708992f573738a)
#else
#define _m00
#define _m01
#define _m02
#endif