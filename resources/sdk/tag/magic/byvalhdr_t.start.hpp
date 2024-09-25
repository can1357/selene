#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBYVALHDR.Count", count, 0x0, 0x20, true, 0xc5dd9831732d0a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagBYVALHDR.Frozen", frozen, 0x20, 0x20, true, 0xe025de8f912e9fa8)
#else
#define _m00
#define _m01
#endif