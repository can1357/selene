#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_numa_node_information_t.start.hpp"
namespace win
{
    // [struct _FILE_NUMA_NODE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_numa_node_information_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint16_t node_number;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeNumber
                                       
        SDK_NONVOL_PROPERTIES( "_FILE_NUMA_NODE_INFORMATION.$", 0x2, true, 0x3ab6e3744fb007b6 );            
        SDK_FIXED_SIZE( file_numa_node_information_t, 0x2 );            
    };                                 
};
#include "magic/file_numa_node_information_t.end.hpp"
SDK_VERIFY( struct win::file_numa_node_information_t, 0x2 );
