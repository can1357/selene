#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOSAPIC.Type", type, 0x0, 0x8, true, 0x64a8cb77a2e1b4ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOSAPIC.Length", length, 0x8, 0x8, true, 0x84a9ce0fdb12bf71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOSAPIC.IOSAPICID", iosapicid, 0x10, 0x8, true, 0xc26c895e27ae4002)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOSAPIC.SystemVectorBase", system_vector_base, 0x20, 0x20, true, 0x60c717469692a5e9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOSAPIC.IOSAPICAddress", iosapic_address, 0x40, 0x40, true, 0x903a8e7a99e5eb2c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif