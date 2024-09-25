#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCABSTR.cElems", c_elems, 0x0, 0x20, true, 0x539dd606557adffc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "tagCABSTR.pElems", p_elems, 0x40, 0x40, true, 0x4d7e49c398eac153)
#else
#define _m00
#define _m01
#endif