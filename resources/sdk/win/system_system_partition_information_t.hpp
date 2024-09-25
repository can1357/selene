#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_system_partition_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SYSTEM_PARTITION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_system_partition_information_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                     
        _m00 nt::unicode_view system_partition;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemPartition
                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SYSTEM_PARTITION_INFORMATION.$", 0x10, true, 0x284ec13837201790 );                 
        SDK_FIXED_SIZE( system_system_partition_information_t, 0x10 );                 
    };                                          
};
#include "magic/system_system_partition_information_t.end.hpp"
SDK_VERIFY( struct win::system_system_partition_information_t, 0x10 );
