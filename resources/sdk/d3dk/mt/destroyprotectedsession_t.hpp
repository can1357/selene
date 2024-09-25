#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroyprotectedsession_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYPROTECTEDSESSION]
    // => WDK 10 (NV)
    //
    struct destroyprotectedsession_t
    {                               
        // WDK 10              
        //                     
        _m00 uint32_t h_handle;       //{ +0x0000    } | .hHandle
                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYPROTECTEDSESSION.$", 0x0, false, 0x8d6e2ee020583adc );         
        SDK_FIXED_SIZE( destroyprotectedsession_t, 0x4 );         
    };                              
};
#include "magic/destroyprotectedsession_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroyprotectedsession_t, 0x4 );
