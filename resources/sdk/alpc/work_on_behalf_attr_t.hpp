#pragma once
#include <sdkgen/support_library.hpp>
#include "work_on_behalf_ticket_t.hpp"

#include "magic/work_on_behalf_attr_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_WORK_ON_BEHALF_ATTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_on_behalf_attr_t                         
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                               
        _m00 struct alpc::work_on_behalf_ticket_t ticket;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ticket
                                                         
        SDK_MAGIC_PROPERTIES( "_ALPC_WORK_ON_BEHALF_ATTR.$", 0x8, true, 0x82e46518d6a6dca1 );       
        SDK_FIXED_SIZE( work_on_behalf_attr_t, 0x8 );       
    };                                                   
};
#include "magic/work_on_behalf_attr_t.end.hpp"
SDK_VERIFY( struct alpc::work_on_behalf_attr_t, 0x8 );
