#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unregisterbudgetchangenotification_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION]
    // => WDK 10 (NV)
    //
    struct unregisterbudgetchangenotification_t
    {                                          
        // WDK 10         
        //                
        _m00 void* handle;                       //{ +0x0000    } | .Handle
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION.$", 0x0, false, 0xda7c05a7e9fd6b6f );       
        SDK_FIXED_SIZE( unregisterbudgetchangenotification_t, 0x8 );       
    };                                         
};
#include "magic/unregisterbudgetchangenotification_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::unregisterbudgetchangenotification_t, 0x8 );
