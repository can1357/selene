#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0xb5622d7328f40725)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0x80, 0x40, true, 0xc149f3ab2bfe44f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0xc0, 0x40, true, 0xd9da70f2e908e15a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t const*), "NDR_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.pWireMarkerPtr", p_wire_marker_ptr, 0x100, 0x40, true, 0xc4cd2e236c0f5c69)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif