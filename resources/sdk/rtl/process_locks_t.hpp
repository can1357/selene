#pragma once
#include <sdkgen/support_library.hpp>
#include "process_lock_information_t.hpp"

#include "magic/process_locks_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_LOCKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_locks_t            
    {                                 
        using locks_t = sdk::array<struct rtl::process_lock_information_t, 1>;                
                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t number_of_locks;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfLocks
        _m01 locks_t  locks;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Locks
                                      
        SDK_NONVOL_PROPERTIES( "_RTL_PROCESS_LOCKS.$", 0x38, true, 0x1f0ddd78a4583248 );                
        SDK_FIXED_SIZE( process_locks_t, 0x38 );                
    };                                
};
#include "magic/process_locks_t.end.hpp"
SDK_VERIFY( struct rtl::process_locks_t, 0x38 );
