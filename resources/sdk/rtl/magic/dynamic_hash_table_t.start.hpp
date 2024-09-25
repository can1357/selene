#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE.Flags", flags, 0x0, 0x20, true, 0xb6ae1eb4c2389300)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE.Shift", shift, 0x20, 0x20, true, 0x64f86293fa645256)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE.TableSize", table_size, 0x40, 0x20, true, 0xc698f8905aec00d6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE.Pivot", pivot, 0x60, 0x20, true, 0xb6efadfbfb110aac)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE.DivisorMask", divisor_mask, 0x80, 0x20, true, 0xc441b0184e5a93b3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE.NumEntries", num_entries, 0xa0, 0x20, true, 0x3d73690df471bf45)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE.NonEmptyBuckets", non_empty_buckets, 0xc0, 0x20, true, 0x7dc75b4bea5d58da)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE.NumEnumerators", num_enumerators, 0xe0, 0x20, true, 0x4f821458012d4d2b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_DYNAMIC_HASH_TABLE.Directory", directory, 0x100, 0x40, true, 0x9d093c20225dd942)
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
#endif