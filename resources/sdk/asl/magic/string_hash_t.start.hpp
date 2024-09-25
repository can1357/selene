#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASL_STRING_HASH.HashSize", hash_size, 0x0, 0x20, true, 0x467fda1cee87f93e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct asl::string_hash_element_t**), "_ASL_STRING_HASH.HashElementTable", hash_element_table, 0x40, 0x40, true, 0xcaae982a91b28fa6)
#else
#define _m00
#define _m01
#endif