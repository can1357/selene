#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_partition_information_t.start.hpp"
namespace nt
{
    // [struct _SET_PARTITION_INFORMATION]
    // => WDK 10 (NV)
    //
    struct set_partition_information_t
    {                                 
        // WDK 10                   
        //                          
        _m00 uint8_t partition_type;    //{ +0x0000    } | .PartitionType
                                      
        SDK_NONVOL_PROPERTIES( "_SET_PARTITION_INFORMATION.$", 0x0, false, 0x768add48af90fa76 );               
        SDK_FIXED_SIZE( set_partition_information_t, 0x1 );               
    };                                
};
#include "magic/set_partition_information_t.end.hpp"
SDK_VERIFY( struct nt::set_partition_information_t, 0x1 );
