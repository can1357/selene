#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_service_lock_statusa_t.start.hpp"
namespace win
{
    // [struct _QUERY_SERVICE_LOCK_STATUSA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_service_lock_statusa_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t f_is_locked;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fIsLocked
        _m01 char*    lp_lock_owner;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpLockOwner
        _m02 uint32_t dw_lock_duration;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwLockDuration
                                       
        SDK_MAGIC_PROPERTIES( "_QUERY_SERVICE_LOCK_STATUSA.$", 0x18, true, 0x4e2d7c976e5bc9ad );                 
        SDK_FIXED_SIZE( query_service_lock_statusa_t, 0x18 );                 
    };                                 
};
#include "magic/query_service_lock_statusa_t.end.hpp"
SDK_VERIFY( struct win::query_service_lock_statusa_t, 0x18 );
