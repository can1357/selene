#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stopcapture_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_STOPCAPTURE]
    // => WDK 10 (NV)
    //
    struct stopcapture_t        
    {                           
        // WDK 10               
        //                      
        _m00 void* h_allocation;  //{ +0x0000    } | .hAllocation
                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_STOPCAPTURE.$", 0x0, false, 0x79ca7e4d30f2c9d4 );             
        SDK_FIXED_SIZE( stopcapture_t, 0x8 );             
    };                          
};
#include "magic/stopcapture_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::stopcapture_t, 0x8 );
