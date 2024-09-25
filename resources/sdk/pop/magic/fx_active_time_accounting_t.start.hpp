#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_ACTIVE_TIME_ACCOUNTING.Total", total, 0x0, 0x40, true, 0xe51981d8f4bd6ab5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_ACTIVE_TIME_ACCOUNTING.Unattributed", unattributed, 0x40, 0x40, true, 0xc67ea7b06bd885a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_POP_FX_ACTIVE_TIME_ACCOUNTING.Buckets", buckets, 0x80, 0x40, true, 0x3ce1475c2327f4c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_POP_FX_ACTIVE_TIME_ACCOUNTING.PerBucket", per_bucket, 0x1c0, 0x40, true, 0xcbc96f2191010e02)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif