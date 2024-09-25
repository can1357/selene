#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_scatter_gather_element_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_SCATTER_GATHER_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_scatter_gather_element_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 int64_t  physical_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalAddress
        _m01 uint32_t length;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                        
        SDK_MAGIC_PROPERTIES( "_STOR_SCATTER_GATHER_ELEMENT.$", 0x18, true, 0x636b005eef9aef7a );                 
        SDK_FIXED_SIZE( stor_scatter_gather_element_t, 0x18 );                 
    };                                  
};
#include "magic/stor_scatter_gather_element_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_scatter_gather_element_t, 0x18 );
