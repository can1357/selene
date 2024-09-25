#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAH.cElems", c_elems, 0x0, 0x20, true, 0xf71464153c6790a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "tagCAH.pElems", p_elems, 0x40, 0x40, true, 0x7fdf5aa7dabe7677)
#else
#define _m00
#define _m01
#endif