#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/qaitargetin_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QAITARGETIN]
    // => WDK 10 (NV)
    //
    struct qaitargetin_t        
    {                           
        // WDK 10               
        //                      
        _m00 uint32_t target_id;  //{ +0x0000    } | .TargetId
                                
        SDK_NONVOL_PROPERTIES( "_DXGK_QAITARGETIN.$", 0x0, false, 0xfc7dd2382c5b3c73 );          
        SDK_FIXED_SIZE( qaitargetin_t, 0x4 );          
    };                          
};
#include "magic/qaitargetin_t.end.hpp"
SDK_VERIFY( struct dxgk::qaitargetin_t, 0x4 );
