#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_t.start.hpp"
namespace hv
{
    // [struct _HV_DETAILS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct details_t                      
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint32_t, 4> data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
                                          
        SDK_MAGIC_PROPERTIES( "_HV_DETAILS.$", 0x10, true, 0x5f54220b5078b6f3 );     
        SDK_FIXED_SIZE( details_t, 0x10 );     
    };                                    
};
#include "magic/details_t.end.hpp"
SDK_VERIFY( struct hv::details_t, 0x10 );
