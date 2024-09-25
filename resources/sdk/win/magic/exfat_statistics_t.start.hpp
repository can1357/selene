#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.CreateHits", create_hits, 0x0, 0x20, true, 0x9b6bd57b3b0936c1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.SuccessfulCreates", successful_creates, 0x20, 0x20, true, 0x986777d97e916435)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.FailedCreates", failed_creates, 0x40, 0x20, true, 0x614a38828273d6ab)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.NonCachedReads", non_cached_reads, 0x60, 0x20, true, 0x5a9e02460f67da36)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.NonCachedReadBytes", non_cached_read_bytes, 0x80, 0x20, true, 0x85402cce9a385d0c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.NonCachedWrites", non_cached_writes, 0xa0, 0x20, true, 0xf98b833bb32e16b6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.NonCachedWriteBytes", non_cached_write_bytes, 0xc0, 0x20, true, 0x318e430a7aa86971)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.NonCachedDiskReads", non_cached_disk_reads, 0xe0, 0x20, true, 0x86128df5c69ace3a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXFAT_STATISTICS.NonCachedDiskWrites", non_cached_disk_writes, 0x100, 0x20, true, 0xe41d4433ffdfa394)
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