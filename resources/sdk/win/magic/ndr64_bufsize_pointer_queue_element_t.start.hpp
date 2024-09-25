#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR64_BUFSIZE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0xde59aca8da5615f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "NDR64_BUFSIZE_POINTER_QUEUE_ELEMENT.pBufferMark", p_buffer_mark, 0x80, 0x40, true, 0x73443808fa6578c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "NDR64_BUFSIZE_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0xc0, 0x40, true, 0x9bfd88c89146dce2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "NDR64_BUFSIZE_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0x100, 0x40, true, 0x7b905eaef596ede4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "NDR64_BUFSIZE_POINTER_QUEUE_ELEMENT.pCorrMemory", p_corr_memory, 0x140, 0x40, true, 0x9e2a8952167b90ac)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NDR64_BUFSIZE_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0x180, 0x8, true, 0xd9d90c6d75b0b42a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif