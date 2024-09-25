#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SPointerHashNode.chain", chain, 0x0, 0x80, true, 0x244b4985b21f057a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "SPointerHashNode.key", key, 0x80, 0x40, true, 0x3063ef7606524968)
#else
#define _m00
#define _m01
#endif