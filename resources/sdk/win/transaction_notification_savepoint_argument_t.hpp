#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transaction_notification_savepoint_argument_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_notification_savepoint_argument_t
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t savepoint_id;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SavepointId
                                                        
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT.$", 0x4, true, 0xaebaf829e8458c3e );             
        SDK_FIXED_SIZE( transaction_notification_savepoint_argument_t, 0x4 );             
    };                                                  
};
#include "magic/transaction_notification_savepoint_argument_t.end.hpp"
SDK_VERIFY( struct win::transaction_notification_savepoint_argument_t, 0x4 );
