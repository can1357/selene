#pragma once
#include <sdkgen/support_library.hpp>
#include "ss_busy_reason_t.hpp"
#include "ss_stop_reason_t.hpp"

#include "magic/ss_resume_reason_t.start.hpp"
namespace ndis
{
    // [union _NDIS_SS_RESUME_REASON]
    // => Windows 10 v1607
    //
    union ss_resume_reason_t                         
    {                                                
        // Windows 10 v1607                          
        //                                           
        _m00 enum ndis::ss_stop_reason_t stop_reason;  //{ +0x0000    } | .StopReason
        _m01 enum ndis::ss_busy_reason_t busy_reason;  //{ +0x0000    } | .BusyReason
        _m02 uint32_t                    value;        //{ +0x0000    } | .Value
                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_SS_RESUME_REASON.$", 0x0, false, 0x78a74b7df4005b72 );            
        SDK_FIXED_SIZE( ss_resume_reason_t, 0x4 );            
    };                                               
};
#include "magic/ss_resume_reason_t.end.hpp"
SDK_VERIFY( union ndis::ss_resume_reason_t, 0x4 );
