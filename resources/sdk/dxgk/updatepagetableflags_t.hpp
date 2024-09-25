#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/updatepagetableflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_UPDATEPAGETABLEFLAGS]
    // => WDK 10 (NV)
    //
    struct updatepagetableflags_t    
    {                                
        // WDK 10                    
        //                           
        _m00 uint1_t repeat;           //{ +0x0000@0  } | .Repeat
        _m01 uint1_t initial_update;   //{ +0x0000@1  } | .InitialUpdate
        _m02 uint1_t notify_eviction;  //{ +0x0000@2  } | .NotifyEviction
        _m03 uint1_t use64kb_pages;    //{ +0x0000@3  } | .Use64KBPages
                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_UPDATEPAGETABLEFLAGS.$", 0x0, false, 0x90586fd4b8d8402c );                
        SDK_FIXED_SIZE( updatepagetableflags_t, 0x4 );                
    };                               
};
#include "magic/updatepagetableflags_t.end.hpp"
SDK_VERIFY( struct dxgk::updatepagetableflags_t, 0x4 );
