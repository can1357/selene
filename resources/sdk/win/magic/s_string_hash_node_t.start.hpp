#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SStringHashNode.chain", chain, 0x0, 0x80, true, 0xe23b8f17802fa25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SStringHashNode.dwHash", dw_hash, 0x80, 0x20, true, 0xbfae2f7057e3b787)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t*), "SStringHashNode.psaKey", psa_key, 0xc0, 0x40, true, 0xaa0540564be6fbec)
#else
#define _m00
#define _m01
#define _m02
#endif