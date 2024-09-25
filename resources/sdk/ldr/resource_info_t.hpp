#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_info_t.start.hpp"
namespace ldr
{
    // [struct _LDR_RESOURCE_INFO]
    // => WDK 10 (NV)
    //
    struct resource_info_t     
    {                          
        // WDK 10              
        //                     
        _m00 uint64_t type;      //{ +0x0000    } | .Type
        _m01 uint64_t name;      //{ +0x0008    } | .Name
        _m02 uint64_t language;  //{ +0x0010    } | .Language
                               
        SDK_NONVOL_PROPERTIES( "_LDR_RESOURCE_INFO.$", 0x0, false, 0x83bc4913b746436c );         
        SDK_FIXED_SIZE( resource_info_t, 0x18 );         
    };                         
};
#include "magic/resource_info_t.end.hpp"
SDK_VERIFY( struct ldr::resource_info_t, 0x18 );
