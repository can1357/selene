#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/resume_workitem_t.start.hpp"
namespace mi
{
    // [struct _MI_RESUME_WORKITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resume_workitem_t                                    
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                      
        _m00 struct nt::kevent_t          resume_complete_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResumeCompleteEvent
        _m01 struct nt::work_queue_item_t work_item;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WorkItem
                                                                
        SDK_MAGIC_PROPERTIES( "_MI_RESUME_WORKITEM.$", 0x38, true, 0x872a322124b62ac );                      
        SDK_FIXED_SIZE( resume_workitem_t, 0x38 );                      
    };                                                          
};
#include "magic/resume_workitem_t.end.hpp"
SDK_VERIFY( struct mi::resume_workitem_t, 0x38 );
