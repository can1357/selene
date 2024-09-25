#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transaction_notification_t.start.hpp"
namespace nt
{
    // [struct _TRANSACTION_NOTIFICATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_notification_t          
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 void*    transaction_key;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TransactionKey
        _m01 uint32_t transaction_notification;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TransactionNotification
        _m02 int64_t  tm_virtual_clock;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TmVirtualClock
        _m03 uint32_t argument_length;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ArgumentLength
                                               
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_NOTIFICATION.$", 0x20, true, 0xd8b0908118404188 );                         
        SDK_FIXED_SIZE( transaction_notification_t, 0x20 );                         
    };                                         
};
#include "magic/transaction_notification_t.end.hpp"
SDK_VERIFY( struct nt::transaction_notification_t, 0x20 );
