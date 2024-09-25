#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_MEMSIZE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x62782da69dc136f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR_MEMSIZE_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0x80, 0x40, true, 0xdbfd0c993a2ed559)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_MEMSIZE_POINTER_QUEUE_ELEMENT.pBufferMark", p_buffer_mark, 0xc0, 0x40, true, 0x8789207aac1b8176)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_MEMSIZE_POINTER_QUEUE_ELEMENT.Memory", memory, 0x100, 0x40, true, 0x4e912183932e16de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "NDR_MEMSIZE_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0x140, 0x8, true, 0xa0134cc5e2711607)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif