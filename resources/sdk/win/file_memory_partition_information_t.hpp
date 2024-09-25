#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_memory_partition_information_t.start.hpp"
namespace win
{
    // [struct _FILE_MEMORY_PARTITION_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_memory_partition_information_t                             
    {                                                                      
        union u0_flags_t                                                   
        {                                                                  
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
            //                                                             
            _m01 uint8_t  no_cross_partition_access;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NoCrossPartitionAccess
            _m02 uint32_t all_flags;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllFlags
                                                                           
            SDK_NONVOL_PROPERTIES( "_FILE_MEMORY_PARTITION_INFORMATION.Flags.$", 0x4, true, 0xe24ba74ded21c21a );                                                 
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                 
        };                                                                 
                                                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m00 uint64_t                               owner_partition_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OwnerPartitionHandle
        _m03 u0_flags_t                             flags;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                                                           
        SDK_NONVOL_PROPERTIES( "_FILE_MEMORY_PARTITION_INFORMATION.$", 0x10, true, 0x36bc6d437919487c );                       
        SDK_FIXED_SIZE( file_memory_partition_information_t, 0x10 );                       
    };                                                                     
};
#include "magic/file_memory_partition_information_t.end.hpp"
SDK_VERIFY( union win::file_memory_partition_information_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct win::file_memory_partition_information_t, 0x10 );
