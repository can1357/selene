#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ASSEMBLY_VERSION.Build", build, 0x0, 0x10, true, 0xcf3be9709160a41f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ASSEMBLY_VERSION.Revision", revision, 0x10, 0x10, true, 0x5e8339aa1f68651d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ASSEMBLY_VERSION.Minor", minor, 0x20, 0x10, true, 0x10a8c447b79029f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ASSEMBLY_VERSION.Major", major, 0x30, 0x10, true, 0xcaf6a53e38d0480f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ASSEMBLY_VERSION.QuadPart", quad_part, 0x0, 0x40, true, 0x63c8196c23483ac3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif