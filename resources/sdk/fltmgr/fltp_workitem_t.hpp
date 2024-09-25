#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/fltp_workitem_t.start.hpp"
namespace fltmgr
{
    // [struct _FLTP_WORKITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fltp_workitem_t                          
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 union fltmgr::flt_type_t     type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct nt::work_queue_item_t work_item;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WorkItem
                                                    
        SDK_MAGIC_PROPERTIES( "_FLTP_WORKITEM.$", 0x28, true, 0x1d7c0c0b3c195c99 );          
        SDK_FIXED_SIZE( fltp_workitem_t, 0x28 );          
    };                                              
};
#include "magic/fltp_workitem_t.end.hpp"
SDK_VERIFY( struct fltmgr::fltp_workitem_t, 0x28 );
