#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR64_MRSHL_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0xfce651470735dbb7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t const*), "NDR64_MRSHL_POINTER_QUEUE_ELEMENT.pBufferMark", p_buffer_mark, 0x80, 0x40, true, 0xc6de30706892b490)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR64_MRSHL_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0xc0, 0x40, true, 0x90303092732755b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR64_MRSHL_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0x100, 0x40, true, 0x8cfd2a17308a0223)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR64_MRSHL_POINTER_QUEUE_ELEMENT.pCorrMemory", p_corr_memory, 0x140, 0x40, true, 0x8a6d64f8d8151877)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "NDR64_MRSHL_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0x180, 0x8, true, 0x3ab1e258dcbef1f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif