#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/logical_disk_defrag_t.start.hpp"
namespace win
{
    // [struct _LOGICAL_DISK_DEFRAG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logical_disk_defrag_t                                       
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                             
        _m000 uint64_t               alignment_clusters;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AlignmentClusters
        _m001 uint64_t               avg_free_space_size;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AvgFreeSpaceSize
        _m002 uint64_t               clusters_per_slab;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClustersPerSlab
        _m003 uint64_t               fragmented_directory_extents;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FragmentedDirectoryExtents
        _m004 uint64_t               fragmented_extents;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FragmentedExtents
        _m005 uint64_t               free_space_count;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeSpaceCount
        _m006 uint64_t               largest_free_space_size;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LargestFreeSpaceSize
        _m007 uint64_t               last_run_actual_purge_clusters;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LastRunActualPurgeClusters
        _m008 uint64_t               last_run_clusters_trimmed;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LastRunClustersTrimmed
        _m009 uint64_t               last_run_full_defrag_time;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LastRunFullDefragTime
        _m010 uint64_t               last_run_time;                      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LastRunTime
        _m011 uint64_t               mft_size;                           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MFTSize
        _m012 uint64_t               total_clusters;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .TotalClusters
        _m013 uint64_t               total_used_clusters;                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .TotalUsedClusters
        _m014 uint32_t               avg_fragments_per_file;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .AvgFragmentsPerFile
        _m015 uint32_t               bytes_per_cluster;                  //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .BytesPerCluster
        _m016 uint32_t               directory_count;                    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DirectoryCount
        _m017 uint32_t               fragmented_directories;             //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .FragmentedDirectories
        _m018 uint32_t               fragmented_files;                   //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .FragmentedFiles
        _m019 uint32_t               fragmented_space;                   //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .FragmentedSpace
        _m020 uint32_t               hardware_issue;                     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .HardwareIssue
        _m021 uint32_t               in_use_mft_records;                 //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .InUseMFTRecords
        _m022 uint32_t               in_use_slabs;                       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .InUseSlabs
        _m023 uint32_t               last_run_actual_purge_slabs;        //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .LastRunActualPurgeSlabs
        _m024 uint32_t               last_run_initial_backed_slabs;      //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .LastRunInitialBackedSlabs
        _m025 uint32_t               last_run_percent_fragmentation;     //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .LastRunPercentFragmentation
        _m026 uint32_t               last_run_pinned_slabs;              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .LastRunPinnedSlabs
        _m027 uint32_t               last_run_potential_purge_slabs;     //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .LastRunPotentialPurgeSlabs
        _m028 uint32_t               last_run_space_inefficient_slabs;   //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .LastRunSpaceInefficientSlabs
        _m029 uint32_t               last_run_trimmed_slabs;             //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .LastRunTrimmedSlabs
        _m030 uint32_t               last_run_unknown_evict_fail_slabs;  //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .LastRunUnknownEvictFailSlabs
        _m031 uint32_t               last_run_volsnap_pinned_slabs;      //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .LastRunVolsnapPinnedSlabs
        _m032 uint32_t               mft_fragment_count;                 //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .MFTFragmentCount
        _m033 uint32_t               movable_files;                      //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .MovableFiles
        _m034 uint32_t               total_mft_records;                  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .TotalMFTRecords
        _m035 uint32_t               total_slabs;                        //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .TotalSlabs
        _m036 uint32_t               unmovable_files;                    //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .UnmovableFiles
        _m037 struct nt::guid_t      volume_id;                          //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .VolumeId
        _m038 sdk::array<wchar_t, 1> volume_path_names;                  //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .VolumePathNames
                                                                       
        SDK_MAGIC_PROPERTIES( "_LOGICAL_DISK_DEFRAG.$", 0xe0, true, 0x311656bc0d6d34a0 );                                  
        SDK_FIXED_SIZE( logical_disk_defrag_t, 0xe0 );                                  
    };                                                                 
};
#include "magic/logical_disk_defrag_t.end.hpp"
SDK_VERIFY( struct win::logical_disk_defrag_t, 0xe0 );
