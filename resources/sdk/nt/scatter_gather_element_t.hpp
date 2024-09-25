#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scatter_gather_element_t.start.hpp"
namespace nt
{
    // [struct _SCATTER_GATHER_ELEMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scatter_gather_element_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 int64_t  address;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint32_t length;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                   
        SDK_NONVOL_PROPERTIES( "_SCATTER_GATHER_ELEMENT.$", 0x18, true, 0x98fda9f4ea75454c );        
        SDK_FIXED_SIZE( scatter_gather_element_t, 0x18 );        
    };                             
};
#include "magic/scatter_gather_element_t.end.hpp"
SDK_VERIFY( struct nt::scatter_gather_element_t, 0x18 );
