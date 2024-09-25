#pragma once
#include <sdkgen/support_library.hpp>
#include "scatter_gather_element_t.hpp"

#include "magic/scatter_gather_list_t.start.hpp"
namespace nt
{
    // [struct _SCATTER_GATHER_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scatter_gather_list_t                                                
    {                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                      
        _m00 uint32_t                                        number_of_elements;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfElements
        _m01 sdk::array<struct nt::scatter_gather_element_t> elements;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Elements
                                                                                
        SDK_NONVOL_PROPERTIES( "_SCATTER_GATHER_LIST.$", 0x10, true, 0x4ed0955d578e88af );                   
        SDK_FIXED_SIZE( scatter_gather_list_t, 0x10 );                          
    };                                                                          
};
#include "magic/scatter_gather_list_t.end.hpp"
SDK_VERIFY( struct nt::scatter_gather_list_t, 0x10 );
