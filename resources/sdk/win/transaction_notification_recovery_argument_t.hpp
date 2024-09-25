#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transaction_notification_recovery_argument_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_notification_recovery_argument_t
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 struct nt::guid_t enlistment_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EnlistmentId
        _m01 struct nt::guid_t uow;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .UOW
                                                       
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT.$", 0x20, true, 0x4784ab23c75e1944 );              
        SDK_FIXED_SIZE( transaction_notification_recovery_argument_t, 0x20 );              
    };                                                 
};
#include "magic/transaction_notification_recovery_argument_t.end.hpp"
SDK_VERIFY( struct win::transaction_notification_recovery_argument_t, 0x20 );
