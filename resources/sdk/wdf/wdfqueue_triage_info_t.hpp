#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfqueue_triage_info_t.start.hpp"
namespace wdf
{
    // [struct _WDFQUEUE_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfqueue_triage_info_t          
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t queue_size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueueSize
        _m01 uint32_t irp_queue1;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IrpQueue1
        _m02 uint32_t irp_queue2;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IrpQueue2
        _m03 uint32_t request_list1;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RequestList1
        _m04 uint32_t request_list2;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequestList2
        _m05 uint32_t fwd_progress_context;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FwdProgressContext
        _m06 uint32_t pkg_io;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PkgIo
                                           
        SDK_MAGIC_PROPERTIES( "_WDFQUEUE_TRIAGE_INFO.$", 0x1c, true, 0x20870f3ab2e267b7 );                     
        SDK_FIXED_SIZE( wdfqueue_triage_info_t, 0x1c );                     
    };                                     
};
#include "magic/wdfqueue_triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::wdfqueue_triage_info_t, 0x1c );
