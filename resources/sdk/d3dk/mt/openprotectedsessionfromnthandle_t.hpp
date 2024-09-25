#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openprotectedsessionfromnthandle_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE]
    // => WDK 10 (NV)
    //
    struct openprotectedsessionfromnthandle_t
    {                                        
        // WDK 10                 
        //                        
        _m00 void*    h_nt_handle;             //{ +0x0000    } | .hNtHandle
        _m01 uint32_t h_handle;                //{ +0x0008    } | .hHandle
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE.$", 0x0, false, 0x977f08ef0cadfc4e );            
        SDK_FIXED_SIZE( openprotectedsessionfromnthandle_t, 0x10 );            
    };                                       
};
#include "magic/openprotectedsessionfromnthandle_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openprotectedsessionfromnthandle_t, 0x10 );
