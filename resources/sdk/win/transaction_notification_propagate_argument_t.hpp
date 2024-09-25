#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transaction_notification_propagate_argument_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_notification_propagate_argument_t
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 uint32_t          propagation_cookie;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PropagationCookie
        _m01 struct nt::guid_t uow;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .UOW
        _m02 struct nt::guid_t tm_identity;               //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TmIdentity
        _m03 uint32_t          buffer_length;             //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .BufferLength
                                                        
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT.$", 0x28, true, 0xe382bb4ae166e892 );                   
        SDK_FIXED_SIZE( transaction_notification_propagate_argument_t, 0x28 );                   
    };                                                  
};
#include "magic/transaction_notification_propagate_argument_t.end.hpp"
SDK_VERIFY( struct win::transaction_notification_propagate_argument_t, 0x28 );
