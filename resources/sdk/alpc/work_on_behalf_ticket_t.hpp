#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/work_on_behalf_ticket_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_WORK_ON_BEHALF_TICKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_on_behalf_ticket_t             
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t thread_id;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 uint32_t thread_creation_time_low;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThreadCreationTimeLow
                                               
        SDK_MAGIC_PROPERTIES( "_ALPC_WORK_ON_BEHALF_TICKET.$", 0x8, true, 0xce9ae3d0974d667e );                         
        SDK_FIXED_SIZE( work_on_behalf_ticket_t, 0x8 );                         
    };                                         
};
#include "magic/work_on_behalf_ticket_t.end.hpp"
SDK_VERIFY( struct alpc::work_on_behalf_ticket_t, 0x8 );
