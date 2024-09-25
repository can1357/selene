#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_USR_MRSHL_UNMRSHL_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x637cbf1c518b0c2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_USR_MRSHL_UNMRSHL_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0x80, 0x40, true, 0x57decc57089bb45a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR_USR_MRSHL_UNMRSHL_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0xc0, 0x40, true, 0x5da7d9dd8372398f)
#else
#define _m00
#define _m01
#define _m02
#endif