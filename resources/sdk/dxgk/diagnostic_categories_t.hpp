#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diagnostic_categories_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAGNOSTIC_CATEGORIES]
    // => WDK 10 (NV)
    //
    struct diagnostic_categories_t  
    {                               
        // WDK 10                   
        //                          
        _m00 uint1_t  notifications;  //{ +0x0000@0  } | .Notifications
        _m01 uint1_t  progressions;   //{ +0x0000@1  } | .Progressions
        _m02 uint32_t value;          //{ +0x0000    } | .Value
                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAGNOSTIC_CATEGORIES.$", 0x0, false, 0xdb1e9196841017f4 );              
        SDK_FIXED_SIZE( diagnostic_categories_t, 0x4 );              
    };                              
};
#include "magic/diagnostic_categories_t.end.hpp"
SDK_VERIFY( struct dxgk::diagnostic_categories_t, 0x4 );
