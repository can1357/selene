#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntfs_statistics_ex_t.start.hpp"
namespace win
{
    // [struct _NTFS_STATISTICS_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ntfs_statistics_ex_t                                                                                                    
    {                                                                                                                              
        struct u0_mft_writes_user_level_t                                                                                          
        {                                                                                                                          
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                           
            //                                                                                                                     
            _m06 uint32_t write;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m07 uint32_t create;                                                                                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Create
            _m08 uint32_t set_info;                                                                                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SetInfo
            _m09 uint32_t flush;                                                                                                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flush
                                                                                                                                   
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS_EX.MftWritesUserLevel.$", 0x10, true, 0x2aff7cfcea3fbacc );                                                                                           
            SDK_FIXED_SIZE( u0_mft_writes_user_level_t, 0x10 );                                                                                           
        };                                                                                                                         
                                                                                                                                   
        struct u5_mft2_writes_user_level_t                                                                                         
        {                                                                                                                          
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                           
            //                                                                                                                     
            _m16 uint32_t write;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m17 uint32_t create;                                                                                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Create
            _m18 uint32_t set_info;                                                                                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SetInfo
            _m19 uint32_t flush;                                                                                                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flush
                                                                                                                                   
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS_EX.Mft2WritesUserLevel.$", 0x10, true, 0x7abae6d3e37c02ca );                                                                                           
            SDK_FIXED_SIZE( u5_mft2_writes_user_level_t, 0x10 );                                                                                           
        };                                                                                                                         
                                                                                                                                   
        struct u9_bitmap_writes_user_level_t                                                                                       
        {                                                                                                                          
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                           
            //                                                                                                                     
            _m35 uint32_t write;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m36 uint32_t create;                                                                                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Create
            _m37 uint32_t set_info;                                                                                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SetInfo
            _m38 uint32_t flush;                                                                                                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flush
                                                                                                                                   
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS_EX.BitmapWritesUserLevel.$", 0x10, true, 0xc108d89c80bfab41 );                                                                                           
            SDK_FIXED_SIZE( u9_bitmap_writes_user_level_t, 0x10 );                                                                                           
        };                                                                                                                         
                                                                                                                                   
        struct u13_mft_bitmap_writes_user_level_t                                                                                  
        {                                                                                                                          
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                           
            //                                                                                                                     
            _m47 uint32_t write;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m48 uint32_t create;                                                                                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Create
            _m49 uint32_t set_info;                                                                                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SetInfo
            _m50 uint32_t flush;                                                                                                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flush
                                                                                                                                   
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS_EX.MftBitmapWritesUserLevel.$", 0x10, true, 0x9a0bc5b6431617a5 );                                                                                           
            SDK_FIXED_SIZE( u13_mft_bitmap_writes_user_level_t, 0x10 );                                                                                           
        };                                                                                                                         
                                                                                                                                   
        struct u17_allocate_t                                                                                                      
        {                                                                                                                          
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                                      
            //                                                                                                                     
            _m60 uint32_t calls;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Calls
            _m61 uint32_t runs_returned;                                                                                             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RunsReturned
            _m62 uint32_t hints;                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Hints
            _m63 uint32_t hints_honored;                                                                                             //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .HintsHonored
            _m64 uint32_t cache;                                                                                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Cache
            _m65 uint32_t cache_miss;                                                                                                //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .CacheMiss
            _m66 uint64_t clusters;                                                                                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Clusters
            _m67 uint64_t hints_clusters;                                                                                            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .HintsClusters
            _m68 uint64_t cache_clusters;                                                                                            //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CacheClusters
            _m69 uint64_t cache_miss_clusters;                                                                                       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .CacheMissClusters
                                                                                                                                   
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS_EX.Allocate.$", 0x38, true, 0xf8342bdb5c8bf407 );                                                                                                      
            SDK_FIXED_SIZE( u17_allocate_t, 0x38 );                                                                                                      
        };                                                                                                                         
                                                                                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                  
        //                                                                                                                         
        _m000 uint32_t                           log_file_full_exceptions;                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LogFileFullExceptions
        _m001 uint32_t                           other_exceptions;                                                                   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .OtherExceptions
        _m002 uint64_t                           mft_reads;                                                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MftReads
        _m003 uint64_t                           mft_read_bytes;                                                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MftReadBytes
        _m004 uint64_t                           mft_writes;                                                                         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MftWrites
        _m005 uint64_t                           mft_write_bytes;                                                                    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MftWriteBytes
        _m010 u0_mft_writes_user_level_t         mft_writes_user_level;                                                              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MftWritesUserLevel
        _m011 uint32_t                           mft_writes_flush_for_log_file_full;                                                 //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .MftWritesFlushForLogFileFull
        _m012 uint32_t                           mft_writes_lazy_writer;                                                             //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .MftWritesLazyWriter
        _m013 uint32_t                           mft_writes_user_request;                                                            //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .MftWritesUserRequest
        _m014 uint64_t                           mft2_writes;                                                                        //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .Mft2Writes
        _m015 uint64_t                           mft2_write_bytes;                                                                   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Mft2WriteBytes
        _m020 u0_mft_writes_user_level_t         mft2_writes_user_level;                                                             //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Mft2WritesUserLevel
        _m021 uint32_t                           mft2_writes_flush_for_log_file_full;                                                //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .Mft2WritesFlushForLogFileFull
        _m022 uint32_t                           mft2_writes_lazy_writer;                                                            //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .Mft2WritesLazyWriter
        _m023 uint32_t                           mft2_writes_user_request;                                                           //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .Mft2WritesUserRequest
        _m024 uint64_t                           root_index_reads;                                                                   //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .RootIndexReads
        _m025 uint64_t                           root_index_read_bytes;                                                              //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .RootIndexReadBytes
        _m026 uint64_t                           root_index_writes;                                                                  //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .RootIndexWrites
        _m027 uint64_t                           root_index_write_bytes;                                                             //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .RootIndexWriteBytes
        _m028 uint64_t                           bitmap_reads;                                                                       //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .BitmapReads
        _m029 uint64_t                           bitmap_read_bytes;                                                                  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .BitmapReadBytes
        _m030 uint64_t                           bitmap_writes;                                                                      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .BitmapWrites
        _m031 uint64_t                           bitmap_write_bytes;                                                                 //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .BitmapWriteBytes
        _m032 uint32_t                           bitmap_writes_flush_for_log_file_full;                                              //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .BitmapWritesFlushForLogFileFull
        _m033 uint32_t                           bitmap_writes_lazy_writer;                                                          //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .BitmapWritesLazyWriter
        _m034 uint32_t                           bitmap_writes_user_request;                                                         //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .BitmapWritesUserRequest
        _m039 u0_mft_writes_user_level_t         bitmap_writes_user_level;                                                           //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .BitmapWritesUserLevel
        _m040 uint64_t                           mft_bitmap_reads;                                                                   //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .MftBitmapReads
        _m041 uint64_t                           mft_bitmap_read_bytes;                                                              //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .MftBitmapReadBytes
        _m042 uint64_t                           mft_bitmap_writes;                                                                  //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .MftBitmapWrites
        _m043 uint64_t                           mft_bitmap_write_bytes;                                                             //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .MftBitmapWriteBytes
        _m044 uint32_t                           mft_bitmap_writes_flush_for_log_file_full;                                          //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .MftBitmapWritesFlushForLogFileFull
        _m045 uint32_t                           mft_bitmap_writes_lazy_writer;                                                      //{ +0x00fc    +0x00fc    +0x00fc    +0x00fc    +0x00fc    } | .MftBitmapWritesLazyWriter
        _m046 uint32_t                           mft_bitmap_writes_user_request;                                                     //{ +0x0100    +0x0100    +0x0100    +0x0100    +0x0100    } | .MftBitmapWritesUserRequest
        _m051 u0_mft_writes_user_level_t         mft_bitmap_writes_user_level;                                                       //{ +0x0104    +0x0104    +0x0104    +0x0104    +0x0104    } | .MftBitmapWritesUserLevel
        _m052 uint64_t                           user_index_reads;                                                                   //{ +0x0118    +0x0118    +0x0118    +0x0118    +0x0118    } | .UserIndexReads
        _m053 uint64_t                           user_index_read_bytes;                                                              //{ +0x0120    +0x0120    +0x0120    +0x0120    +0x0120    } | .UserIndexReadBytes
        _m054 uint64_t                           user_index_writes;                                                                  //{ +0x0128    +0x0128    +0x0128    +0x0128    +0x0128    } | .UserIndexWrites
        _m055 uint64_t                           user_index_write_bytes;                                                             //{ +0x0130    +0x0130    +0x0130    +0x0130    +0x0130    } | .UserIndexWriteBytes
        _m056 uint64_t                           log_file_reads;                                                                     //{ +0x0138    +0x0138    +0x0138    +0x0138    +0x0138    } | .LogFileReads
        _m057 uint64_t                           log_file_read_bytes;                                                                //{ +0x0140    +0x0140    +0x0140    +0x0140    +0x0140    } | .LogFileReadBytes
        _m058 uint64_t                           log_file_writes;                                                                    //{ +0x0148    +0x0148    +0x0148    +0x0148    +0x0148    } | .LogFileWrites
        _m059 uint64_t                           log_file_write_bytes;                                                               //{ +0x0150    +0x0150    +0x0150    +0x0150    +0x0150    } | .LogFileWriteBytes
        _m070 u17_allocate_t                     allocate;                                                                           //{ +0x0158    +0x0158    +0x0158    +0x0158    +0x0158    } | .Allocate
        _m071 uint32_t                           disk_resources_exhausted;                                                           //{ +0x0190    +0x0190    +0x0190    +0x0190    +0x0190    } | .DiskResourcesExhausted
        _m072 uint64_t                           volume_trim_count;                                                                  //{ +0x0198    +0x0198    +0x0198    +0x0198    +0x0198    } | .VolumeTrimCount
        _m073 uint64_t                           volume_trim_time;                                                                   //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .VolumeTrimTime
        _m074 uint64_t                           volume_trim_byte_count;                                                             //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .VolumeTrimByteCount
        _m075 uint64_t                           file_level_trim_count;                                                              //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .FileLevelTrimCount
        _m076 uint64_t                           file_level_trim_time;                                                               //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .FileLevelTrimTime
        _m077 uint64_t                           file_level_trim_byte_count;                                                         //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .FileLevelTrimByteCount
        _m078 uint64_t                           volume_trim_skipped_count;                                                          //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .VolumeTrimSkippedCount
        _m079 uint64_t                           volume_trim_skipped_byte_count;                                                     //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .VolumeTrimSkippedByteCount
                                                                                                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                  
        //                                                                                                                         
        _m080 uint64_t                           ntfs_fill_stat_info_from_mft_record_called_count;                                   //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | .NtfsFillStatInfoFromMftRecordCalledCount
        _m081 uint64_t                           ntfs_fill_stat_info_from_mft_record_bailed_because_of_attribute_list_count;         //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .NtfsFillStatInfoFromMftRecordBailedBecauseOfAttributeListCount
        _m082 uint64_t                           ntfs_fill_stat_info_from_mft_record_bailed_because_of_non_res_reparse_point_count;  //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .NtfsFillStatInfoFromMftRecordBailedBecauseOfNonResReparsePointCount
                                                                                                                                   
        SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS_EX.$", 0x1f0, true, 0x62e102cc44735b74 );                                                                                  
        SDK_DYNAMIC_SIZE( ntfs_statistics_ex_t );                                                                                  
    };                                                                                                                             
};
#include "magic/ntfs_statistics_ex_t.end.hpp"
SDK_VERIFY( struct win::ntfs_statistics_ex_t::u0_mft_writes_user_level_t, 0x10 );
SDK_VERIFY( struct win::ntfs_statistics_ex_t::u5_mft2_writes_user_level_t, 0x10 );
SDK_VERIFY( struct win::ntfs_statistics_ex_t::u9_bitmap_writes_user_level_t, 0x10 );
SDK_VERIFY( struct win::ntfs_statistics_ex_t::u13_mft_bitmap_writes_user_level_t, 0x10 );
SDK_VERIFY( struct win::ntfs_statistics_ex_t::u17_allocate_t, 0x38 );
