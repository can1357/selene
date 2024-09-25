#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAFILETIME.cElems", c_elems, 0x0, 0x20, true, 0x408fb9c4d1a78dea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "tagCAFILETIME.pElems", p_elems, 0x40, 0x40, true, 0x7f8f48afd6c39843)
#else
#define _m00
#define _m01
#endif