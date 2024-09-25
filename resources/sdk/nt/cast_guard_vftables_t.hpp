#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cast_guard_vftables_t.start.hpp"
namespace nt
{
    // [struct CastGuardVftables]
    // => WDK 10 (NV)
    //
    struct cast_guard_vftables_t           
    {                                      
        // WDK 10                          
        //                                 
        _m00 sdk::array<char, 128> padding;  //{ +0x0000    } | .padding
                                           
        SDK_NONVOL_PROPERTIES( "CastGuardVftables.$", 0x0, false, 0x486f6e912a66dc07 );        
        SDK_FIXED_SIZE( cast_guard_vftables_t, 0x80 );        
    };                                     
};
#include "magic/cast_guard_vftables_t.end.hpp"
SDK_VERIFY( struct nt::cast_guard_vftables_t, 0x80 );
