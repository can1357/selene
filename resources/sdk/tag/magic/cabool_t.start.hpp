#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCABOOL.cElems", c_elems, 0x0, 0x20, true, 0x900b1f9785a7b6f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "tagCABOOL.pElems", p_elems, 0x40, 0x40, true, 0x2fe4b19f27fc803e)
#else
#define _m00
#define _m01
#endif