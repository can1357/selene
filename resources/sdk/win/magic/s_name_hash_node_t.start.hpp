#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SNameHashNode.chain", chain, 0x0, 0x80, true, 0xcfa5675dc50af58c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SNameHashNode.dwHash", dw_hash, 0x80, 0x20, true, 0x133a7eee4433d64d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SNameHashNode.cRef", c_ref, 0xa0, 0x20, true, 0x994884ac5b85ef63)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "SNameHashNode.ipid", ipid, 0xc0, 0x80, true, 0x43a63d5087611856)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::securitybinding_t), "SNameHashNode.sName", s_name, 0x140, 0x30, true, 0xc5efff22a87502a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif