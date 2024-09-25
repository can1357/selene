#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sps_chain_t), "tagSPSCache.clientPSChain", client_ps_chain, 0x0, 0x80, true, 0x7a5ce83fa0afb61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sps_chain_t), "tagSPSCache.serverPSChain", server_ps_chain, 0x80, 0x80, true, 0x78ef4060ff8dd295)
#else
#define _m00
#define _m01
#endif