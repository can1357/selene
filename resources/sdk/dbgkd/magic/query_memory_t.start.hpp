#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_QUERY_MEMORY.Address", address, 0x0, 0x40, true, 0x8a6d8f28b506c56)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_QUERY_MEMORY.AddressSpace", address_space, 0x80, 0x20, true, 0x549c7a20b423e634)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_QUERY_MEMORY.Flags", flags, 0xa0, 0x20, true, 0x81c47e2360d10869)
#else
#define _m00
#define _m01
#define _m02
#endif