#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR64_FREE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0xed90fd19bb239b85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR64_FREE_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0x80, 0x40, true, 0xcf55d6d614138c02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR64_FREE_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0xc0, 0x40, true, 0xf96a1d345be732df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR64_FREE_POINTER_QUEUE_ELEMENT.pCorrMemory", p_corr_memory, 0x100, 0x40, true, 0x6a6c527a91ef033b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "NDR64_FREE_POINTER_QUEUE_ELEMENT.uFlags", u_flags, 0x140, 0x8, true, 0xeaf0efcac9d00721)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif