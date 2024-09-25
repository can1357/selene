#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/ldw_work_context_t.start.hpp"
namespace mi
{
    // [struct _MI_LDW_WORK_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ldw_work_context_t                            
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                               
        _m00 struct nt::work_queue_item_t work_item;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
        _m01 struct nt::file_object_t*    file_object;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FileObject
        _m02 int32_t                      error_status;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ErrorStatus
        _m03 volatile int32_t             active;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Active
        _m04 uint8_t                      free_when_done;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FreeWhenDone
                                                         
        SDK_MAGIC_PROPERTIES( "_MI_LDW_WORK_CONTEXT.$", 0x38, true, 0x45059321bca34852 );               
        SDK_FIXED_SIZE( ldw_work_context_t, 0x38 );               
    };                                                   
};
#include "magic/ldw_work_context_t.end.hpp"
SDK_VERIFY( struct mi::ldw_work_context_t, 0x38 );
