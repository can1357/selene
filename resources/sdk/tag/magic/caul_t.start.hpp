#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAUL.cElems", c_elems, 0x0, 0x20, true, 0xe70c2ed766a17e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "tagCAUL.pElems", p_elems, 0x40, 0x40, true, 0x8be946695fe2b540)
#else
#define _m00
#define _m01
#endif