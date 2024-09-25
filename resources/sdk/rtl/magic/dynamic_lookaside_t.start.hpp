#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_DYNAMIC_LOOKASIDE.EnabledBucketBitmap", enabled_bucket_bitmap, 0x0, 0x40, true, 0x8147a840184fee1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_LOOKASIDE.BucketCount", bucket_count, 0x40, 0x20, true, 0xd790157e55733294)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_LOOKASIDE.ActiveBucketCount", active_bucket_count, 0x60, 0x20, true, 0x4df05efc31e38013)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::lookaside_t, 64>), "_RTL_DYNAMIC_LOOKASIDE.Buckets", buckets, 0x200, 0x0, true, 0xcfd82128a5aa6845)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif