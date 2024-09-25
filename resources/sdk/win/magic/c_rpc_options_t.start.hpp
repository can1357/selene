#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CRpcOptions._pStdId", p_std_id, 0x40, 0x40, true, 0xc5865a4af981a7bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CRpcOptions._pUnkOuter", p_unk_outer, 0x80, 0x40, true, 0x12d31699136f7aba)
#else
#define _m00
#define _m01
#endif