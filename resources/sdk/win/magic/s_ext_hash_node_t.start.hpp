#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SExtHashNode.chain", chain, 0x0, 0x80, true, 0x9879dd428a41411d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "SExtHashNode.pwszExt", pwsz_ext, 0x80, 0x40, true, 0xc2c4bc0df8f49b1f)
#else
#define _m00
#define _m01
#endif