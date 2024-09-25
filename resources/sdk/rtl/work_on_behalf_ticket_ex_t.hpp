#pragma once
#include <sdkgen/support_library.hpp>
#include "../alpc/work_on_behalf_ticket_t.hpp"

#include "magic/work_on_behalf_ticket_ex_t.start.hpp"
namespace rtl
{
    // [struct _RTL_WORK_ON_BEHALF_TICKET_EX]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_on_behalf_ticket_ex_t                            
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                       
        _m00 struct alpc::work_on_behalf_ticket_t ticket;          //{ +0x0000    +0x0000    +0x0000    } | .Ticket
        _m01 uint32_t                             flags;           //{ +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint1_t                              current_thread;  //{ +0x0008@0  +0x0008@0  +0x0008@0  } | .CurrentThread
                                                                 
        SDK_MAGIC_PROPERTIES( "_RTL_WORK_ON_BEHALF_TICKET_EX.$", 0x10, true, 0x83b9222d39002305 );               
        SDK_FIXED_SIZE( work_on_behalf_ticket_ex_t, 0x10 );               
    };                                                           
};
#include "magic/work_on_behalf_ticket_ex_t.end.hpp"
SDK_VERIFY( struct rtl::work_on_behalf_ticket_ex_t, 0x10 );
