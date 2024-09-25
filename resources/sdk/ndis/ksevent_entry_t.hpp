#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct file_object_t; }

#include "magic/ksevent_entry_t.start.hpp"
namespace ndis
{
    struct ksdpc_item_t;
    struct ksevent_set_t;
    struct kseventdata_t;
    struct ksevent_item_t;
    struct ksbuffer_item_t;

    // [struct _KSEVENT_ENTRY]
    // => Windows 10 v1607
    //
    struct ksevent_entry_t                                           
    {                                                                
        // Windows 10 v1607                                          
        //                                                           
        _m00 nt::list_entry_t                   list_entry;            //{ +0x0000    } | .ListEntry
        _m01 void*                              object;                //{ +0x0010    } | .Object
        _m02 struct ndis::ksdpc_item_t*         dpc_item;              //{ +0x0018    } | .DpcItem
        _m03 struct ndis::ksbuffer_item_t*      buffer_item;           //{ +0x0018    } | .BufferItem
        _m04 struct ndis::kseventdata_t*        event_data;            //{ +0x0020    } | .EventData
        _m05 uint32_t                           notification_type;     //{ +0x0028    } | .NotificationType
        _m06 const struct ndis::ksevent_set_t*  event_set;             //{ +0x0030    } | .EventSet
        _m07 const struct ndis::ksevent_item_t* event_item;            //{ +0x0038    } | .EventItem
        _m08 struct nt::file_object_t*          file_object;           //{ +0x0040    } | .FileObject
        _m09 uint32_t                           semaphore_adjustment;  //{ +0x0048    } | .SemaphoreAdjustment
        _m10 uint32_t                           flags;                 //{ +0x0050    } | .Flags
                                                                     
        SDK_MAGIC_PROPERTIES( "_KSEVENT_ENTRY.$", 0x0, false, 0x377b0e18723149aa );                     
        SDK_FIXED_SIZE( ksevent_entry_t, 0x58 );                     
    };                                                               
};
#include "magic/ksevent_entry_t.end.hpp"
SDK_VERIFY( struct ndis::ksevent_entry_t, 0x58 );
