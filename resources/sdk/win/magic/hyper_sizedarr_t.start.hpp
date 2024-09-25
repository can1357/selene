#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYPER_SIZEDARR.clSize", cl_size, 0x0, 0x20, true, 0x61499a452bc9da4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_HYPER_SIZEDARR.pData", p_data, 0x40, 0x40, true, 0xd8215523b739133a)
#else
#define _m00
#define _m01
#endif