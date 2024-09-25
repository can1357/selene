#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enginestatus_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ENGINESTATUS]
    // => WDK 10 (NV)
    //
    struct enginestatus_t        
    {                            
        // WDK 10                
        //                       
        _m00 uint1_t  responsive;  //{ +0x0000@0  } | .Responsive
        _m01 uint32_t value;       //{ +0x0000    } | .Value
                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_ENGINESTATUS.$", 0x0, false, 0x45b8b35f9210f329 );           
        SDK_FIXED_SIZE( enginestatus_t, 0x4 );           
    };                           
};
#include "magic/enginestatus_t.end.hpp"
SDK_VERIFY( struct dxgk::enginestatus_t, 0x4 );
