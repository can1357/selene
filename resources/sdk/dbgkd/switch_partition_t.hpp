#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/switch_partition_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_SWITCH_PARTITION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_partition_t   
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t partition;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Partition
                                
        SDK_MAGIC_PROPERTIES( "_DBGKD_SWITCH_PARTITION.$", 0x4, true, 0xca4e9fb88a928d6c );          
        SDK_FIXED_SIZE( switch_partition_t, 0x4 );          
    };                          
};
#include "magic/switch_partition_t.end.hpp"
SDK_VERIFY( struct dbgkd::switch_partition_t, 0x4 );
