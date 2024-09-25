#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_USR_MRSHL_BUFSIZE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x547382ce2c1df7d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_USR_MRSHL_BUFSIZE_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0x80, 0x40, true, 0x4c1f8b25123d34b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR_USR_MRSHL_BUFSIZE_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0xc0, 0x40, true, 0x5968a576bf8fb45c)
#else
#define _m00
#define _m01
#define _m02
#endif