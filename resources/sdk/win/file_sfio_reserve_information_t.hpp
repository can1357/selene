#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_sfio_reserve_information_t.start.hpp"
namespace win
{
    // [struct _FILE_SFIO_RESERVE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_sfio_reserve_information_t     
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t requests_per_period;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestsPerPeriod
        _m01 uint32_t period;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Period
        _m02 uint8_t  retry_failures;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RetryFailures
        _m03 uint8_t  discardable;               //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Discardable
        _m04 uint32_t request_size;              //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .RequestSize
        _m05 uint32_t num_outstanding_requests;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumOutstandingRequests
                                               
        SDK_NONVOL_PROPERTIES( "_FILE_SFIO_RESERVE_INFORMATION.$", 0x14, true, 0xe69f7712495ac6f2 );                         
        SDK_FIXED_SIZE( file_sfio_reserve_information_t, 0x14 );                         
    };                                         
};
#include "magic/file_sfio_reserve_information_t.end.hpp"
SDK_VERIFY( struct win::file_sfio_reserve_information_t, 0x14 );
