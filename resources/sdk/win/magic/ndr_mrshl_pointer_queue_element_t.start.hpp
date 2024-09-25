#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_MRSHL_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0xd5b2dd46da700a13)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_MRSHL_POINTER_QUEUE_ELEMENT.pBufferMark", p_buffer_mark, 0x80, 0x40, true, 0x9f0af27d7b3e887e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_MRSHL_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0xc0, 0x40, true, 0x811761d82471298d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR_MRSHL_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0x100, 0x40, true, 0xf91df7563454aca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_MRSHL_POINTER_QUEUE_ELEMENT.Memory", memory, 0x140, 0x40, true, 0xd52d4cbfcf0b70b2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "NDR_MRSHL_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0x180, 0x8, true, 0x8baef96f3daf15ad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif