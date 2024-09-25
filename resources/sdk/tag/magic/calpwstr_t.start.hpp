#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCALPWSTR.cElems", c_elems, 0x0, 0x20, true, 0xc382e5213bfcaf9b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "tagCALPWSTR.pElems", p_elems, 0x40, 0x40, true, 0x79b53b5fbef61930)
#else
#define _m00
#define _m01
#endif