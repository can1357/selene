#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAI.cElems", c_elems, 0x0, 0x20, true, 0xead7fdefd2b68401)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "tagCAI.pElems", p_elems, 0x40, 0x40, true, 0x9d0be9b1b8aa0e31)
#else
#define _m00
#define _m01
#endif