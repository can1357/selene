#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMWSLE_NONDIRECT_HASH.Key", key, 0x0, 0x0, false, 0x6b7ba8d9ad330234)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSLE_NONDIRECT_HASH.Index", index, 0x0, 0x0, false, 0xbad06d2a3de2eaa9)
#else
#define _m00
#define _m01
#endif