#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR64_MEMSIZE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x6fbb26af72b5a2b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR64_MEMSIZE_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0x80, 0x40, true, 0xe5131f3ebb6b6e2f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "NDR64_MEMSIZE_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0xc0, 0x8, true, 0x638ed07d5e48ef2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t const*), "NDR64_MEMSIZE_POINTER_QUEUE_ELEMENT.pBufferMark", p_buffer_mark, 0x100, 0x40, true, 0xcc502955b1f0ad8a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif