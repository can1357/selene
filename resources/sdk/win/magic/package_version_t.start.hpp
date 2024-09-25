#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PACKAGE_VERSION.Version", version, 0x0, 0x40, true, 0xb8fcda77fd316994)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PACKAGE_VERSION.Revision", revision, 0x0, 0x10, true, 0x273f77c069f1e78)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PACKAGE_VERSION.Build", build, 0x10, 0x10, true, 0xd20de330221d08ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PACKAGE_VERSION.Minor", minor, 0x20, 0x10, true, 0xc82311afc00f1524)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PACKAGE_VERSION.Major", major, 0x30, 0x10, true, 0x85fe5bc2fc3c6cbb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif