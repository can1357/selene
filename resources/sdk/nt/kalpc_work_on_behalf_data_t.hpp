#pragma once
#include <sdkgen/support_library.hpp>
#include "../alpc/work_on_behalf_ticket_t.hpp"

#include "magic/kalpc_work_on_behalf_data_t.start.hpp"
namespace nt
{
    // [struct _KALPC_WORK_ON_BEHALF_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_work_on_behalf_data_t                   
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                               
        _m00 struct alpc::work_on_behalf_ticket_t ticket;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ticket
                                                         
        SDK_MAGIC_PROPERTIES( "_KALPC_WORK_ON_BEHALF_DATA.$", 0x8, true, 0x7340350c9c4f52e2 );       
        SDK_FIXED_SIZE( kalpc_work_on_behalf_data_t, 0x8 );       
    };                                                   
};
#include "magic/kalpc_work_on_behalf_data_t.end.hpp"
SDK_VERIFY( struct nt::kalpc_work_on_behalf_data_t, 0x8 );
