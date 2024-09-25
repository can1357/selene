#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAUH.cElems", c_elems, 0x0, 0x20, true, 0x204702e84db2a57e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "tagCAUH.pElems", p_elems, 0x40, 0x40, true, 0x47ee015fc3c65033)
#else
#define _m00
#define _m01
#endif