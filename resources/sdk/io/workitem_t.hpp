#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/work_queue_item_t.hpp"

namespace nt { struct ethread_t; }

#include "magic/workitem_t.start.hpp"
namespace io
{
    struct workitem_t;

    // [struct _IO_WORKITEM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct workitem_t                                           
    {                                                           
        using routine_t = sdk::function<void(void*, void*, struct io::workitem_t*)>*;                      
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                      
        _m00 struct nt::work_queue_item_t work_item;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
        _m01 routine_t                    routine;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Routine
        _m02 void*                        io_object;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoObject
        _m03 void*                        context;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Context
        _m04 struct nt::ethread_t*        work_on_behalf_thread;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WorkOnBehalfThread
        _m05 uint32_t                     type;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Type
        _m06 struct nt::guid_t            activity_id;            //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ActivityId
                                                                
        SDK_MAGIC_PROPERTIES( "_IO_WORKITEM.$", 0x58, true, 0xe9357310bc1a05c4 );                      
        SDK_DYNAMIC_SIZE( workitem_t );                         
    };                                                          
};
#include "magic/workitem_t.end.hpp"
