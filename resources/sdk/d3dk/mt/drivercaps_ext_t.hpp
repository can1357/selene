#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/drivercaps_ext_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DRIVERCAPS_EXT]
    // => WDK 10 (NV)
    //
    struct drivercaps_ext_t                
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint1_t  virtual_mode_support;  //{ +0x0000@0  } | .VirtualModeSupport
        _m01 uint32_t value;                 //{ +0x0000    } | .Value
                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DRIVERCAPS_EXT.$", 0x0, false, 0xc70e5ef4576f1bf9 );                     
        SDK_FIXED_SIZE( drivercaps_ext_t, 0x4 );                     
    };                                     
};
#include "magic/drivercaps_ext_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::drivercaps_ext_t, 0x4 );
