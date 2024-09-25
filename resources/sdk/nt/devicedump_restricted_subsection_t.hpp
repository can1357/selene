#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/devicedump_restricted_subsection_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_RESTRICTED_SUBSECTION]
    // => WDK 10 (NV)
    //
    struct devicedump_restricted_subsection_t
    {                                        
        // WDK 10                          
        //                                 
        _m00 sdk::array<uint8_t, 1> b_data;    //{ +0x0000    } | .bData
                                             
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_RESTRICTED_SUBSECTION.$", 0x0, false, 0xfecd89877a64dfa9 );       
        SDK_FIXED_SIZE( devicedump_restricted_subsection_t, 0x1 );       
    };                                       
};
#include "magic/devicedump_restricted_subsection_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_restricted_subsection_t, 0x1 );
