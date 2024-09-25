#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "KSRESOLUTION.Granularity", granularity, 0x0, 0x0, false, 0x421c3a7db41043b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "KSRESOLUTION.Error", error, 0x0, 0x0, false, 0xbef12d5326637511)
#else
#define _m00
#define _m01
#endif