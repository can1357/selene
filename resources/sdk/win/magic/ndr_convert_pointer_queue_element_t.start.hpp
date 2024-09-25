#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_CONVERT_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x8b66aa8727169a7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR_CONVERT_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0x80, 0x40, true, 0xdd15f058d8565998)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_CONVERT_POINTER_QUEUE_ELEMENT.pBufferMark", p_buffer_mark, 0xc0, 0x40, true, 0x2f7d63943af65d28)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "NDR_CONVERT_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0x100, 0x8, true, 0x35652bae5f858a92)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif