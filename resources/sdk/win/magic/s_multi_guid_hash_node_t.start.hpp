#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SMultiGUIDHashNode.chain", chain, 0x0, 0x80, true, 0x7da913b55fabc94d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_multi_guid_key_t), "SMultiGUIDHashNode.key", key, 0x80, 0x80, true, 0x6e4211d9b3f916e6)
#else
#define _m00
#define _m01
#endif