#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCADBL.cElems", c_elems, 0x0, 0x20, true, 0xbb22f77a18a4f510)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "tagCADBL.pElems", p_elems, 0x40, 0x40, true, 0x549e13976f158eb7)
#else
#define _m00
#define _m01
#endif