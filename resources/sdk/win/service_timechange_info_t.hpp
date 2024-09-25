#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_timechange_info_t.start.hpp"
namespace win
{
    // [struct _SERVICE_TIMECHANGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_timechange_info_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 int64_t li_new_time;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .liNewTime
        _m01 int64_t li_old_time;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .liOldTime
                                    
        SDK_MAGIC_PROPERTIES( "_SERVICE_TIMECHANGE_INFO.$", 0x10, true, 0x3ab90cd46410d0b9 );            
        SDK_FIXED_SIZE( service_timechange_info_t, 0x10 );            
    };                              
};
#include "magic/service_timechange_info_t.end.hpp"
SDK_VERIFY( struct win::service_timechange_info_t, 0x10 );
