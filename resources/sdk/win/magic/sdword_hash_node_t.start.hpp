#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SDWORDHashNode.chain", chain, 0x0, 0x80, true, 0x6e42c90fee00ab58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SDWORDHashNode.key", key, 0x80, 0x20, true, 0x7a6309e95d817296)
#else
#define _m00
#define _m01
#endif