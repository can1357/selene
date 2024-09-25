#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CarefulBufferReader.pBuffer", p_buffer, 0x0, 0x40, true, 0x8c3299c082b77381)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CarefulBufferReader.cbBuffer", cb_buffer, 0x40, 0x40, true, 0x1262940864c0e324)
#else
#define _m00
#define _m01
#endif