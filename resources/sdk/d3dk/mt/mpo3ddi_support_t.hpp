#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mpo3ddi_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MPO3DDI_SUPPORT]
    // => WDK 10 (NV)
    //
    struct mpo3ddi_support_t   
    {                          
        // WDK 10              
        //                     
        _m00 int32_t supported;  //{ +0x0000    } | .Supported
                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MPO3DDI_SUPPORT.$", 0x0, false, 0xe906db9a4f1eddcb );          
        SDK_FIXED_SIZE( mpo3ddi_support_t, 0x4 );          
    };                         
};
#include "magic/mpo3ddi_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::mpo3ddi_support_t, 0x4 );
