#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kstopology_connection_t.start.hpp"
namespace ndis
{
    // [struct KSTOPOLOGY_CONNECTION]
    // => Windows 10 v1607
    //
    struct kstopology_connection_t  
    {                               
        // Windows 10 v1607              
        //                          
        _m00 uint32_t from_node;      //{ +0x0000    } | .FromNode
        _m01 uint32_t from_node_pin;  //{ +0x0004    } | .FromNodePin
        _m02 uint32_t to_node;        //{ +0x0008    } | .ToNode
        _m03 uint32_t to_node_pin;    //{ +0x000c    } | .ToNodePin
                                    
        SDK_MAGIC_PROPERTIES( "KSTOPOLOGY_CONNECTION.$", 0x0, false, 0xc2c1b7b8e7784106 );              
        SDK_FIXED_SIZE( kstopology_connection_t, 0x10 );              
    };                              
};
#include "magic/kstopology_connection_t.end.hpp"
SDK_VERIFY( struct ndis::kstopology_connection_t, 0x10 );
