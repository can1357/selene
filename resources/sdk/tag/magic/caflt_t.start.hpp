#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAFLT.cElems", c_elems, 0x0, 0x20, true, 0x8922239f900b8c8a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float*), "tagCAFLT.pElems", p_elems, 0x40, 0x40, true, 0x271f095d05a38869)
#else
#define _m00
#define _m01
#endif