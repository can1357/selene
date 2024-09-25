#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/containerversion_for_negotiation_t.start.hpp"
namespace win
{
    // [struct CONTAINERVERSION_FOR_NEGOTIATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct containerversion_for_negotiation_t
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t version;                 //{ +0x0000    +0x0000    +0x0000    } | .version
        _m01 uint64_t capability_flags;        //{ +0x0008    +0x0008    +0x0008    } | .capabilityFlags
                                             
        SDK_MAGIC_PROPERTIES( "CONTAINERVERSION_FOR_NEGOTIATION.$", 0x10, true, 0x354f0112a53e80a6 );                 
        SDK_FIXED_SIZE( containerversion_for_negotiation_t, 0x10 );                 
    };                                       
};
#include "magic/containerversion_for_negotiation_t.end.hpp"
SDK_VERIFY( struct win::containerversion_for_negotiation_t, 0x10 );
