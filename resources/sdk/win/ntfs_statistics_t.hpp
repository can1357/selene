#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntfs_statistics_t.start.hpp"
namespace win
{
    // [struct _NTFS_STATISTICS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ntfs_statistics_t                                                               
    {                                                                                      
        struct u0_mft_writes_user_level_t                                                  
        {                                                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
            //                                                                             
            _m06 uint16_t write;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m07 uint16_t create;                                                            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Create
            _m08 uint16_t set_info;                                                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SetInfo
            _m09 uint16_t flush;                                                             //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Flush
                                                                                           
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS.MftWritesUserLevel.$", 0x8, true, 0xeda88a03511628af );                                                   
            SDK_FIXED_SIZE( u0_mft_writes_user_level_t, 0x8 );                                                   
        };                                                                                 
                                                                                           
        struct u5_mft2_writes_user_level_t                                                 
        {                                                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
            //                                                                             
            _m16 uint16_t write;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m17 uint16_t create;                                                            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Create
            _m18 uint16_t set_info;                                                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SetInfo
            _m19 uint16_t flush;                                                             //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Flush
                                                                                           
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS.Mft2WritesUserLevel.$", 0x8, true, 0xcb82e3675c23354c );                                                   
            SDK_FIXED_SIZE( u5_mft2_writes_user_level_t, 0x8 );                                                   
        };                                                                                 
                                                                                           
        struct u9_bitmap_writes_user_level_t                                               
        {                                                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
            //                                                                             
            _m35 uint16_t write;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m36 uint16_t create;                                                            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Create
            _m37 uint16_t set_info;                                                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SetInfo
                                                                                           
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS.BitmapWritesUserLevel.$", 0x6, true, 0xac75d5e3a6bf205 );                                                   
            SDK_FIXED_SIZE( u9_bitmap_writes_user_level_t, 0x6 );                                                   
        };                                                                                 
                                                                                           
        struct u14_mft_bitmap_writes_user_level_t                                          
        {                                                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
            //                                                                             
            _m46 uint16_t write;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m47 uint16_t create;                                                            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Create
            _m48 uint16_t set_info;                                                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SetInfo
            _m49 uint16_t flush;                                                             //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Flush
                                                                                           
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS.MftBitmapWritesUserLevel.$", 0x8, true, 0xbb8b0ff5cd94cfff );                                                   
            SDK_FIXED_SIZE( u14_mft_bitmap_writes_user_level_t, 0x8 );                                                   
        };                                                                                 
                                                                                           
        struct u18_allocate_t                                                              
        {                                                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
            //                                                                             
            _m59 uint32_t calls;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Calls
            _m60 uint32_t clusters;                                                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Clusters
            _m61 uint32_t hints;                                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Hints
            _m62 uint32_t runs_returned;                                                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .RunsReturned
            _m63 uint32_t hints_honored;                                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .HintsHonored
            _m64 uint32_t hints_clusters;                                                    //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .HintsClusters
            _m65 uint32_t cache;                                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Cache
            _m66 uint32_t cache_clusters;                                                    //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .CacheClusters
            _m67 uint32_t cache_miss;                                                        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CacheMiss
            _m68 uint32_t cache_miss_clusters;                                               //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .CacheMissClusters
                                                                                           
            SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS.Allocate.$", 0x28, true, 0x66ffb1b8ed1c8197 );                                                              
            SDK_FIXED_SIZE( u18_allocate_t, 0x28 );                                                              
        };                                                                                 
                                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                 
        _m000 uint32_t                           log_file_full_exceptions;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LogFileFullExceptions
        _m001 uint32_t                           other_exceptions;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .OtherExceptions
        _m002 uint32_t                           mft_reads;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MftReads
        _m003 uint32_t                           mft_read_bytes;                             //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MftReadBytes
        _m004 uint32_t                           mft_writes;                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MftWrites
        _m005 uint32_t                           mft_write_bytes;                            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .MftWriteBytes
        _m010 u0_mft_writes_user_level_t         mft_writes_user_level;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MftWritesUserLevel
        _m011 uint16_t                           mft_writes_flush_for_log_file_full;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MftWritesFlushForLogFileFull
        _m012 uint16_t                           mft_writes_lazy_writer;                     //{ +0x0022    +0x0022    +0x0022    +0x0022    +0x0022    } | .MftWritesLazyWriter
        _m013 uint16_t                           mft_writes_user_request;                    //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .MftWritesUserRequest
        _m014 uint32_t                           mft2_writes;                                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Mft2Writes
        _m015 uint32_t                           mft2_write_bytes;                           //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Mft2WriteBytes
        _m020 u0_mft_writes_user_level_t         mft2_writes_user_level;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Mft2WritesUserLevel
        _m021 uint16_t                           mft2_writes_flush_for_log_file_full;        //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Mft2WritesFlushForLogFileFull
        _m022 uint16_t                           mft2_writes_lazy_writer;                    //{ +0x003a    +0x003a    +0x003a    +0x003a    +0x003a    } | .Mft2WritesLazyWriter
        _m023 uint16_t                           mft2_writes_user_request;                   //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .Mft2WritesUserRequest
        _m024 uint32_t                           root_index_reads;                           //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .RootIndexReads
        _m025 uint32_t                           root_index_read_bytes;                      //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .RootIndexReadBytes
        _m026 uint32_t                           root_index_writes;                          //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .RootIndexWrites
        _m027 uint32_t                           root_index_write_bytes;                     //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .RootIndexWriteBytes
        _m028 uint32_t                           bitmap_reads;                               //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .BitmapReads
        _m029 uint32_t                           bitmap_read_bytes;                          //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .BitmapReadBytes
        _m030 uint32_t                           bitmap_writes;                              //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .BitmapWrites
        _m031 uint32_t                           bitmap_write_bytes;                         //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .BitmapWriteBytes
        _m032 uint16_t                           bitmap_writes_flush_for_log_file_full;      //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .BitmapWritesFlushForLogFileFull
        _m033 uint16_t                           bitmap_writes_lazy_writer;                  //{ +0x0062    +0x0062    +0x0062    +0x0062    +0x0062    } | .BitmapWritesLazyWriter
        _m034 uint16_t                           bitmap_writes_user_request;                 //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .BitmapWritesUserRequest
        _m038 u9_bitmap_writes_user_level_t      bitmap_writes_user_level;                   //{ +0x0066    +0x0066    +0x0066    +0x0066    +0x0066    } | .BitmapWritesUserLevel
        _m039 uint32_t                           mft_bitmap_reads;                           //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .MftBitmapReads
        _m040 uint32_t                           mft_bitmap_read_bytes;                      //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .MftBitmapReadBytes
        _m041 uint32_t                           mft_bitmap_writes;                          //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .MftBitmapWrites
        _m042 uint32_t                           mft_bitmap_write_bytes;                     //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .MftBitmapWriteBytes
        _m043 uint16_t                           mft_bitmap_writes_flush_for_log_file_full;  //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .MftBitmapWritesFlushForLogFileFull
        _m044 uint16_t                           mft_bitmap_writes_lazy_writer;              //{ +0x007e    +0x007e    +0x007e    +0x007e    +0x007e    } | .MftBitmapWritesLazyWriter
        _m045 uint16_t                           mft_bitmap_writes_user_request;             //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .MftBitmapWritesUserRequest
        _m050 u0_mft_writes_user_level_t         mft_bitmap_writes_user_level;               //{ +0x0082    +0x0082    +0x0082    +0x0082    +0x0082    } | .MftBitmapWritesUserLevel
        _m051 uint32_t                           user_index_reads;                           //{ +0x008c    +0x008c    +0x008c    +0x008c    +0x008c    } | .UserIndexReads
        _m052 uint32_t                           user_index_read_bytes;                      //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .UserIndexReadBytes
        _m053 uint32_t                           user_index_writes;                          //{ +0x0094    +0x0094    +0x0094    +0x0094    +0x0094    } | .UserIndexWrites
        _m054 uint32_t                           user_index_write_bytes;                     //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .UserIndexWriteBytes
        _m055 uint32_t                           log_file_reads;                             //{ +0x009c    +0x009c    +0x009c    +0x009c    +0x009c    } | .LogFileReads
        _m056 uint32_t                           log_file_read_bytes;                        //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .LogFileReadBytes
        _m057 uint32_t                           log_file_writes;                            //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .LogFileWrites
        _m058 uint32_t                           log_file_write_bytes;                       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .LogFileWriteBytes
        _m069 u18_allocate_t                     allocate;                                   //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .Allocate
        _m070 uint32_t                           disk_resources_exhausted;                   //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .DiskResourcesExhausted
                                                                                           
        SDK_NONVOL_PROPERTIES( "_NTFS_STATISTICS.$", 0xd8, true, 0x5b440915f2f124b8 );                                          
        SDK_FIXED_SIZE( ntfs_statistics_t, 0xd8 );                                          
    };                                                                                     
};
#include "magic/ntfs_statistics_t.end.hpp"
SDK_VERIFY( struct win::ntfs_statistics_t::u0_mft_writes_user_level_t, 0x8 );
SDK_VERIFY( struct win::ntfs_statistics_t::u5_mft2_writes_user_level_t, 0x8 );
SDK_VERIFY( struct win::ntfs_statistics_t::u9_bitmap_writes_user_level_t, 0x6 );
SDK_VERIFY( struct win::ntfs_statistics_t::u14_mft_bitmap_writes_user_level_t, 0x8 );
SDK_VERIFY( struct win::ntfs_statistics_t::u18_allocate_t, 0x28 );
SDK_VERIFY( struct win::ntfs_statistics_t, 0xd8 );
