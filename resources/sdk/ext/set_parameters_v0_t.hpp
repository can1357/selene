#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_parameters_v0_t.start.hpp"
namespace ext
{
    // [struct _EXT_SET_PARAMETERS_V0]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct set_parameters_v0_t          
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 int64_t  no_wake_tolerance;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NoWakeTolerance
                                        
        SDK_NONVOL_PROPERTIES( "_EXT_SET_PARAMETERS_V0.$", 0x10, true, 0x69e422b2204d900d );                  
        SDK_FIXED_SIZE( set_parameters_v0_t, 0x10 );                  
    };                                  
};
#include "magic/set_parameters_v0_t.end.hpp"
SDK_VERIFY( struct ext::set_parameters_v0_t, 0x10 );
