#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NdrStringHeader.dwMax", dw_max, 0x0, 0x20, true, 0x60e91ec6d11fdb7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NdrStringHeader.dwOffset", dw_offset, 0x20, 0x20, true, 0x1a62e8dc08f4d4a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NdrStringHeader.dwActual", dw_actual, 0x40, 0x20, true, 0xb839df6dbf17b263)
#else
#define _m00
#define _m01
#define _m02
#endif