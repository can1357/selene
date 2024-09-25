#pragma once
#include <sdkgen/support_library.hpp>
#include "base_mcb_t.hpp"

#include "magic/large_mcb_t.start.hpp"
namespace nt
{
    struct fast_mutex_t;

    // [struct _LARGE_MCB]
    // => WDK 10 (NV)
    //
    struct large_mcb_t                              
    {                                               
        // WDK 10                                   
        //                                          
        _m00 struct nt::fast_mutex_t* guarded_mutex;  //{ +0x0000    } | .GuardedMutex
        _m01 struct nt::base_mcb_t    base_mcb;       //{ +0x0008    } | .BaseMcb
                                                    
        SDK_NONVOL_PROPERTIES( "_LARGE_MCB.$", 0x0, false, 0x2a75f1c48cc31fec );              
        SDK_FIXED_SIZE( large_mcb_t, 0x20 );              
    };                                              
};
#include "magic/large_mcb_t.end.hpp"
SDK_VERIFY( struct nt::large_mcb_t, 0x20 );
