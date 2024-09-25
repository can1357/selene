#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Signature", signature, 0x0, 0x20, true, 0x4501333b8f46439e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Sequence1", sequence1, 0x20, 0x20, true, 0xb00bc30295795f4f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Sequence2", sequence2, 0x40, 0x20, true, 0xc729ad7b01730df4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HBASE_BLOCK.TimeStamp", time_stamp, 0x60, 0x40, true, 0xf49ca722a0628e3f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Major", major, 0xa0, 0x20, true, 0x866bae29ab38858)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Minor", minor, 0xc0, 0x20, true, 0x91a1e6331c7e42c0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Type", type, 0xe0, 0x20, true, 0x78cfcfeb07c052c4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Format", format, 0x100, 0x20, true, 0xbf02ab8887f3fca5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.RootCell", root_cell, 0x120, 0x20, true, 0x3be90528828b2c55)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Length", length, 0x140, 0x20, true, 0x9cd332c9c4df3146)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Cluster", cluster, 0x160, 0x20, true, 0x2d370fa4b0f714c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_HBASE_BLOCK.FileName", file_name, 0x180, 0x0, true, 0xf6f49c49a257bbe2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_HBASE_BLOCK.RmId", rm_id, 0x380, 0x80, true, 0x4f48809e02ad7c14)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_HBASE_BLOCK.LogId", log_id, 0x400, 0x80, true, 0xa6e8217d24df7bb9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.Flags", flags, 0x480, 0x20, true, 0x7a9ce43e9304221d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_HBASE_BLOCK.TmId", tm_id, 0x4a0, 0x80, true, 0xff51e2133f056249)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.GuidSignature", guid_signature, 0x520, 0x20, true, 0x8f41c66c2e4b8c29)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HBASE_BLOCK.LastReorganizeTime", last_reorganize_time, 0x540, 0x40, true, 0x7ee26cb571e6921)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.CheckSum", check_sum, 0xfe0, 0x20, true, 0xe859ccfc31b3d194)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_HBASE_BLOCK.ThawTmId", thaw_tm_id, 0x7e40, 0x80, true, 0x52c0c17d62af8dca)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_HBASE_BLOCK.ThawRmId", thaw_rm_id, 0x7ec0, 0x80, true, 0xfc060ccd8cdb879)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_HBASE_BLOCK.ThawLogId", thaw_log_id, 0x7f40, 0x80, true, 0xc8393956c25b1f41)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.BootType", boot_type, 0x7fc0, 0x20, true, 0x471474c616fb8cad)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HBASE_BLOCK.BootRecover", boot_recover, 0x7fe0, 0x20, true, 0x9b10a998c660784e)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif