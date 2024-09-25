#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bddfallback_ctl_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_BDDFALLBACK_CTL]
    // => WDK 10 (NV)
    //
    struct bddfallback_ctl_t                          
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint8_t force_bdd_headless_next_fallback;  //{ +0x0000    } | .ForceBddHeadlessNextFallback
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_BDDFALLBACK_CTL.$", 0x0, false, 0x6ce0178b742871a3 );                                 
        SDK_FIXED_SIZE( bddfallback_ctl_t, 0x1 );                                 
    };                                                
};
#include "magic/bddfallback_ctl_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::bddfallback_ctl_t, 0x1 );
