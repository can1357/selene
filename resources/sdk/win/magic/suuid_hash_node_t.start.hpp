#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SUUIDHashNode.chain", chain, 0x0, 0x80, true, 0x21477df116a5ebd3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "SUUIDHashNode.key", key, 0x80, 0x80, true, 0xe426193d72415bed)
#else
#define _m00
#define _m01
#endif