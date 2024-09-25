#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_snapshot_escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DEBUG_SNAPSHOT_ESCAPE]
    // => WDK 10 (NV)
    //
    struct debug_snapshot_escape_t         
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint32_t               length;  //{ +0x0000    } | .Length
        _m01 sdk::array<uint8_t, 1> buffer;  //{ +0x0004    } | .Buffer
                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DEBUG_SNAPSHOT_ESCAPE.$", 0x0, false, 0x77a336f73529f5df );       
        SDK_FIXED_SIZE( debug_snapshot_escape_t, 0x8 );       
    };                                     
};
#include "magic/debug_snapshot_escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::debug_snapshot_escape_t, 0x8 );
