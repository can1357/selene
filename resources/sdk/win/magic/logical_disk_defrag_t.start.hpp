#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.AlignmentClusters", alignment_clusters, 0x0, 0x40, true, 0xd9ebdbb45d2dddac)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.AvgFreeSpaceSize", avg_free_space_size, 0x40, 0x40, true, 0xc031b8e32c17de19)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.ClustersPerSlab", clusters_per_slab, 0x80, 0x40, true, 0xc2f053dc7e783334)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.FragmentedDirectoryExtents", fragmented_directory_extents, 0xc0, 0x40, true, 0x407f3044bd28e177)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.FragmentedExtents", fragmented_extents, 0x100, 0x40, true, 0x594ebdc505314c6c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.FreeSpaceCount", free_space_count, 0x140, 0x40, true, 0x955fbefdd6531dc1)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.LargestFreeSpaceSize", largest_free_space_size, 0x180, 0x40, true, 0x34db77c639b62295)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.LastRunActualPurgeClusters", last_run_actual_purge_clusters, 0x1c0, 0x40, true, 0x6e8d508bc7e525d7)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.LastRunClustersTrimmed", last_run_clusters_trimmed, 0x200, 0x40, true, 0x4ac10f3860e2fc20)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.LastRunFullDefragTime", last_run_full_defrag_time, 0x240, 0x40, true, 0xb9c3c9bde55cefc4)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.LastRunTime", last_run_time, 0x280, 0x40, true, 0x97524d2b9962e9f6)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.MFTSize", mft_size, 0x2c0, 0x40, true, 0xc79095cee80d8eb5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.TotalClusters", total_clusters, 0x300, 0x40, true, 0xe558e2cdde1eda8d)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_DEFRAG.TotalUsedClusters", total_used_clusters, 0x340, 0x40, true, 0xeba038607ecc9e36)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.AvgFragmentsPerFile", avg_fragments_per_file, 0x380, 0x20, true, 0xbb0cd70bae8b71cc)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.BytesPerCluster", bytes_per_cluster, 0x3a0, 0x20, true, 0xfb947c1e9010dc16)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.DirectoryCount", directory_count, 0x3c0, 0x20, true, 0xd2244a5a896fd0b6)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.FragmentedDirectories", fragmented_directories, 0x3e0, 0x20, true, 0xc9c240f2210cd829)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.FragmentedFiles", fragmented_files, 0x400, 0x20, true, 0x16ff83fe1675dc4c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.FragmentedSpace", fragmented_space, 0x420, 0x20, true, 0xf3ad0780d1fe521b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.HardwareIssue", hardware_issue, 0x440, 0x20, true, 0x174e9124b5c442c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.InUseMFTRecords", in_use_mft_records, 0x460, 0x20, true, 0xb1866db0b558dea5)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.InUseSlabs", in_use_slabs, 0x480, 0x20, true, 0x54f50957a2abf135)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunActualPurgeSlabs", last_run_actual_purge_slabs, 0x4a0, 0x20, true, 0x8fd7811b8fff0d94)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunInitialBackedSlabs", last_run_initial_backed_slabs, 0x4c0, 0x20, true, 0xc81765bd8a841468)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunPercentFragmentation", last_run_percent_fragmentation, 0x4e0, 0x20, true, 0x56764432800c6720)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunPinnedSlabs", last_run_pinned_slabs, 0x500, 0x20, true, 0xd76bad39976b879)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunPotentialPurgeSlabs", last_run_potential_purge_slabs, 0x520, 0x20, true, 0x6765de6781cfa905)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunSpaceInefficientSlabs", last_run_space_inefficient_slabs, 0x540, 0x20, true, 0x21c6193ac79c1393)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunTrimmedSlabs", last_run_trimmed_slabs, 0x560, 0x20, true, 0x54c8ffe9b79240b0)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunUnknownEvictFailSlabs", last_run_unknown_evict_fail_slabs, 0x580, 0x20, true, 0xca918a78030a357f)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.LastRunVolsnapPinnedSlabs", last_run_volsnap_pinned_slabs, 0x5a0, 0x20, true, 0xe8a9fb25f441a9a1)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.MFTFragmentCount", mft_fragment_count, 0x5c0, 0x20, true, 0xb9f7e9c6678d26aa)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.MovableFiles", movable_files, 0x5e0, 0x20, true, 0xa723805fd1f145b8)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.TotalMFTRecords", total_mft_records, 0x600, 0x20, true, 0x8f60149cdc31235b)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.TotalSlabs", total_slabs, 0x620, 0x20, true, 0x66ad342406744a60)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_DEFRAG.UnmovableFiles", unmovable_files, 0x640, 0x20, true, 0x179b4a10e6a90d5c)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_LOGICAL_DISK_DEFRAG.VolumeId", volume_id, 0x660, 0x80, true, 0x5833645ab130fa1f)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_LOGICAL_DISK_DEFRAG.VolumePathNames", volume_path_names, 0x6e0, 0x10, true, 0x4bdbd1d212d5fc5f)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
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
#define _m035
#define _m036
#define _m037
#define _m038
#endif