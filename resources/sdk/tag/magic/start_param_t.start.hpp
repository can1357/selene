#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_tagStartParam.iid", iid, 0x0, 0x80, true, 0xf466f925ed47c604)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_bind_ctx_t*), "_tagStartParam.pIBindCtx", p_i_bind_ctx, 0x80, 0x40, true, 0x749135a69e3d987d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "_tagStartParam.pItf", p_itf, 0xc0, 0x40, true, 0x1df3c40aad7be00c)
#else
#define _m00
#define _m01
#define _m02
#endif