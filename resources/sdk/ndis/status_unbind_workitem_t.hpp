#pragma once
#include <sdkgen/support_library.hpp>
#include "work_item_t.hpp"

#include "magic/status_unbind_workitem_t.start.hpp"
namespace ndis
{
    struct miniport_block_t;

    // [struct _NDIS_STATUS_UNBIND_WORKITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct status_unbind_workitem_t                   
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                            
        _m00 struct ndis::work_item_t       work_item;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
        _m01 struct ndis::miniport_block_t* miniport;   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Miniport
                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_STATUS_UNBIND_WORKITEM.$", 0x58, true, 0x2190c04673b07aca );          
        SDK_FIXED_SIZE( status_unbind_workitem_t, 0x58 );          
    };                                                
};
#include "magic/status_unbind_workitem_t.end.hpp"
SDK_VERIFY( struct ndis::status_unbind_workitem_t, 0x58 );
