#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCACLIPDATA.cElems", c_elems, 0x0, 0x20, true, 0x654e7b5d84dfe697)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::clipdata_t*), "tagCACLIPDATA.pElems", p_elems, 0x40, 0x40, true, 0x611e61a3892e6573)
#else
#define _m00
#define _m01
#endif