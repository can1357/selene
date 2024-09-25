#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "fltp_workitem_t.hpp"
#include "../io/priority_info_t.hpp"
#include "fltp_work_queue_type_t.hpp"

#include "magic/work_context_t.start.hpp"
namespace fltmgr
{
    // [struct _WORK_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_context_t                                         
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                        
        _m00 struct fltmgr::fltp_workitem_t      flt_work;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FltWork
        _m01 sdk::function<int32_t(void*)>*      sync_op_routine;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SyncOpRoutine
        _m02 void*                               parameter;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Parameter
        _m03 struct nt::kevent_t                 sync_event;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SyncEvent
        _m04 int32_t                             status;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Status
        _m05 enum fltmgr::fltp_work_queue_type_t queue_type;        //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .QueueType
        _m06 struct io::priority_info_t          io_priority_info;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .IoPriorityInfo
                                                                  
        SDK_MAGIC_PROPERTIES( "_WORK_CONTEXT.$", 0x68, true, 0x54b1e866f869f119 );                 
        SDK_FIXED_SIZE( work_context_t, 0x68 );                   
    };                                                            
};
#include "magic/work_context_t.end.hpp"
SDK_VERIFY( struct fltmgr::work_context_t, 0x68 );
