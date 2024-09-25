#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sps_chain_t*), "tagSPSChain.pNext", p_next, 0x0, 0x40, true, 0x26889fc483fc63c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sps_chain_t*), "tagSPSChain.pPrev", p_prev, 0x40, 0x40, true, 0xf9803a3110b7402c)
#else
#define _m00
#define _m01
#endif