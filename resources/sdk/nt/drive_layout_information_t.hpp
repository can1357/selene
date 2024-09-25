#pragma once
#include <sdkgen/support_library.hpp>
#include "partition_information_t.hpp"

#include "magic/drive_layout_information_t.start.hpp"
namespace nt
{
    // [struct _DRIVE_LAYOUT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct drive_layout_information_t           
    {                                           
        using partition_entry_t = sdk::array<struct nt::partition_information_t, 1>;                
                                                
        // WDK 10                               
        //                                      
        _m00 uint32_t           partition_count;  //{ +0x0000    } | .PartitionCount
        _m01 uint32_t           signature;        //{ +0x0004    } | .Signature
        _m02 partition_entry_t  partition_entry;  //{ +0x0008    } | .PartitionEntry
                                                
        SDK_NONVOL_PROPERTIES( "_DRIVE_LAYOUT_INFORMATION.$", 0x0, true, 0x2d0b4a68cae423a1 );                
        SDK_DYNAMIC_SIZE( drive_layout_information_t );                
    };                                          
};
#include "magic/drive_layout_information_t.end.hpp"
