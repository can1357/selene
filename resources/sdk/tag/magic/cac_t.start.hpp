#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAC.cElems", c_elems, 0x0, 0x20, true, 0xafeaa3bcade8649b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagCAC.pElems", p_elems, 0x40, 0x40, true, 0x61e4542465e223e9)
#else
#define _m00
#define _m01
#endif