#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/integrateddisplayflags_t.start.hpp"
namespace dxgk
{
    // [union _DXGK_INTEGRATEDDISPLAYFLAGS]
    // => WDK 10 (NV)
    //
    union integrateddisplayflags_t         
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint2_t  undocked_orientation;  //{ +0x0000@0  } | .UndockedOrientation
        _m01 uint2_t  docked_orientation;    //{ +0x0000@2  } | .DockedOrientation
        _m02 uint32_t value;                 //{ +0x0000    } | .Value
                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_INTEGRATEDDISPLAYFLAGS.$", 0x0, false, 0x6f4e24fbe7bb40a7 );                     
        SDK_FIXED_SIZE( integrateddisplayflags_t, 0x4 );                     
    };                                     
};
#include "magic/integrateddisplayflags_t.end.hpp"
SDK_VERIFY( union dxgk::integrateddisplayflags_t, 0x4 );
