#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_cache_information_t.start.hpp"
namespace nt
{
    // [struct _DISK_CACHE_INFORMATION]
    // => WDK 10 (NV)
    //
    struct disk_cache_information_t                                                        
    {                                                                                      
        enum class u0_read_retention_priority_t : int32_t                                  
        {                                                                                  
            equal_priority =       0x0,                                                      // WDK 10
            keep_prefetched_data = 0x1,                                                      // WDK 10
            keep_read_data =       0x2,                                                      // WDK 10
        };                                                                                 
                                                                                           
        enum class u1_write_retention_priority_t : int32_t                                 
        {                                                                                  
            equal_priority =       0x0,                                                      // WDK 10
            keep_prefetched_data = 0x1,                                                      // WDK 10
            keep_read_data =       0x2,                                                      // WDK 10
        };                                                                                 
                                                                                           
        struct u1_scalar_prefetch_t                                                        
        {                                                                                  
            // WDK 10                                                                      
            //                                                                             
            _m07 uint16_t minimum;                                                           //{ +0x0000    } | .Minimum
            _m08 uint16_t maximum;                                                           //{ +0x0002    } | .Maximum
            _m09 uint16_t maximum_blocks;                                                    //{ +0x0004    } | .MaximumBlocks
                                                                                           
            SDK_NONVOL_PROPERTIES( "_DISK_CACHE_INFORMATION.ScalarPrefetch.$", 0x0, false, 0x4dd12bcdfa2426b );                                                
            SDK_FIXED_SIZE( u1_scalar_prefetch_t, 0x6 );                                                
        };                                                                                 
                                                                                           
        struct u2_block_prefetch_t                                                         
        {                                                                                  
            // WDK 10                                                                      
            //                                                                             
            _m11 uint16_t minimum;                                                           //{ +0x0000    } | .Minimum
            _m12 uint16_t maximum;                                                           //{ +0x0002    } | .Maximum
                                                                                           
            SDK_NONVOL_PROPERTIES( "_DISK_CACHE_INFORMATION.BlockPrefetch.$", 0x0, false, 0x5886d414fec6868f );                                         
            SDK_FIXED_SIZE( u2_block_prefetch_t, 0x4 );                                         
        };                                                                                 
                                                                                           
        // WDK 10                                                                          
        //                                                                                 
        _m00 uint8_t                                      parameters_savable;                //{ +0x0000    } | .ParametersSavable
        _m01 uint8_t                                      read_cache_enabled;                //{ +0x0001    } | .ReadCacheEnabled
        _m02 uint8_t                                      write_cache_enabled;               //{ +0x0002    } | .WriteCacheEnabled
        _m03 u0_read_retention_priority_t                 read_retention_priority;           //{ +0x0004    } | .ReadRetentionPriority
        _m04 u0_read_retention_priority_t                 write_retention_priority;          //{ +0x0008    } | .WriteRetentionPriority
        _m05 uint16_t                                     disable_prefetch_transfer_length;  //{ +0x000c    } | .DisablePrefetchTransferLength
        _m06 uint8_t                                      prefetch_scalar;                   //{ +0x000e    } | .PrefetchScalar
        _m10 u1_scalar_prefetch_t                         scalar_prefetch;                   //{ +0x0010    } | .ScalarPrefetch
        _m13 u2_block_prefetch_t                          block_prefetch;                    //{ +0x0010    } | .BlockPrefetch
                                                                                           
        SDK_NONVOL_PROPERTIES( "_DISK_CACHE_INFORMATION.$", 0x0, false, 0x823a6e6589e1f25c );                                 
        SDK_FIXED_SIZE( disk_cache_information_t, 0x18 );                                  
    };                                                                                     
};
#include "magic/disk_cache_information_t.end.hpp"
SDK_VERIFY( struct nt::disk_cache_information_t::u1_scalar_prefetch_t, 0x6 );
SDK_VERIFY( struct nt::disk_cache_information_t::u2_block_prefetch_t, 0x4 );
SDK_VERIFY( struct nt::disk_cache_information_t, 0x18 );
