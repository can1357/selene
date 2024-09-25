#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "pUnkListElement._pUnk", p_unk, 0x0, 0x0, false, 0x38f4dfb41a00a08a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::p_unk_list_element_t*), "pUnkListElement._next", next, 0x0, 0x0, false, 0x2f2edc2e67e203eb)
#else
#define _m00
#define _m01
#endif