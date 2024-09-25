#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAL.cElems", c_elems, 0x0, 0x20, true, 0x5d707241d5501f2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagCAL.pElems", p_elems, 0x40, 0x40, true, 0x76a318626ab19ac3)
#else
#define _m00
#define _m01
#endif