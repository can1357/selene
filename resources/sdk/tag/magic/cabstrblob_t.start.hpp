#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCABSTRBLOB.cElems", c_elems, 0x0, 0x20, true, 0xb02d9dea574d47fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::bstrblob_t*), "tagCABSTRBLOB.pElems", p_elems, 0x40, 0x40, true, 0xfd50426a49f7e6da)
#else
#define _m00
#define _m01
#endif