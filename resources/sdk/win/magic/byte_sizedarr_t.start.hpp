#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BYTE_SIZEDARR.clSize", cl_size, 0x0, 0x20, true, 0xddc03b0a72a9b827)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_BYTE_SIZEDARR.pData", p_data, 0x40, 0x40, true, 0xba6f665bbab06a03)
#else
#define _m00
#define _m01
#endif