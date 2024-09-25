#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "SHashChain.pNext", p_next, 0x0, 0x40, true, 0x2cf7db921ba7b4d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "SHashChain.pPrev", p_prev, 0x40, 0x40, true, 0xf727e2eece58604d)
#else
#define _m00
#define _m01
#endif