#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mitigation_options_map_t.start.hpp"
namespace ps
{
    // [struct _PS_MITIGATION_OPTIONS_MAP]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mitigation_options_map_t      
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                               
        _m00 sdk::array<uint64_t, 2> map;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Map
                                         
        SDK_NONVOL_PROPERTIES( "_PS_MITIGATION_OPTIONS_MAP.$", 0x18, true, 0x151442cff0d08f55 );    
        SDK_DYNAMIC_SIZE( mitigation_options_map_t );    
    };                                   
};
#include "magic/mitigation_options_map_t.end.hpp"
