#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_machine_crash_escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE]
    // => WDK 10 (NV)
    //
    struct request_machine_crash_escape_t
    {                                    
        // WDK 10            
        //                   
        _m00 uint64_t param1;              //{ +0x0000    } | .Param1
        _m01 uint64_t param2;              //{ +0x0008    } | .Param2
        _m02 uint64_t param3;              //{ +0x0010    } | .Param3
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE.$", 0x0, false, 0x5079d6a37f5724e0 );       
        SDK_FIXED_SIZE( request_machine_crash_escape_t, 0x18 );       
    };                                   
};
#include "magic/request_machine_crash_escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::request_machine_crash_escape_t, 0x18 );
