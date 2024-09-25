#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bpio_results_t.start.hpp"
namespace fs
{
    // [struct _FS_BPIO_RESULTS]
    // => Windows 11
    //
    struct bpio_results_t                                     
    {                                                         
        // Windows 11                                         
        //                                                    
        _m00 int32_t                  op_status;                //{ +0x0000    } | .OpStatus
        _m01 uint16_t                 failing_driver_name_len;  //{ +0x0004    } | .FailingDriverNameLen
        _m02 sdk::array<wchar_t, 32>  failing_driver_name;      //{ +0x0006    } | .FailingDriverName
        _m03 uint16_t                 failure_reason_len;       //{ +0x0046    } | .FailureReasonLen
        _m04 sdk::array<wchar_t, 128> failure_reason;           //{ +0x0048    } | .FailureReason
                                                              
        SDK_MAGIC_PROPERTIES( "_FS_BPIO_RESULTS.$", 0x0, false, 0xa96e7fbe8b97a9b4 );                        
        SDK_FIXED_SIZE( bpio_results_t, 0x148 );                        
    };                                                        
};
#include "magic/bpio_results_t.end.hpp"
SDK_VERIFY( struct fs::bpio_results_t, 0x148 );
