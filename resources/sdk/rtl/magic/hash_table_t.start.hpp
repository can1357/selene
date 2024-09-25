#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HASH_TABLE.EntryCount", entry_count, 0x0, 0x20, true, 0x4df830f3afd5c46f)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_RTL_HASH_TABLE.MaskBitCount", mask_bit_count, 0x20, 0x5, true, 0x950f2b1f9d05d962, 5, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint27_t), "_RTL_HASH_TABLE.BucketCount", bucket_count, 0x25, 0x1b, true, 0x89eaf04e240e895e, 27, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t*), "_RTL_HASH_TABLE.Buckets", buckets, 0x40, 0x40, true, 0x4d0a96c2609fd07b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif