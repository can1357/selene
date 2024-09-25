#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagCLEANLOCALSTORAGE.pInterface", p_interface, 0x0, 0x40, true, 0xd1d9a52b1672e6a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagCLEANLOCALSTORAGE.pStorage", p_storage, 0x40, 0x40, true, 0x6339f3dce593cefe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCLEANLOCALSTORAGE.flags", flags, 0x80, 0x20, true, 0x7fb6236a2e23b6ff)
#else
#define _m00
#define _m01
#define _m02
#endif