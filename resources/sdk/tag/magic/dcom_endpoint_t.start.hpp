#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagDCOM_ENDPOINT.wszProtSeq", wsz_prot_seq, 0x0, 0x40, true, 0x464e77f795b9f17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagDCOM_ENDPOINT.wszPorts", wsz_ports, 0x40, 0x40, true, 0x88dbc5bb2afe5c69)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDCOM_ENDPOINT.dwFlags", dw_flags, 0x80, 0x20, true, 0x952e22baf6fab22d)
#else
#define _m00
#define _m01
#define _m02
#endif