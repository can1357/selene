#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SMIPIDHashNode.chain", chain, 0x0, 0x80, true, 0xeb2ff1b16323be70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::mipid_t), "SMIPIDHashNode.mipid", mipid, 0x80, 0x0, true, 0xfe09133dee26ba2)
#else
#define _m00
#define _m01
#endif