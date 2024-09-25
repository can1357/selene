#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_active_time_accounting_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_ACTIVE_TIME_ACCOUNTING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_active_time_accounting_t            
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 uint64_t                total;         //{ +0x0000    +0x0000    +0x0000    } | .Total
        _m01 uint64_t                unattributed;  //{ +0x0008    +0x0008    +0x0008    } | .Unattributed
        _m02 sdk::array<uint64_t, 5> buckets;       //{ +0x0010    +0x0010    +0x0010    } | .Buckets
        _m03 sdk::array<uint64_t, 5> per_bucket;    //{ +0x0038    +0x0038    +0x0038    } | .PerBucket
                                                  
        SDK_MAGIC_PROPERTIES( "_POP_FX_ACTIVE_TIME_ACCOUNTING.$", 0x60, true, 0xa512f03a565d4de5 );             
        SDK_FIXED_SIZE( fx_active_time_accounting_t, 0x60 );             
    };                                            
};
#include "magic/fx_active_time_accounting_t.end.hpp"
SDK_VERIFY( struct pop::fx_active_time_accounting_t, 0x60 );
