#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transaction_notification_tm_online_argument_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_notification_tm_online_argument_t
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 struct nt::guid_t tm_identity;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TmIdentity
        _m01 uint32_t          flags;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                        
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT.$", 0x14, true, 0x763404cfea8c8df8 );            
        SDK_FIXED_SIZE( transaction_notification_tm_online_argument_t, 0x14 );            
    };                                                  
};
#include "magic/transaction_notification_tm_online_argument_t.end.hpp"
SDK_VERIFY( struct win::transaction_notification_tm_online_argument_t, 0x14 );
