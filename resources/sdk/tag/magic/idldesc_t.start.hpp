#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagIDLDESC.dwReserved", dw_reserved, 0x0, 0x40, true, 0x81f61d83988e8efb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagIDLDESC.wIDLFlags", w_idl_flags, 0x40, 0x10, true, 0x487d7d3509f9cc34)
#else
#define _m00
#define _m01
#endif