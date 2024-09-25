#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR64_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0x1505ca1975f7d377)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "NDR64_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0x80, 0x40, true, 0xed2648d3a58b962d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t const*), "NDR64_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.pFormat", p_format, 0xc0, 0x40, true, 0xfed622666d1426ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t const*), "NDR64_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.pWireMarkerPtr", p_wire_marker_ptr, 0x100, 0x40, true, 0x9fff1c9e45e8b525)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif