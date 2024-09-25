#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/t2_set_parameters_v0_t.start.hpp"
namespace win
{
    // [struct _T2_SET_PARAMETERS_V0]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct t2_set_parameters_v0_t       
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 int64_t  no_wake_tolerance;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NoWakeTolerance
                                        
        SDK_NONVOL_PROPERTIES( "_T2_SET_PARAMETERS_V0.$", 0x10, true, 0x4ec53d3b974e18b6 );                  
        SDK_FIXED_SIZE( t2_set_parameters_v0_t, 0x10 );                  
    };                                  
};
#include "magic/t2_set_parameters_v0_t.end.hpp"
SDK_VERIFY( struct win::t2_set_parameters_v0_t, 0x10 );
