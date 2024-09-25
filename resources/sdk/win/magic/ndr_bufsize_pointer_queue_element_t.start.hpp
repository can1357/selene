#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_BUFSIZE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x7d9ec25c02f148c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_BUFSIZE_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0x80, 0x40, true, 0x740010ab0d2f2e1d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR_BUFSIZE_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0xc0, 0x40, true, 0x1d74c716b0ea71d6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_BUFSIZE_POINTER_QUEUE_ELEMENT.Memory", memory, 0x100, 0x40, true, 0x9f143eeaa1dc65cc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "NDR_BUFSIZE_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0x140, 0x8, true, 0x643ee77ad0bcca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif