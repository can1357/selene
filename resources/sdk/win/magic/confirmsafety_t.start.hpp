#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONFIRMSAFETY.clsid", clsid, 0x0, 0x80, true, 0xbbc578c02e3ab5db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CONFIRMSAFETY.pUnk", p_unk, 0x80, 0x40, true, 0xcdb76eb262ebae0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONFIRMSAFETY.dwFlags", dw_flags, 0xc0, 0x20, true, 0xdaa76fbdd1510220)
#else
#define _m00
#define _m01
#define _m02
#endif