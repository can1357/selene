#pragma once
#include <sdkgen/support_library.hpp>
#include "work_item_type_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/miniport_work_item_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_WORK_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_work_item_t                               
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 struct nt::single_list_entry_t link;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 enum ndis::work_item_type_t    work_item_type;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WorkItemType
        _m02 void*                          work_item_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WorkItemContext
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_WORK_ITEM.$", 0x18, true, 0x48a5752140b90d2a );                  
        SDK_FIXED_SIZE( miniport_work_item_t, 0x18 );                  
    };                                                        
};
#include "magic/miniport_work_item_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_work_item_t, 0x18 );
