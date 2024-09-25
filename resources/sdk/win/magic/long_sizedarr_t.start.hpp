#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LONG_SIZEDARR.clSize", cl_size, 0x0, 0x20, true, 0xb9e408ab5697e0a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_LONG_SIZEDARR.pData", p_data, 0x40, 0x40, true, 0xd91fb327a6a4b8f3)
#else
#define _m00
#define _m01
#endif