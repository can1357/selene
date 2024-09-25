#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR64_USR_MRSHL_BUFSIZE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x9045c24216a7a3d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR64_USR_MRSHL_BUFSIZE_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0x80, 0x40, true, 0x4974b8d8d8348a1f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR64_USR_MRSHL_BUFSIZE_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0xc0, 0x40, true, 0x2e00673d355672e8)
#else
#define _m00
#define _m01
#define _m02
#endif