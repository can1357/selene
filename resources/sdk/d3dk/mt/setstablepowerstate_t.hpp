#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setstablepowerstate_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETSTABLEPOWERSTATE]
    // => WDK 10 (NV)
    //
    struct setstablepowerstate_t
    {                           
        // WDK 10               
        //                      
        _m00 uint32_t h_adapter;  //{ +0x0000    } | .hAdapter
        _m01 int32_t  enabled;    //{ +0x0004    } | .Enabled
                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETSTABLEPOWERSTATE.$", 0x0, false, 0x7136e2b6fa68d9bd );          
        SDK_FIXED_SIZE( setstablepowerstate_t, 0x8 );          
    };                          
};
#include "magic/setstablepowerstate_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setstablepowerstate_t, 0x8 );
