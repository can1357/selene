#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.CreateHits", create_hits, 0x0, 0x20, true, 0x99b6b7d85fd40f5a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.SuccessfulCreates", successful_creates, 0x20, 0x20, true, 0xced4ed04e6f85d02)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.FailedCreates", failed_creates, 0x40, 0x20, true, 0xf96137658f10d4fe)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.NonCachedReads", non_cached_reads, 0x60, 0x20, true, 0xff76f851a9392023)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.NonCachedReadBytes", non_cached_read_bytes, 0x80, 0x20, true, 0x98832aa0d525f31a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.NonCachedWrites", non_cached_writes, 0xa0, 0x20, true, 0x130cf643a9ddcfa9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.NonCachedWriteBytes", non_cached_write_bytes, 0xc0, 0x20, true, 0xd19fb94e98ba9268)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.NonCachedDiskReads", non_cached_disk_reads, 0xe0, 0x20, true, 0xf6aee0db7334fa8d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAT_STATISTICS.NonCachedDiskWrites", non_cached_disk_writes, 0x100, 0x20, true, 0x60bfd8d515d13a50)
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