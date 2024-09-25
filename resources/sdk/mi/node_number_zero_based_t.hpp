#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/node_number_zero_based_t.start.hpp"
namespace mi
{
    // [struct _MI_NODE_NUMBER_ZERO_BASED]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct node_number_zero_based_t
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t zero_based;    //{ +0x0000    +0x0000    +0x0000    } | .ZeroBased
                                   
        SDK_MAGIC_PROPERTIES( "_MI_NODE_NUMBER_ZERO_BASED.$", 0x4, true, 0x329ef967ca39e4a7 );           
        SDK_FIXED_SIZE( node_number_zero_based_t, 0x4 );           
    };                             
};
#include "magic/node_number_zero_based_t.end.hpp"
SDK_VERIFY( struct mi::node_number_zero_based_t, 0x4 );
