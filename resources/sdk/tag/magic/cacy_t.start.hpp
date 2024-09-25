#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCACY.cElems", c_elems, 0x0, 0x20, true, 0x824ed5e3fc57326a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t*), "tagCACY.pElems", p_elems, 0x40, 0x40, true, 0xbc1e04f93bbfd51e)
#else
#define _m00
#define _m01
#endif