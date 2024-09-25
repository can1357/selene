#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCACLSID.cElems", c_elems, 0x0, 0x20, true, 0x8e990bb90f8c5a4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "tagCACLSID.pElems", p_elems, 0x40, 0x40, true, 0x7bb537ae44854d8)
#else
#define _m00
#define _m01
#endif