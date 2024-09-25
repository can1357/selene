#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

#include "magic/bad_memory_event_entry_t.start.hpp"
namespace mi
{
    // [struct _MI_BAD_MEMORY_EVENT_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bad_memory_event_entry_t                        
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 uint32_t                     bug_check_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BugCheckCode
        _m01 int32_t                      active;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Active
        _m02 uint32_t                     data;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
        _m03 int64_t                      physical_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PhysicalAddress
        _m04 struct nt::work_queue_item_t work_item;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WorkItem
                                                           
        SDK_MAGIC_PROPERTIES( "_MI_BAD_MEMORY_EVENT_ENTRY.$", 0x38, true, 0xfea241165740b2fd );                 
        SDK_FIXED_SIZE( bad_memory_event_entry_t, 0x38 );                 
    };                                                     
};
#include "magic/bad_memory_event_entry_t.end.hpp"
SDK_VERIFY( struct mi::bad_memory_event_entry_t, 0x38 );
