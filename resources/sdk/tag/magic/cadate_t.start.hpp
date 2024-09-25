#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCADATE.cElems", c_elems, 0x0, 0x20, true, 0xa6724d7a82474dbd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "tagCADATE.pElems", p_elems, 0x40, 0x40, true, 0x9112759655110917)
#else
#define _m00
#define _m01
#endif