#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.LogFileFullExceptions", log_file_full_exceptions, 0x0, 0x20, true, 0x14e389e5ebc98410)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.OtherExceptions", other_exceptions, 0x20, 0x20, true, 0xeed7bd228247cff2)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.MftReads", mft_reads, 0x40, 0x40, true, 0x2f8a814234e5add0)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.MftReadBytes", mft_read_bytes, 0x80, 0x40, true, 0x2c4f352a8990e125)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.MftWrites", mft_writes, 0xc0, 0x40, true, 0x28155538c1010822)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.MftWriteBytes", mft_write_bytes, 0x100, 0x40, true, 0xff3561cfcd844b15)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mft_writes_user_level_t), "_NTFS_STATISTICS_EX.MftWritesUserLevel", mft_writes_user_level, 0x140, 0x80, true, 0xcf72655ee3ae35e5)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftWritesFlushForLogFileFull", mft_writes_flush_for_log_file_full, 0x1c0, 0x20, true, 0xf7021b67220957ed)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftWritesLazyWriter", mft_writes_lazy_writer, 0x1e0, 0x20, true, 0x981cc157aedce5a)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftWritesUserRequest", mft_writes_user_request, 0x200, 0x20, true, 0x235f7daed6415412)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.Mft2Writes", mft2_writes, 0x240, 0x40, true, 0xbb6e498f8fc9891)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.Mft2WriteBytes", mft2_write_bytes, 0x280, 0x40, true, 0xeab3ef88d42a5b78)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mft_writes_user_level_t), "_NTFS_STATISTICS_EX.Mft2WritesUserLevel", mft2_writes_user_level, 0x2c0, 0x80, true, 0x2e06c32e1df0e332)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Mft2WritesFlushForLogFileFull", mft2_writes_flush_for_log_file_full, 0x340, 0x20, true, 0x12161b3702de9420)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Mft2WritesLazyWriter", mft2_writes_lazy_writer, 0x360, 0x20, true, 0xae6a71041ea68085)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Mft2WritesUserRequest", mft2_writes_user_request, 0x380, 0x20, true, 0xd402521b57c94ba3)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.RootIndexReads", root_index_reads, 0x3c0, 0x40, true, 0x4da6f592edfb96a1)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.RootIndexReadBytes", root_index_read_bytes, 0x400, 0x40, true, 0x3048ac17bd12efa8)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.RootIndexWrites", root_index_writes, 0x440, 0x40, true, 0x76efe9e3cb1398cc)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.RootIndexWriteBytes", root_index_write_bytes, 0x480, 0x40, true, 0xbb6eae1e7c5aa893)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.BitmapReads", bitmap_reads, 0x4c0, 0x40, true, 0x990edb8c9cf845)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.BitmapReadBytes", bitmap_read_bytes, 0x500, 0x40, true, 0x5b285a785094008b)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.BitmapWrites", bitmap_writes, 0x540, 0x40, true, 0xd752cfc14360a932)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.BitmapWriteBytes", bitmap_write_bytes, 0x580, 0x40, true, 0x82ee0da266c1096)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.BitmapWritesFlushForLogFileFull", bitmap_writes_flush_for_log_file_full, 0x5c0, 0x20, true, 0xfbf47346942b88c9)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.BitmapWritesLazyWriter", bitmap_writes_lazy_writer, 0x5e0, 0x20, true, 0x97a4eab7b39c9a3)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.BitmapWritesUserRequest", bitmap_writes_user_request, 0x600, 0x20, true, 0xe7dc4d083c650cef)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mft_writes_user_level_t), "_NTFS_STATISTICS_EX.BitmapWritesUserLevel", bitmap_writes_user_level, 0x620, 0x80, true, 0xffc57e95f2e8fd53)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.MftBitmapReads", mft_bitmap_reads, 0x6c0, 0x40, true, 0xde12f6e6160c021c)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.MftBitmapReadBytes", mft_bitmap_read_bytes, 0x700, 0x40, true, 0xe677683f4499d043)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.MftBitmapWrites", mft_bitmap_writes, 0x740, 0x40, true, 0x86208d9748311b9e)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.MftBitmapWriteBytes", mft_bitmap_write_bytes, 0x780, 0x40, true, 0x1b1b5008900c4e18)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftBitmapWritesFlushForLogFileFull", mft_bitmap_writes_flush_for_log_file_full, 0x7c0, 0x20, true, 0xb181b53c2a6c35dd)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftBitmapWritesLazyWriter", mft_bitmap_writes_lazy_writer, 0x7e0, 0x20, true, 0xea30036693a10916)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftBitmapWritesUserRequest", mft_bitmap_writes_user_request, 0x800, 0x20, true, 0x1336c7568cd15c5e)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mft_writes_user_level_t), "_NTFS_STATISTICS_EX.MftBitmapWritesUserLevel", mft_bitmap_writes_user_level, 0x820, 0x80, true, 0x723c8a91715023ac)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.UserIndexReads", user_index_reads, 0x8c0, 0x40, true, 0x7135acff6337ae7f)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.UserIndexReadBytes", user_index_read_bytes, 0x900, 0x40, true, 0xd1bf94f5911b81bd)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.UserIndexWrites", user_index_writes, 0x940, 0x40, true, 0x3128de3037c3fca8)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.UserIndexWriteBytes", user_index_write_bytes, 0x980, 0x40, true, 0x51b17d4981fc8392)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.LogFileReads", log_file_reads, 0x9c0, 0x40, true, 0x7892d12365b187f)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.LogFileReadBytes", log_file_read_bytes, 0xa00, 0x40, true, 0x7ddd2212650670b4)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.LogFileWrites", log_file_writes, 0xa40, 0x40, true, 0x879ae524672df131)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.LogFileWriteBytes", log_file_write_bytes, 0xa80, 0x40, true, 0x78da811823ed237e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftWritesUserLevel.Write", write, 0x0, 0x20, true, 0x8e3bf55492d5f9a6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftWritesUserLevel.Create", create, 0x20, 0x20, true, 0x87c967cba8595851)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u17_allocate_t), "_NTFS_STATISTICS_EX.Allocate", allocate, 0xac0, 0xc0, true, 0x57cfa82fa8959ef)
#define _m071 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.DiskResourcesExhausted", disk_resources_exhausted, 0xc80, 0x20, true, 0x731ee9212125917f)
#define _m072 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.VolumeTrimCount", volume_trim_count, 0xcc0, 0x40, true, 0xaa235f29d3f56210)
#define _m073 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.VolumeTrimTime", volume_trim_time, 0xd00, 0x40, true, 0x625d2c41d24ef380)
#define _m074 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.VolumeTrimByteCount", volume_trim_byte_count, 0xd40, 0x40, true, 0xfca1128895ce3e0b)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.FileLevelTrimCount", file_level_trim_count, 0xd80, 0x40, true, 0x73e8405debfc977c)
#define _m076 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.FileLevelTrimTime", file_level_trim_time, 0xdc0, 0x40, true, 0xf6e7ceb998503f76)
#define _m077 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.FileLevelTrimByteCount", file_level_trim_byte_count, 0xe00, 0x40, true, 0xc5ebbb3d3d3b326b)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.VolumeTrimSkippedCount", volume_trim_skipped_count, 0xe40, 0x40, true, 0xc4a45aad67fd11)
#define _m079 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.VolumeTrimSkippedByteCount", volume_trim_skipped_byte_count, 0xe80, 0x40, true, 0xeea46be64f69e6df)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftWritesUserLevel.SetInfo", set_info, 0x40, 0x20, true, 0x40e4518e196d6ffb)
#define _m080 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.NtfsFillStatInfoFromMftRecordCalledCount", ntfs_fill_stat_info_from_mft_record_called_count, 0xec0, 0x40, true, 0xef0122bae16e9424)
#define _m081 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.NtfsFillStatInfoFromMftRecordBailedBecauseOfAttributeListCount", ntfs_fill_stat_info_from_mft_record_bailed_because_of_attribute_list_count, 0xf00, 0x40, true, 0xa6a8346daf7d6fe7)
#define _m082 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.NtfsFillStatInfoFromMftRecordBailedBecauseOfNonResReparsePointCount", ntfs_fill_stat_info_from_mft_record_bailed_because_of_non_res_reparse_point_count, 0xf40, 0x40, true, 0x4e43746d7cecd351)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftWritesUserLevel.Flush", flush, 0x60, 0x20, true, 0x216b35c8713f556c)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Mft2WritesUserLevel.Write", write, 0x0, 0x20, true, 0xae928daaf791d144)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Mft2WritesUserLevel.Create", create, 0x20, 0x20, true, 0x1d944294c98e8540)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Mft2WritesUserLevel.SetInfo", set_info, 0x40, 0x20, true, 0x8c888fcdf1e875bf)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Mft2WritesUserLevel.Flush", flush, 0x60, 0x20, true, 0x482239842818f0e3)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.BitmapWritesUserLevel.Write", write, 0x0, 0x20, true, 0xc70f72ededce3ea4)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.BitmapWritesUserLevel.Create", create, 0x20, 0x20, true, 0x77c669083b8b9bde)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.BitmapWritesUserLevel.SetInfo", set_info, 0x40, 0x20, true, 0x2ebc51119aaad0cf)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.BitmapWritesUserLevel.Flush", flush, 0x60, 0x20, true, 0x3547785af9e6ae7c)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftBitmapWritesUserLevel.Write", write, 0x0, 0x20, true, 0xb3c9597a26f3f916)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftBitmapWritesUserLevel.Create", create, 0x20, 0x20, true, 0xdb08ad25dc355e09)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftBitmapWritesUserLevel.SetInfo", set_info, 0x40, 0x20, true, 0xa4b9ba48277fa103)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.MftBitmapWritesUserLevel.Flush", flush, 0x60, 0x20, true, 0x5e2b26cdcbff0712)
#define _m60 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Allocate.Calls", calls, 0x0, 0x20, true, 0xa741d514048f661e)
#define _m61 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Allocate.RunsReturned", runs_returned, 0x20, 0x20, true, 0x6ac7929904b45e4e)
#define _m62 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Allocate.Hints", hints, 0x40, 0x20, true, 0xa20afc8c034dd4a8)
#define _m63 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Allocate.HintsHonored", hints_honored, 0x60, 0x20, true, 0xde1951ace5a9b5e2)
#define _m64 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Allocate.Cache", cache, 0x80, 0x20, true, 0xdf67e6e4475c3e0)
#define _m65 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTFS_STATISTICS_EX.Allocate.CacheMiss", cache_miss, 0xa0, 0x20, true, 0x8b8125fa1bd7f1cb)
#define _m66 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.Allocate.Clusters", clusters, 0xc0, 0x40, true, 0xd6aa6a9882348055)
#define _m67 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.Allocate.HintsClusters", hints_clusters, 0x100, 0x40, true, 0x1af130accc792d1c)
#define _m68 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.Allocate.CacheClusters", cache_clusters, 0x140, 0x40, true, 0x2547cc1ae765215c)
#define _m69 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NTFS_STATISTICS_EX.Allocate.CacheMissClusters", cache_miss_clusters, 0x180, 0x40, true, 0x9749ebf8d78013f5)
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
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m06
#define _m07
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m08
#define _m080
#define _m081
#define _m082
#define _m09
#define _m16
#define _m17
#define _m18
#define _m19
#define _m35
#define _m36
#define _m37
#define _m38
#define _m47
#define _m48
#define _m49
#define _m50
#define _m60
#define _m61
#define _m62
#define _m63
#define _m64
#define _m65
#define _m66
#define _m67
#define _m68
#define _m69
#endif