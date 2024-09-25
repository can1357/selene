#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transaction_notification_marshal_argument_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_notification_marshal_argument_t
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 uint32_t          marshal_cookie;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MarshalCookie
        _m01 struct nt::guid_t uow;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .UOW
                                                      
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT.$", 0x14, true, 0xe48630b31c91cabc );               
        SDK_FIXED_SIZE( transaction_notification_marshal_argument_t, 0x14 );               
    };                                                
};
#include "magic/transaction_notification_marshal_argument_t.end.hpp"
SDK_VERIFY( struct win::transaction_notification_marshal_argument_t, 0x14 );
