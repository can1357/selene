#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mbcb_t), "_BCB.Dummy", dummy, 0x0, 0x0, false, 0xe5d2471ab5b7df13)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_BCB.NodeTypeCode", node_type_code, 0x0, 0x0, false, 0x80430f04ca9e8eea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_BCB.Dirty", dirty, 0x0, 0x0, false, 0x9414d028ff22604f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCB.ByteLength", byte_length, 0x0, 0x0, false, 0x78e0ce66d3a3be20)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_BCB.FileOffset", file_offset, 0x0, 0x0, false, 0x5b8aff7af54d642b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_BCB.BcbLinks", bcb_links, 0x0, 0x0, false, 0xfa2d52cb26c1ee8c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_BCB.BeyondLastByte", beyond_last_byte, 0x0, 0x0, false, 0xb49c404134d5a546)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_BCB.OldestLsn", oldest_lsn, 0x0, 0x0, false, 0xa5662acadb9d0cd8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_BCB.NewestLsn", newest_lsn, 0x0, 0x0, false, 0x2408d763ee481765)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::vacb_t*), "_BCB.Vacb", vacb, 0x0, 0x0, false, 0x9cde21f7c5ebb403)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCB.PinCount", pin_count, 0x0, 0x0, false, 0x676d9224b5d95e45)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t), "_BCB.Resource", resource, 0x0, 0x0, false, 0x36195aebc74a7d24)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_t*), "_BCB.SharedCacheMap", shared_cache_map, 0x0, 0x0, false, 0xa74a970f0bb00335)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_BCB.BaseAddress", base_address, 0x0, 0x0, false, 0x780c056d02c176b5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif