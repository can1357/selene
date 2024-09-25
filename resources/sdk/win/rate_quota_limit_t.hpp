#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rate_quota_limit_t.start.hpp"
namespace win
{
    // [union _RATE_QUOTA_LIMIT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union rate_quota_limit_t       
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t rate_data;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RateData
        _m01 uint7_t  rate_percent;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RatePercent
                                   
        SDK_NONVOL_PROPERTIES( "_RATE_QUOTA_LIMIT.$", 0x4, true, 0x4396f69f8fbfb11d );             
        SDK_FIXED_SIZE( rate_quota_limit_t, 0x4 );             
    };                             
};
#include "magic/rate_quota_limit_t.end.hpp"
SDK_VERIFY( union win::rate_quota_limit_t, 0x4 );
