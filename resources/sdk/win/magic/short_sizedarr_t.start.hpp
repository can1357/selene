#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHORT_SIZEDARR.clSize", cl_size, 0x0, 0x20, true, 0x614c783d986f6d48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_SHORT_SIZEDARR.pData", p_data, 0x40, 0x40, true, 0x3ae96b5c34eecb5b)
#else
#define _m00
#define _m01
#endif