#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "CVStruct.Major", major, 0x0, 0x10, true, 0xceee7545dee0100d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "CVStruct.Minor", minor, 0x10, 0x10, true, 0x7abde9d6d1862a3d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "CVStruct.Sub", sub, 0x20, 0x10, true, 0xddc200935412254f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "CVStruct.Build", build, 0x30, 0x10, true, 0xe4db06ec044ca369)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif