#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.LogFileFullExceptions", log_file_full_exceptions, 0x0, 0x20, true, 0xec9bf175ff7dac38)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.OtherExceptions", other_exceptions, 0x20, 0x20, true, 0x376e36a5e8e410da)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.MftReads", mft_reads, 0x40, 0x20, true, 0x87f5600be1f0e50c)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.MftReadBytes", mft_read_bytes, 0x60, 0x20, true, 0x4ec3a6c30c7a9344)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.MftWrites", mft_writes, 0x80, 0x20, true, 0xc295c7a5fa16cb24)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.MftWriteBytes", mft_write_bytes, 0xa0, 0x20, true, 0x3b9fc2f7f5b13608)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mft_writes_user_level_t), "_NTFS_STATISTICS.MftWritesUserLevel", mft_writes_user_level, 0xc0, 0x40, true, 0xffa9a271b813d854)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftWritesFlushForLogFileFull", mft_writes_flush_for_log_file_full, 0x100, 0x10, true, 0x833cffff185c2af1)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftWritesLazyWriter", mft_writes_lazy_writer, 0x110, 0x10, true, 0xc42ea071b1a03fbf)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftWritesUserRequest", mft_writes_user_request, 0x120, 0x10, true, 0xd2736dda387dc403)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Mft2Writes", mft2_writes, 0x140, 0x20, true, 0xa611e8a9c4cf718a)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Mft2WriteBytes", mft2_write_bytes, 0x160, 0x20, true, 0xfa7db4f6e7c91ad7)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mft_writes_user_level_t), "_NTFS_STATISTICS.Mft2WritesUserLevel", mft2_writes_user_level, 0x180, 0x40, true, 0x45e70556156a6059)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.Mft2WritesFlushForLogFileFull", mft2_writes_flush_for_log_file_full, 0x1c0, 0x10, true, 0xb98e0d7cd21d1aaf)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.Mft2WritesLazyWriter", mft2_writes_lazy_writer, 0x1d0, 0x10, true, 0xb73fb8fce679de1b)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.Mft2WritesUserRequest", mft2_writes_user_request, 0x1e0, 0x10, true, 0xa9fe29712df00ef9)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.RootIndexReads", root_index_reads, 0x200, 0x20, true, 0xf1182a5f1cde51f0)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.RootIndexReadBytes", root_index_read_bytes, 0x220, 0x20, true, 0xba82d94c9fdadf1)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.RootIndexWrites", root_index_writes, 0x240, 0x20, true, 0x1c6b0f6f7b8886a0)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.RootIndexWriteBytes", root_index_write_bytes, 0x260, 0x20, true, 0x245a26a1756b8def)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.BitmapReads", bitmap_reads, 0x280, 0x20, true, 0x7ccd9f6535f8f5fa)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.BitmapReadBytes", bitmap_read_bytes, 0x2a0, 0x20, true, 0x1c3a3a6cf36021b5)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.BitmapWrites", bitmap_writes, 0x2c0, 0x20, true, 0xed5655439fa14b9b)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.BitmapWriteBytes", bitmap_write_bytes, 0x2e0, 0x20, true, 0xc0dd163f87a12d6d)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.BitmapWritesFlushForLogFileFull", bitmap_writes_flush_for_log_file_full, 0x300, 0x10, true, 0x9e1f46227378883f)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.BitmapWritesLazyWriter", bitmap_writes_lazy_writer, 0x310, 0x10, true, 0x8d78b07f6f967597)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.BitmapWritesUserRequest", bitmap_writes_user_request, 0x320, 0x10, true, 0x80beb8e8edba31e5)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u9_bitmap_writes_user_level_t), "_NTFS_STATISTICS.BitmapWritesUserLevel", bitmap_writes_user_level, 0x330, 0x30, true, 0x7a4c459998c16321)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.MftBitmapReads", mft_bitmap_reads, 0x360, 0x20, true, 0xa6204a71265f12fb)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.MftBitmapReadBytes", mft_bitmap_read_bytes, 0x380, 0x20, true, 0xe9d5b96b17634bc3)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.MftBitmapWrites", mft_bitmap_writes, 0x3a0, 0x20, true, 0x6cf95fc35b9cdc13)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.MftBitmapWriteBytes", mft_bitmap_write_bytes, 0x3c0, 0x20, true, 0x7e4631e35aab9aa4)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftBitmapWritesFlushForLogFileFull", mft_bitmap_writes_flush_for_log_file_full, 0x3e0, 0x10, true, 0x5cabd4a302a459a0)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftBitmapWritesLazyWriter", mft_bitmap_writes_lazy_writer, 0x3f0, 0x10, true, 0xb9fc575a51eb4ecb)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftBitmapWritesUserRequest", mft_bitmap_writes_user_request, 0x400, 0x10, true, 0x7fbdc8ad2d4635a2)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mft_writes_user_level_t), "_NTFS_STATISTICS.MftBitmapWritesUserLevel", mft_bitmap_writes_user_level, 0x410, 0x40, true, 0x9d7d438885a48524)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.UserIndexReads", user_index_reads, 0x460, 0x20, true, 0x2e3815950cf5cbd8)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.UserIndexReadBytes", user_index_read_bytes, 0x480, 0x20, true, 0xf9864dde865e60e1)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.UserIndexWrites", user_index_writes, 0x4a0, 0x20, true, 0xc9422d8419941a22)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.UserIndexWriteBytes", user_index_write_bytes, 0x4c0, 0x20, true, 0x4ef8b1ee4b1cc8e4)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.LogFileReads", log_file_reads, 0x4e0, 0x20, true, 0x8f166a9b74bc7c1f)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.LogFileReadBytes", log_file_read_bytes, 0x500, 0x20, true, 0x589d68b7ca995424)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.LogFileWrites", log_file_writes, 0x520, 0x20, true, 0xab17461d8a9908bb)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.LogFileWriteBytes", log_file_write_bytes, 0x540, 0x20, true, 0x835cfdc156c5392e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftWritesUserLevel.Write", write, 0x0, 0x10, true, 0xd1dea38ac0f61b0)
#define _m069 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u18_allocate_t), "_NTFS_STATISTICS.Allocate", allocate, 0x560, 0x40, true, 0xe71eab8c00cf3406)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftWritesUserLevel.Create", create, 0x10, 0x10, true, 0xc59476ced5484b9b)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.DiskResourcesExhausted", disk_resources_exhausted, 0x6a0, 0x20, true, 0x9991b6fc934da16f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftWritesUserLevel.SetInfo", set_info, 0x20, 0x10, true, 0xcbab1aefb1e74c1c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftWritesUserLevel.Flush", flush, 0x30, 0x10, true, 0xb0a3f4a053fa666e)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.Mft2WritesUserLevel.Write", write, 0x0, 0x10, true, 0x527efb1fd610ba9d)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.Mft2WritesUserLevel.Create", create, 0x10, 0x10, true, 0xde6775519a614e2d)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.Mft2WritesUserLevel.SetInfo", set_info, 0x20, 0x10, true, 0x9ed6387edf3b1a85)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.Mft2WritesUserLevel.Flush", flush, 0x30, 0x10, true, 0xeb955596e864bc1c)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.BitmapWritesUserLevel.Write", write, 0x0, 0x10, true, 0xb8999e6ab269de35)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.BitmapWritesUserLevel.Create", create, 0x10, 0x10, true, 0x5baceb40666bc9a3)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.BitmapWritesUserLevel.SetInfo", set_info, 0x20, 0x10, true, 0x1accfdf72caf08f9)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftBitmapWritesUserLevel.Write", write, 0x0, 0x10, true, 0x468d1ab6ebe3af4b)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftBitmapWritesUserLevel.Create", create, 0x10, 0x10, true, 0xccb3851beccf895f)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftBitmapWritesUserLevel.SetInfo", set_info, 0x20, 0x10, true, 0x48d5ab6af88b05f2)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTFS_STATISTICS.MftBitmapWritesUserLevel.Flush", flush, 0x30, 0x10, true, 0xf1483594f1b9170f)
#define _m59 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.Calls", calls, 0x0, 0x20, true, 0x5a9f50cfe28dff7f)
#define _m60 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.Clusters", clusters, 0x20, 0x20, true, 0x77833609abaf5837)
#define _m61 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.Hints", hints, 0x40, 0x20, true, 0xa70d7463a98dc25a)
#define _m62 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.RunsReturned", runs_returned, 0x60, 0x20, true, 0x5a3fface741e2f6a)
#define _m63 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.HintsHonored", hints_honored, 0x80, 0x20, true, 0x17024ba28ecf332e)
#define _m64 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.HintsClusters", hints_clusters, 0xa0, 0x20, true, 0x88132aabfbda381a)
#define _m65 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.Cache", cache, 0xc0, 0x20, true, 0x8814d9dacda9db11)
#define _m66 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.CacheClusters", cache_clusters, 0xe0, 0x20, true, 0x1a0e9aa42fcfdccf)
#define _m67 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.CacheMiss", cache_miss, 0x100, 0x20, true, 0x311593089012c200)
#define _m68 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS.Allocate.CacheMissClusters", cache_miss_clusters, 0x120, 0x20, true, 0xd626f4842a658d20)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m06
#define _m069
#define _m07
#define _m070
#define _m08
#define _m09
#define _m16
#define _m17
#define _m18
#define _m19
#define _m35
#define _m36
#define _m37
#define _m46
#define _m47
#define _m48
#define _m49
#define _m59
#define _m60
#define _m61
#define _m62
#define _m63
#define _m64
#define _m65
#define _m66
#define _m67
#define _m68
#endif