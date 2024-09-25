#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/qaisourcein_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QAISOURCEIN]
    // => WDK 10 (NV)
    //
    struct qaisourcein_t     
    {                        
        // WDK 10            
        //                   
        _m00 uint32_t source;  //{ +0x0000    } | .Source
                             
        SDK_NONVOL_PROPERTIES( "_DXGK_QAISOURCEIN.$", 0x0, false, 0x2634bf2653ec8672 );       
        SDK_FIXED_SIZE( qaisourcein_t, 0x4 );       
    };                       
};
#include "magic/qaisourcein_t.end.hpp"
SDK_VERIFY( struct dxgk::qaisourcein_t, 0x4 );
