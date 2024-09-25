#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAPROPVARIANT.cElems", c_elems, 0x0, 0x20, true, 0xa2bc1bc354854e5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::propvariant_t*), "tagCAPROPVARIANT.pElems", p_elems, 0x40, 0x40, true, 0xf6f7b6cd1b485e39)
#else
#define _m00
#define _m01
#endif