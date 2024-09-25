#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_CACHE_INFORMATION.ParametersSavable", parameters_savable, 0x0, 0x8, true, 0x9cea25b87d606039)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_CACHE_INFORMATION.ReadCacheEnabled", read_cache_enabled, 0x8, 0x8, true, 0x70dde38fcd38dd33)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_CACHE_INFORMATION.WriteCacheEnabled", write_cache_enabled, 0x10, 0x8, true, 0x9605047679987e84)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_read_retention_priority_t), "_DISK_CACHE_INFORMATION.ReadRetentionPriority", read_retention_priority, 0x20, 0x20, true, 0x9ba5e78a9d70088d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_read_retention_priority_t), "_DISK_CACHE_INFORMATION.WriteRetentionPriority", write_retention_priority, 0x40, 0x20, true, 0x5791c08652707c36)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_CACHE_INFORMATION.DisablePrefetchTransferLength", disable_prefetch_transfer_length, 0x60, 0x10, true, 0xc22a7ff1e4236c2d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_CACHE_INFORMATION.PrefetchScalar", prefetch_scalar, 0x70, 0x8, true, 0xc2019037ab846c1f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_CACHE_INFORMATION.ScalarPrefetch.Minimum", minimum, 0x0, 0x10, true, 0x15d419139a5334c9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_CACHE_INFORMATION.ScalarPrefetch.Maximum", maximum, 0x10, 0x10, true, 0xa658e7f2f7eecdbb)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_CACHE_INFORMATION.ScalarPrefetch.MaximumBlocks", maximum_blocks, 0x20, 0x10, true, 0xb2aa5d3b8e68b5da)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_scalar_prefetch_t), "_DISK_CACHE_INFORMATION.ScalarPrefetch", scalar_prefetch, 0x80, 0x30, true, 0xe7a40cc8b48d4fa6)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_CACHE_INFORMATION.BlockPrefetch.Minimum", minimum, 0x0, 0x10, true, 0x26f533e4004ca73e)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_CACHE_INFORMATION.BlockPrefetch.Maximum", maximum, 0x10, 0x10, true, 0x36be4fdcbfc01c76)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_block_prefetch_t), "_DISK_CACHE_INFORMATION.BlockPrefetch", block_prefetch, 0x80, 0x20, true, 0x744294b6ad3c972d)
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