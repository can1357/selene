#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IORING_REGISTERED_BUFFER.BufferIndex", buffer_index, 0x0, 0x0, false, 0x36df7313b7cbebcd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IORING_REGISTERED_BUFFER.Offset", offset, 0x0, 0x0, false, 0x9ae4fe54741e986)
#else
#define _m00
#define _m01
#endif