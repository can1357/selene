#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/full_dump64_t.start.hpp"
namespace nt
{
    // [struct _FULL_DUMP64]
    // => WDK 10 (NV)
    //
    struct full_dump64_t                
    {                                   
        // WDK 10                       
        //                              
        _m00 sdk::array<char, 1> memory;  //{ +0x0000    } | .Memory
                                        
        SDK_NONVOL_PROPERTIES( "_FULL_DUMP64.$", 0x0, false, 0x1c7a9e1f0125e25f );       
        SDK_FIXED_SIZE( full_dump64_t, 0x1 );       
    };                                  
};
#include "magic/full_dump64_t.end.hpp"
SDK_VERIFY( struct nt::full_dump64_t, 0x1 );
