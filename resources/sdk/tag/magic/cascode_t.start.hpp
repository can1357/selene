#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCASCODE.cElems", c_elems, 0x0, 0x20, true, 0x2bfda077ec0b5ca9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagCASCODE.pElems", p_elems, 0x40, 0x40, true, 0x8083539658ac75da)
#else
#define _m00
#define _m01
#endif