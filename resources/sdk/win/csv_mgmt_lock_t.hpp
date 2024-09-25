#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_mgmt_lock_t.start.hpp"
namespace win
{
    // [struct _CSV_MGMT_LOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_mgmt_lock_t  
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                            
        SDK_NONVOL_PROPERTIES( "_CSV_MGMT_LOCK.$", 0x4, true, 0xa00611dbcde8d5a8 );      
        SDK_FIXED_SIZE( csv_mgmt_lock_t, 0x4 );      
    };                      
};
#include "magic/csv_mgmt_lock_t.end.hpp"
SDK_VERIFY( struct win::csv_mgmt_lock_t, 0x4 );
