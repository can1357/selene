#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dod_set_dirtyrect_mode_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DOD_SET_DIRTYRECT_MODE]
    // => WDK 10 (NV)
    //
    struct dod_set_dirtyrect_mode_t            
    {                                          
        // WDK 10                              
        //                                     
        _m00 int32_t b_force_full_screen_dirty;  //{ +0x0000    } | .bForceFullScreenDirty
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DOD_SET_DIRTYRECT_MODE.$", 0x0, false, 0xb674d162b570316f );                          
        SDK_FIXED_SIZE( dod_set_dirtyrect_mode_t, 0x4 );                          
    };                                         
};
#include "magic/dod_set_dirtyrect_mode_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::dod_set_dirtyrect_mode_t, 0x4 );
