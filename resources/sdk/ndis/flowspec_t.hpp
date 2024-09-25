#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flowspec_t.start.hpp"
namespace ndis
{
    // [struct _flowspec]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flowspec_t                      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t token_rate;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenRate
        _m01 uint32_t token_bucket_size;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TokenBucketSize
        _m02 uint32_t peak_bandwidth;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PeakBandwidth
        _m03 uint32_t latency;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Latency
        _m04 uint32_t delay_variation;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DelayVariation
        _m05 uint32_t service_type;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ServiceType
        _m06 uint32_t max_sdu_size;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxSduSize
        _m07 uint32_t minimum_policed_size;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MinimumPolicedSize
                                           
        SDK_MAGIC_PROPERTIES( "_flowspec.$", 0x20, true, 0x2548bf5599ca3cbb );                     
        SDK_FIXED_SIZE( flowspec_t, 0x20 );                     
    };                                     
};
#include "magic/flowspec_t.end.hpp"
SDK_VERIFY( struct ndis::flowspec_t, 0x20 );
