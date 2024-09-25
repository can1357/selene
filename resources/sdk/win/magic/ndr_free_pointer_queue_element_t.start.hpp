#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_FREE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x68c4c903c1c23e70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_FREE_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0x80, 0x40, true, 0x8c744da6dbef97f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR_FREE_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0xc0, 0x40, true, 0xf7803b82ee68978e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_FREE_POINTER_QUEUE_ELEMENT.Memory", memory, 0x100, 0x40, true, 0xf9775f9c8da2560d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "NDR_FREE_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0x140, 0x8, true, 0xac118626561b6549)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif